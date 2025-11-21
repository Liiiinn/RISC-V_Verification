`ifndef ID_OUT_AGENT_SVH
`define ID_OUT_AGENT_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class id_out_agent extends uvm_agent;
    
    `uvm_component_utils(id_out_agent)
    
    // components
    id_out_monitor m_monitor;
    id_out_config m_config;
    
    // Analysis port (to expose monitor's port)
    uvm_analysis_port #(id_out_seq_item) m_analysis_port;
    
    function new(string name = "id_out_agent", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Get config
        if (!uvm_config_db#(id_out_config)::get(this, "", "id_out_config", m_config)) begin
            `uvm_fatal(get_name(), "Cannot get id_out_config from config_db!")
        end
        
        // Pass config to subcomponents
        uvm_config_db#(id_out_config)::set(this, "m_monitor", "id_out_config", m_config);
        
        // Create monitor (only monitor, no driver/sequencer)
        if (m_config.has_monitor) begin
            m_monitor = id_out_monitor::type_id::create("m_monitor", this);
        end
    endfunction
    
    virtual function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        
        // Expose monitor's analysis port
        if (m_config.has_monitor) begin
            m_analysis_port = m_monitor.m_analysis_port;
        end
    endfunction
    
    virtual function void end_of_elaboration_phase(uvm_phase phase);
        super.end_of_elaboration_phase(phase);
        `uvm_info(get_name(), "ID Output Agent is alive (passive mode)...", UVM_MEDIUM)
    endfunction
    
endclass : id_out_agent

`endif