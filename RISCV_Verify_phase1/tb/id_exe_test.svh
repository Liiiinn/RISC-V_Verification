`ifndef ID_EXE_TEST_SVH
`define ID_EXE_TEST_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class id_exe_test extends base_test;
    `uvm_component_utils(id_exe_test)
    
    function new(string name = "id_exe_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info(get_name(), "Building ID+EXE test", UVM_LOW)
    endfunction
    
    virtual task run_phase(uvm_phase phase);
        rstn_seq rstn;
        id_seq_random_sequence id;
        int num_instructions = 500;  // 可以通过 +define 配置
        
        phase.raise_objection(this, "Starting ID+EXE test");
        
        `uvm_info(get_name(), "========================================", UVM_LOW)
        `uvm_info(get_name(), "   ID+EXE Two-Stage Pipeline Test", UVM_LOW)
        `uvm_info(get_name(), "========================================", UVM_LOW)
        
        // ===== Reset sequence =====
        `uvm_info(get_name(), "Applying reset...", UVM_LOW)
        rstn = rstn_seq::type_id::create("rstn");
        rstn.randomize() with {
            delay == 0;
            length == 5;  // Hold reset for 5 cycles
        };
        rstn.start(m_tb_env.m_rstn_agent.m_sequencer);
        
        // Wait for reset to complete
        #100ns;
        
        // ===== Random instruction sequence =====
        `uvm_info(get_name(), $sformatf(
            "Generating %0d random instructions...", num_instructions), UVM_LOW)
        
        repeat (num_instructions) begin
            id = id_seq_random_sequence::type_id::create("id");
            
            // 可以添加约束来定向测试特定场�?
            assert(id.randomize());
            
            id.start(m_tb_env.m_id_agent.m_sequencer);
        end
        
        // ===== Wait for pipeline to flush =====
        `uvm_info(get_name(), "Waiting for pipeline to flush...", UVM_LOW)
        #1us;
        
        `uvm_info(get_name(), "Test completed", UVM_LOW)
        phase.drop_objection(this, "ID+EXE test done");
    endtask
    
    virtual function void report_phase(uvm_phase phase);
        uvm_report_server svr;
        super.report_phase(phase);
        
        svr = uvm_report_server::get_server();
        
        `uvm_info(get_name(), "========================================", UVM_LOW)
        `uvm_info(get_name(), "       Final Test Summary", UVM_LOW)
        `uvm_info(get_name(), "========================================", UVM_LOW)
        `uvm_info(get_name(), $sformatf("UVM_ERROR count: %0d", svr.get_severity_count(UVM_ERROR)), UVM_LOW)
        `uvm_info(get_name(), $sformatf("UVM_FATAL count: %0d", svr.get_severity_count(UVM_FATAL)), UVM_LOW)
        
        if (svr.get_severity_count(UVM_FATAL) + svr.get_severity_count(UVM_ERROR) == 0) begin
            `uvm_info(get_name(), "*** TEST PASSED ***", UVM_LOW)
        end else begin
            `uvm_error(get_name(), "*** TEST FAILED ***")
        end
        `uvm_info(get_name(), "========================================", UVM_LOW)
    endfunction
endclass

`endif
