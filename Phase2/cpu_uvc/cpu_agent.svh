`ifndef CPU_AGENT_SVH
`define CPU_AGENT_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class cpu_agent extends uvm_agent;
    
    `uvm_component_utils(cpu_agent)
    
    cpu_config m_config;
    cpu_monitor m_monitor;
    
    function new(string name = "cpu_agent", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        if (!uvm_config_db#(cpu_config)::get(this, "", "cpu_config", m_config)) begin
            `uvm_fatal(get_name(), "Cannot get cpu_config!")
        end
        
        // CPU agent只有monitor（被动）
        if (m_config.has_monitor == UVM_ACTIVE) begin
            m_monitor = cpu_monitor::type_id::create("m_monitor", this);
            uvm_config_db#(cpu_config)::set(this, "m_monitor", "cpu_config", m_config);
        end
        
        `uvm_info(get_name(), "CPU agent built (passive mode)", UVM_MEDIUM)
    endfunction
    
endclass : cpu_agent

`endif