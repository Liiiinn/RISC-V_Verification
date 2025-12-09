`ifndef ID_OUT_MONITOR_SVH
`define ID_OUT_MONITOR_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class id_out_monitor extends uvm_monitor;
    
    `uvm_component_utils(id_out_monitor)
    
    // config 
    id_out_config m_config;
    
    // Analysis port (to scoreboard)
    uvm_analysis_port #(id_out_seq_item) m_analysis_port;
    
    function new(string name = "id_out_monitor", uvm_component parent = null);
        super.new(name, parent);
        m_analysis_port = new("m_analysis_port", this);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Get config from config_db
        if (!uvm_config_db#(id_out_config)::get(this, "", "id_out_config", m_config)) begin
            `uvm_fatal(get_name(), "Cannot get id_out_config from config_db!")
        end
    endfunction
    
    virtual task run_phase(uvm_phase phase);
        id_out_seq_item item;
        
        forever begin
            // Wait for reset release
            wait(m_config.m_vif.rstn);
            `uvm_info(get_name(), "Reset released, starting output monitoring", UVM_HIGH)
            
            // Continuously monitor output
            while(m_config.m_vif.rstn) begin
                @(m_config.m_vif.monitor_cb);
                
                // Create new transaction
                item = id_out_seq_item::type_id::create("item");
                
                // Collect output signals
                item.branch_out = m_config.m_vif.monitor_cb.branch_out;
                item.reg_rd_id = m_config.m_vif.monitor_cb.reg_rd_id;
                item.pc_out = m_config.m_vif.monitor_cb.pc_out;
                item.read_data1 = m_config.m_vif.monitor_cb.read_data1;
                item.read_data2 = m_config.m_vif.monitor_cb.read_data2;
                item.immediate_data = m_config.m_vif.monitor_cb.immediate_data;
                item.control_signals = m_config.m_vif.monitor_cb.control_signals;
                
                // Collect debug registers
                // for (int i = 0; i < REGISTER_FILE_SIZE; i++) begin
                //     item.debug_reg[i] = m_config.m_vif.monitor_cb.debug_reg[i];
                // end
                
                `uvm_info(get_name(), 
                    $sformatf("Captured ID output: rd=%0d, read1=0x%0h, read2=0x%0h, imm=0x%0h", 
                              item.reg_rd_id, item.read_data1, item.read_data2, item.immediate_data), 
                    UVM_HIGH)
                
                // Send to scoreboard
                m_analysis_port.write(item);
            end
            
            `uvm_info(get_name(), "Reset detected, pausing output monitoring", UVM_HIGH)
        end
    endtask
    
endclass : id_out_monitor

`endif