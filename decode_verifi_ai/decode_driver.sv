// decode_driver.sv - UVM driver for decode stage
`ifndef DECODE_DRIVER_SV
`define DECODE_DRIVER_SV

import uvm_pkg::*;
`include "uvm_macros.svh"

class decode_driver extends uvm_driver #(decode_item);
    
    `uvm_component_utils(decode_driver)
    
    virtual decode_interface vif;
    
    function new(string name = "decode_driver", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        if (!uvm_config_db#(virtual decode_interface)::get(this, "", "decode_vif", vif)) begin
            `uvm_fatal("DRIVER", "Could not get virtual interface")
        end
    endfunction
    
    virtual task run_phase(uvm_phase phase);
        decode_item req;
        
        // Initialize signals
        vif.driver_cb.instruction <= '0;
        vif.driver_cb.pc <= '0;
        vif.driver_cb.write_en <= '0;
        vif.driver_cb.write_id <= '0;
        vif.driver_cb.write_data <= '0;
        vif.driver_cb.branch_in <= '0;
        
        wait(vif.reset_n);
        @(vif.driver_cb);
        
        forever begin
            seq_item_port.get_next_item(req);
            
            drive_transaction(req);
            
            seq_item_port.item_done();
        end
    endtask
    
    virtual task drive_transaction(decode_item req);
        `uvm_info("DRIVER", $sformatf("Driving transaction: %s", req.sprint()), UVM_HIGH)
        
        @(vif.driver_cb);
        vif.driver_cb.instruction <= req.instruction;
        vif.driver_cb.pc <= req.pc;
        vif.driver_cb.write_en <= req.write_en;
        vif.driver_cb.write_id <= req.write_id;
        vif.driver_cb.write_data <= req.write_data;
        vif.driver_cb.branch_in <= req.branch_in;
        
        // Hold for one cycle
        @(vif.driver_cb);
    endtask
    
endclass

`endif
