// decode_agent.sv - UVM agent for decode stage
`ifndef DECODE_AGENT_SV
`define DECODE_AGENT_SV

import uvm_pkg::*;
`include "uvm_macros.svh"

class decode_agent extends uvm_agent;
    
    `uvm_component_utils(decode_agent)
    
    decode_driver driver;
    decode_monitor monitor;
    uvm_sequencer #(decode_item) sequencer;
    
    uvm_analysis_port #(decode_item) analysis_port;
    
    function new(string name = "decode_agent", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        monitor = decode_monitor::type_id::create("monitor", this);
        
        if (get_is_active() == UVM_ACTIVE) begin
            driver = decode_driver::type_id::create("driver", this);
            sequencer = uvm_sequencer#(decode_item)::type_id::create("sequencer", this);
        end
    endfunction
    
    virtual function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        
        analysis_port = monitor.analysis_port;
        
        if (get_is_active() == UVM_ACTIVE) begin
            driver.seq_item_port.connect(sequencer.seq_item_export);
        end
    endfunction
    
endclass

`endif
