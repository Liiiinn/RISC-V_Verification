`ifndef EXE_AGENT_SVH
`define EXE_AGENT_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class exe_agent extends uvm_agent;
    `uvm_component_utils(exe_agent)
    
    exe_monitor m_monitor;
    
    function new(string name = "exe_agent", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        m_monitor = exe_monitor::type_id::create("m_monitor", this);
    endfunction
    
    virtual function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
    endfunction
endclass

`endif