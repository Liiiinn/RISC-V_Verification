// decode_monitor.sv - UVM monitor for decode stage
`ifndef DECODE_MONITOR_SV
`define DECODE_MONITOR_SV

import uvm_pkg::*;
`include "uvm_macros.svh"

class decode_monitor extends uvm_monitor;
    
    `uvm_component_utils(decode_monitor)
    
    virtual decode_interface vif;
    uvm_analysis_port #(decode_item) analysis_port;
    
    function new(string name = "decode_monitor", uvm_component parent);
        super.new(name, parent);
        analysis_port = new("analysis_port", this);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        if (!uvm_config_db#(virtual decode_interface)::get(this, "", "decode_vif", vif)) begin
            `uvm_fatal("MONITOR", "Could not get virtual interface")
        end
    endfunction
    
    virtual task run_phase(uvm_phase phase);
        decode_item item;
        
        wait(vif.reset_n);
        
        forever begin
            @(vif.monitor_cb);
            
            // Create new item and capture all signals
            item = decode_item::type_id::create("item");
            
            // task12: Capture inputs
            item.instruction = vif.monitor_cb.instruction;

            
            //task 13: Capture outputs
            item.branch_out = vif.monitor_cb.branch_out;

            
            //task 14: Copy debug registers

            
            `uvm_info("MONITOR", $sformatf("Captured transaction: %s", item.sprint()), UVM_HIGH)
            
            analysis_port.write(item);
        end
    endtask
    
endclass

`endif
