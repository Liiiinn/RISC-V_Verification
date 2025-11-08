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
            
            // Capture inputs
            item.instruction = vif.monitor_cb.instruction;
            item.pc = vif.monitor_cb.pc;
            item.write_en = vif.monitor_cb.write_en;
            item.write_id = vif.monitor_cb.write_id;
            item.write_data = vif.monitor_cb.write_data;
            item.branch_in = vif.monitor_cb.branch_in;
            
            // Capture outputs
            item.branch_out = vif.monitor_cb.branch_out;
            item.reg_rd_id = vif.monitor_cb.reg_rd_id;
            item.pc_out = vif.monitor_cb.pc_out;
            item.read_data1 = vif.monitor_cb.read_data1;
            item.read_data2 = vif.monitor_cb.read_data2;
            item.immediate_data = vif.monitor_cb.immediate_data;
            item.control_signals = vif.monitor_cb.control_signals;
            
            // Copy debug registers
            for (int i = 0; i < REGISTER_FILE_SIZE; i++) begin
                item.debug_reg[i] = vif.monitor_cb.debug_reg[i];
            end
            
            `uvm_info("MONITOR", $sformatf("Captured transaction: %s", item.sprint()), UVM_HIGH)
            
            analysis_port.write(item);
        end
    endtask
    
endclass

`endif
