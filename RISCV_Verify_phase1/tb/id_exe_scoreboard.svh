`ifndef ID_EXE_SCOREBOARD_SVH
`define ID_EXE_SCOREBOARD_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;
`uvm_analysis_imp_decl(_scoreboard_rstn)
`uvm_analysis_imp_decl(_scoreboard_id_in)
`uvm_analysis_imp_decl(_scoreboard_exp_id)
`uvm_analysis_imp_decl(_scoreboard_act_id)
`uvm_analysis_imp_decl(_scoreboard_exp_exe)
`uvm_analysis_imp_decl(_scoreboard_act_exe)



class id_exe_scoreboard extends uvm_scoreboard;
    `uvm_component_utils(id_exe_scoreboard)
    
    virtual id_if vif;
    
    // ===== Analysis imports =====
    uvm_analysis_imp_scoreboard_rstn#(rstn_seq_item, id_exe_scoreboard) m_rstn_ap;
    uvm_analysis_imp_scoreboard_id_in#(id_seq_item, id_exe_scoreboard) m_id_in_ap;
    uvm_analysis_imp_scoreboard_exp_id#(id_out_seq_item, id_exe_scoreboard) m_exp_id_ap;
    uvm_analysis_imp_scoreboard_act_id#(id_out_seq_item, id_exe_scoreboard) m_act_id_ap;
    uvm_analysis_imp_scoreboard_exp_exe#(exe_seq_item, id_exe_scoreboard) m_exp_exe_ap;
    uvm_analysis_imp_scoreboard_act_exe#(exe_seq_item, id_exe_scoreboard) m_act_exe_ap;

    // ===== Queues =====
    id_seq_item id_in_q[$];
    id_out_seq_item exp_id_q[$];
    id_out_seq_item act_id_q[$];
    exe_seq_item exp_exe_q[$];
    exe_seq_item act_exe_q[$];
    rstn_seq_item rstn_q[$];
    
  // ===== Statistics =====
    int id_pass_count = 0;
    int id_fail_count = 0;
    int exe_pass_count = 0;
    int exe_fail_count = 0;
    int alu_mismatch_count = 0;
    int branch_mismatch_count = 0;
    int mem_addr_mismatch_count = 0;
    
    // ===== Coverage =====
    covergroup id_cov with function sample(id_out_seq_item item);
        option.per_instance = 1;
        
        opcode_cp: coverpoint item.control_signals.encoding {
            bins r_type = {R_TYPE};
            bins i_type = {I_TYPE};
            bins s_type = {S_TYPE};
            bins b_type = {B_TYPE};
            bins u_type = {U_TYPE};
            bins j_type = {J_TYPE};
        }
        
        reg_write_cp: coverpoint item.control_signals.reg_write;
        mem_read_cp: coverpoint item.control_signals.mem_read;
        mem_write_cp: coverpoint item.control_signals.mem_write;
        
        rd_cp: coverpoint item.reg_rd_id {
            bins zero = {0};
            bins regs[] = {[1:31]};
        }
    endgroup
    
    covergroup exe_cov with function sample(exe_seq_item item);
        option.per_instance = 1;
        
        alu_op_cp: coverpoint item.control_in.alu_op {
            bins alu_add = {ALU_ADD};
            bins alu_sub = {ALU_SUB};
            bins alu_and = {ALU_AND};
            bins alu_or = {ALU_OR};
            bins alu_xor = {ALU_XOR};
            bins alu_sll = {ALU_SLL};
            bins alu_srl = {ALU_SRL};
            bins alu_sra = {ALU_SRA};
            bins alu_slt = {ALU_SLT};
            bins alu_sltu = {ALU_SLTU};
            bins alu_mul = {ALU_MUL};
            bins alu_div = {ALU_DIV};
        }
        
        branch_taken_cp: coverpoint item.ex2if_branch_taken;
        branch_flush_cp: coverpoint item.branch_flush;
        
        is_branch_cp: coverpoint item.control_in.is_branch;
        is_jump_cp: coverpoint item.control_in.is_jump;
        is_jumpr_cp: coverpoint item.control_in.is_jumpr;
        is_mul_cp: coverpoint item.control_in.is_mul;
        
        branch_x_flush: cross branch_taken_cp, branch_flush_cp;
        alu_x_branch: cross alu_op_cp, branch_taken_cp;
    endgroup
    
    function new(string name = "id_exe_scoreboard", uvm_component parent = null);
        super.new(name, parent);
        id_cov = new();
        exe_cov = new();
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        m_rstn_ap = new("m_rstn_ap", this);
        m_id_in_ap = new("m_id_in_ap", this);
        m_exp_id_ap = new("m_exp_id_ap", this);
        m_act_id_ap = new("m_act_id_ap", this);
        m_exp_exe_ap = new("m_exp_exe_ap", this);
        m_act_exe_ap = new("m_act_exe_ap", this);
        
        if(!uvm_config_db#(virtual id_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal(get_name(), "Failed to get id_if from config_db")
        end
    endfunction
    
    // ===== Write functions =====
    virtual function void write_scoreboard_rstn(rstn_seq_item t);
        rstn_q.push_back(t);
        `uvm_info(get_name(), $sformatf("Received reset: rstn=%0b", t.rstn_value), UVM_HIGH)
    endfunction
    
    virtual function void write_scoreboard_id_in(id_seq_item t);
        id_in_q.push_back(t);
        `uvm_info(get_name(), $sformatf("Received ID input: PC=0x%08h", t.pc), UVM_HIGH)
    endfunction
    
    virtual function void write_scoreboard_exp_id(id_out_seq_item t);
        exp_id_q.push_back(t);
        `uvm_info(get_name(), $sformatf("Received expected ID output: PC=0x%08h", t.pc_out), UVM_HIGH)
    endfunction
    
    virtual function void write_scoreboard_act_id(id_out_seq_item t);
        act_id_q.push_back(t);
        `uvm_info(get_name(), $sformatf("Received actual ID output: PC=0x%08h", t.pc_out), UVM_HIGH)
    endfunction
    
    virtual function void write_scoreboard_exp_exe(exe_seq_item t);
        exp_exe_q.push_back(t);
        `uvm_info(get_name(), $sformatf(
            "Received expected EXE: rd_data=0x%08h, branch_taken=%0b", 
            t.rd_data, t.ex2if_branch_taken), UVM_HIGH)
    endfunction
    
    virtual function void write_scoreboard_act_exe(exe_seq_item t);
        act_exe_q.push_back(t);
        `uvm_info(get_name(), $sformatf(
            "Received actual EXE: rd_data=0x%08h, branch_taken=%0b", 
            t.rd_data, t.ex2if_branch_taken), UVM_HIGH)
    endfunction
    
    // ===== Run phase =====
    virtual task run_phase(uvm_phase phase);
        fork
            compare_id_outputs();
            compare_exe_outputs();
        join
    endtask
    
    // ===== Compare ID outputs =====
    task compare_id_outputs();
        forever begin
            if (rstn_q.size() > 0 && rstn_q[0].rstn_value == 0) begin
                rstn_seq_item r = rstn_q.pop_front();
                exp_id_q.delete();
                act_id_q.delete();
                `uvm_info(get_name(), "Reset: cleared ID queues", UVM_MEDIUM)
                @(posedge vif.clk);
                continue;
            end
            
            if (exp_id_q.size() > 0 && act_id_q.size() > 0) begin
                id_out_seq_item exp, act;
                exp = exp_id_q.pop_front();
                act = act_id_q.pop_front();
                
                if (compare_id_items(exp, act)) begin
                    id_pass_count++;
                    id_cov.sample(act);
                end else begin
                    id_fail_count++;
                end
            end else begin
                @(posedge vif.clk);
            end
        end
    endtask
    
    // ===== Compare EXE outputs =====
    task compare_exe_outputs();
        forever begin
            if (rstn_q.size() > 0 && rstn_q[0].rstn_value == 0) begin
                exp_exe_q.delete();
                act_exe_q.delete();
                `uvm_info(get_name(), "Reset: cleared EXE queues", UVM_MEDIUM)
                @(posedge vif.clk);
                continue;
            end
            
            if (exp_exe_q.size() > 0 && act_exe_q.size() > 0) begin
                exe_seq_item exp, act;
                exp = exp_exe_q.pop_front();
                act = act_exe_q.pop_front();
                
                if (compare_exe_items(exp, act)) begin
                    exe_pass_count++;
                    exe_cov.sample(act);
                end else begin
                    exe_fail_count++;
                end
            end else begin
                @(posedge vif.clk);
            end
        end
    endtask
    
    // ===== Compare ID items =====
    function bit compare_id_items(id_out_seq_item exp, id_out_seq_item act);
        bit match = 1;
        
        if (exp.pc_out !== act.pc_out) begin
            `uvm_error(get_name(), $sformatf("ID PC mismatch: exp=0x%08h, act=0x%08h", exp.pc_out, act.pc_out))
            match = 0;
        end
        
        if (exp.read_data1 !== act.read_data1) begin
            `uvm_error(get_name(), $sformatf("ID rs1 mismatch: exp=0x%08h, act=0x%08h", exp.read_data1, act.read_data1))
            match = 0;
        end
        
        if (exp.read_data2 !== act.read_data2) begin
            `uvm_error(get_name(), $sformatf("ID rs2 mismatch: exp=0x%08h, act=0x%08h", exp.read_data2, act.read_data2))
            match = 0;
        end
        
        if (exp.immediate_data !== act.immediate_data) begin
            `uvm_error(get_name(), $sformatf("ID imm mismatch: exp=0x%08h, act=0x%08h", exp.immediate_data, act.immediate_data))
            match = 0;
        end
        
        if (match) begin
            `uvm_info(get_name(), $sformatf("ID MATCH: PC=0x%08h", act.pc_out), UVM_MEDIUM)
        end
        
        return match;
    endfunction
    
    // ===== Compare EXE items (updated for execute_stage I/O) =====
    function bit compare_exe_items(exe_seq_item exp, exe_seq_item act);
        bit match = 1;
        
        // Compare mul/div ready
        if (exp.muldiv_ready !== act.muldiv_ready) begin
            `uvm_error(get_name(), $sformatf(
                "EXE muldiv_ready mismatch: exp=%0b, act=%0b, PC=0x%08h",
                exp.muldiv_ready, act.muldiv_ready, exp.pc))
            match = 0;
        end
        
        // Compare rd_data (skip when mul/div not ready)
        if (!(exp.control_in.is_mul && (exp.muldiv_ready == 1'b0))) begin
            if (exp.rd_data !== act.rd_data) begin
                `uvm_error(get_name(), $sformatf(
                    "EXE rd_data mismatch:\n  Expected: 0x%08h\n  Actual:   0x%08h\n  PC: 0x%08h, ALU_op: %s",
                    exp.rd_data, act.rd_data, exp.pc, exp.control_in.alu_op.name()))
                match = 0;
            end
        end
        
        // Branch decision and target
        if (exp.ex2if_branch_taken !== act.ex2if_branch_taken) begin
            `uvm_error(get_name(), $sformatf(
                "EXE branch_taken mismatch: exp=%0b, act=%0b, PC=0x%08h",
                exp.ex2if_branch_taken, act.ex2if_branch_taken, exp.pc))
            branch_mismatch_count++;
            match = 0;
        end
        
        if (exp.ex2if_branch_taken && (exp.branch_target_pc !== act.branch_target_pc)) begin
            `uvm_error(get_name(), $sformatf(
                "EXE branch_target mismatch: exp=0x%08h, act=0x%08h",
                exp.branch_target_pc, act.branch_target_pc))
            match = 0;
        end
        
        if (exp.branch_flush !== act.branch_flush) begin
            `uvm_error(get_name(), $sformatf(
                "EXE branch_flush mismatch: exp=%0b, act=%0b, PC=0x%08h",
                exp.branch_flush, act.branch_flush, exp.pc))
            match = 0;
        end
        
        if (exp.ex2if_branch_valid !== act.ex2if_branch_valid) begin
            `uvm_error(get_name(), $sformatf(
                "EXE branch_valid mismatch: exp=%0b, act=%0b, PC=0x%08h",
                exp.ex2if_branch_valid, act.ex2if_branch_valid, exp.pc))
            match = 0;
        end
        
        if (exp.ex2if_branch_addr !== act.ex2if_branch_addr) begin
            `uvm_error(get_name(), $sformatf(
                "EXE branch_addr mismatch: exp=0x%08h, act=0x%08h",
                exp.ex2if_branch_addr, act.ex2if_branch_addr))
            match = 0;
        end
        
        if (exp.ex2if_branch_target_addr !== act.ex2if_branch_target_addr) begin
            `uvm_error(get_name(), $sformatf(
                "EXE branch_target_addr mismatch: exp=0x%08h, act=0x%08h",
                exp.ex2if_branch_target_addr, act.ex2if_branch_target_addr))
            match = 0;
        end
        
        if (exp.ex2if_branch_update_GHSR !== act.ex2if_branch_update_GHSR) begin
            `uvm_error(get_name(), $sformatf(
                "EXE update_GHSR mismatch: exp=%0b, act=%0b",
                exp.ex2if_branch_update_GHSR, act.ex2if_branch_update_GHSR))
            match = 0;
        end
        
        if (exp.ex2if_GHSR_restore !== act.ex2if_GHSR_restore) begin
            `uvm_error(get_name(), $sformatf(
                "EXE GHSR_restore mismatch: exp=0x%0h, act=0x%0h",
                exp.ex2if_GHSR_restore, act.ex2if_GHSR_restore))
            match = 0;
        end
        
        // Memory address/data
        if ((exp.control_in.mem_read || exp.control_in.mem_write) &&
            (exp.memory_addr !== act.memory_addr)) begin
            `uvm_error(get_name(), $sformatf(
                "EXE memory_addr mismatch: exp=0x%08h, act=0x%08h",
                exp.memory_addr, act.memory_addr))
            mem_addr_mismatch_count++;
            match = 0;
        end
        
        if (exp.control_in.mem_write && (exp.memory_data !== act.memory_data)) begin
            `uvm_error(get_name(), $sformatf(
                "EXE memory_data mismatch: exp=0x%08h, act=0x%08h",
                exp.memory_data, act.memory_data))
            match = 0;
        end
        
        if (exp.exception !== act.exception) begin
            `uvm_error(get_name(), $sformatf(
                "EXE exception mismatch: exp=%0b, act=%0b",
                exp.exception, act.exception))
            match = 0;
        end
        
        if (match) begin
            `uvm_info(get_name(), $sformatf(
                "EXE MATCH: PC=0x%08h, rd_data=0x%08h, op=%s",
                act.pc, act.rd_data, act.control_in.alu_op.name()), 
                UVM_MEDIUM)
        end
        
        return match;
    endfunction
    
    // ===== Report phase =====
    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        `uvm_info(get_name(), "============================================", UVM_LOW)
        `uvm_info(get_name(), "       ID+EXE Scoreboard Report", UVM_LOW)
        `uvm_info(get_name(), "============================================", UVM_LOW)
        `uvm_info(get_name(), $sformatf("ID  Stage: PASS=%0d, FAIL=%0d", id_pass_count, id_fail_count), UVM_LOW)
        `uvm_info(get_name(), $sformatf("EXE Stage: PASS=%0d, FAIL=%0d", exe_pass_count, exe_fail_count), UVM_LOW)
        
        if (exe_fail_count > 0) begin
            `uvm_info(get_name(), $sformatf("  - ALU mismatches:    %0d", alu_mismatch_count), UVM_LOW)
            `uvm_info(get_name(), $sformatf("  - Branch mismatches: %0d", branch_mismatch_count), UVM_LOW)
            `uvm_info(get_name(), $sformatf("  - Mem addr mismatches: %0d", mem_addr_mismatch_count), UVM_LOW)
        end
        
        `uvm_info(get_name(), $sformatf("ID  Coverage: %.2f%%", id_cov.get_coverage()), UVM_LOW)
        `uvm_info(get_name(), $sformatf("EXE Coverage: %.2f%%", exe_cov.get_coverage()), UVM_LOW)
        `uvm_info(get_name(), "============================================", UVM_LOW)
        
        if (id_fail_count > 0 || exe_fail_count > 0) begin
            `uvm_error(get_name(), "*** TEST FAILED ***")
        end else begin
            `uvm_info(get_name(), "*** TEST PASSED ***", UVM_LOW)
        end
    endfunction
    
endclass

`endif
