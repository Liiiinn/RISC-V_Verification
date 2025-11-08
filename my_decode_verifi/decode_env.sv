// decode_env.sv - UVM environment for decode stage
`ifndef DECODE_ENV_SV
`define DECODE_ENV_SV

import uvm_pkg::*;
`include "uvm_macros.svh"

class decode_env extends uvm_env;
    
    `uvm_component_utils(decode_env)
    
    decode_agent agent;
    decode_scoreboard scoreboard;
    
    function new(string name = "decode_env", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        // task 20: Create agent and scoreboard

    endfunction
    
    virtual function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        
        agent.analysis_port.connect(scoreboard.analysis_imp);
    endfunction
    
endclass

`endif
