// decode_monitor.sv - UVM monitor for decode stage
`ifndef DECODE_MONITOR_SV
`define DECODE_MONITOR_SV

import uvm_pkg::*;
import common::*;
`include "uvm_macros.svh"

class id_monitor extends uvm_monitor;

    `uvm_component_utils(id_monitor)
    id_config m_config;
    uvm_analysis_port #(id_seq_item) m_analysis_port;
    function new(string name = "id_monitor", uvm_component parent = null);
        super.new(name, parent);
        if (!uvm_config_db#(id_config)::get(this, "", "config", m_config)) begin
            `uvm_fatal(get_name(), "Could not get id_config")
        end
        m_analysis_port = new("m_analysis_port", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
    endfunction
      task run_phase(uvm_phase phase);
        forever begin
            id_seq_item item;
            
            // Wait for reset deassertion
            if (!m_config.m_vif.rstn) begin
                `uvm_info(get_name(), "Waiting for reset deassertion...", UVM_LOW);
                wait(m_config.m_vif.rstn);
                `uvm_info(get_name(), "Reset released, starting monitoring", UVM_LOW);
            end
            
            // Monitor transactions while not in reset
            while(m_config.m_vif.rstn) begin
                @(m_config.m_vif.monitor_cb);
                `uvm_info(get_name(), "Captured clock edge", UVM_MEDIUM);
                
                // Create new item and capture all signals
                item = id_seq_item::type_id::create("item");
                
                // Capture inputs
                item.instruction = m_config.m_vif.monitor_cb.instruction;
                item.pc = m_config.m_vif.monitor_cb.pc;
                item.write_en = m_config.m_vif.monitor_cb.write_en;
                item.write_id = m_config.m_vif.monitor_cb.write_id;
                item.write_data = m_config.m_vif.monitor_cb.write_data;
                item.branch_in = m_config.m_vif.monitor_cb.branch_in;
                
                // Capture outputs
               // item.branch_out = m_config.m_vif.monitor_cb.branch_out;
               // item.reg_rd_id  = m_config.m_vif.monitor_cb.reg_rd_id;
               // item.read_data1 = m_config.m_vif.monitor_cb.read_data1;
               // item.read_data2 = m_config.m_vif.monitor_cb.read_data2;
               // item.control_signals = m_config.m_vif.monitor_cb.control_signals;
               // item.immediate_data = m_config.m_vif.monitor_cb.immediate_data;
               // item.pc_out = m_config.m_vif.monitor_cb.pc_out;

                // Copy debug registers
                // for (int i = 0; i < REGISTER_FILE_SIZE; i++) begin
                //     item.debug_reg[i] = m_config.m_vif.monitor_cb.debug_reg[i];
                // end
                
                `uvm_info("MONITOR", $sformatf("Captured transaction: %s", item.sprint()), UVM_HIGH)
                m_analysis_port.write(item);
            end
            
            `uvm_info(get_name(), "Reset detected, pausing monitoring", UVM_HIGH);
        end
    endtask
    
endclass

`endif
