`ifndef EXE_MONITOR_SVH
`define EXE_MONITOR_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class exe_monitor extends uvm_monitor;
    `uvm_component_utils(exe_monitor)

    // exe_config m_config;
    virtual exe_if vif;
    uvm_analysis_port #(exe_seq_item) m_analysis_port;
    
    function new(string name = "exe_monitor", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        m_analysis_port = new("m_analysis_port", this);

        if(!uvm_config_db#(virtual exe_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal(get_name(), "Failed to get exe_if from config_db")
        end
    endfunction
    
    virtual task run_phase(uvm_phase phase);
        exe_seq_item trans;
        
        forever begin
            @(posedge vif.clk);
            
            if (vif.rstn) begin
                trans = exe_seq_item::type_id::create("trans");
                
                // Sample inputs
                trans.data1 = vif.data1;
                trans.data2 = vif.data2;
                trans.immediate_data = vif.immediate_data;
                trans.pc = vif.pc;
                trans.control_in = vif.control_in;
                trans.branch_predict = vif.branch_predict;
                trans.fwd_sel_rs1 = vif.fwd_sel_rs1;
                trans.fwd_sel_rs2 = vif.fwd_sel_rs2;
                trans.fwd_data_ex_mem = vif.fwd_data_ex_mem;
                trans.fwd_data_mem_wb = vif.fwd_data_mem_wb;
                
                // Sample outputs
                trans.control_out = vif.control_out;
                trans.exception = vif.exception;
                trans.rd_data = vif.rd_data;
                trans.branch_target_pc = vif.branch_target_pc;
                trans.branch_flush = vif.branch_flush;
                trans.memory_data = vif.memory_data;
                trans.memory_addr = vif.memory_addr;
                trans.muldiv_ready = vif.muldiv_ready;
                
                trans.ex2if_branch_valid = vif.ex2if_branch_valid;
                trans.ex2if_branch_taken = vif.ex2if_branch_taken;
                trans.ex2if_branch_addr = vif.ex2if_branch_addr;
                trans.ex2if_branch_target_addr = vif.ex2if_branch_target_addr;
                trans.ex2if_branch_update_GHSR = vif.ex2if_branch_update_GHSR;
                trans.ex2if_GHSR_restore = vif.ex2if_GHSR_restore;
                
                `uvm_info(get_name(), 
                    $sformatf("Monitored EXE transaction:\n%s", trans.sprint()), 
                    UVM_HIGH)

                m_analysis_port.write(trans);
            end
        end
    endtask
endclass

`endif
