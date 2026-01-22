`ifndef EXE_SEQ_ITEM_SVH
`define EXE_SEQ_ITEM_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class exe_seq_item extends uvm_sequence_item;
    // ===== Inputs to execute_stage =====
    rand logic [31:0]         data1;
    rand logic [31:0]         data2;
    rand logic [31:0]         immediate_data;
    rand logic [31:0]         pc;
    rand control_type         control_in;
    rand branch_predict_type  branch_predict;

    rand logic [1:0]          fwd_sel_rs1;
    rand logic [1:0]          fwd_sel_rs2;
    rand logic [31:0]         fwd_data_ex_mem;
    rand logic [31:0]         fwd_data_mem_wb;
    
    // ===== Outputs from execute_stage =====
    control_type              control_out;
    logic                     exception;
    logic [31:0]              rd_data;
    logic [31:0]              branch_target_pc;
    logic                     branch_flush;
    logic [31:0]              memory_data;
    logic [31:0]              memory_addr;
    logic                     muldiv_ready;
    
    // To IF stage
    logic                     ex2if_branch_valid;
    logic                     ex2if_branch_taken;
    logic [31:0]              ex2if_branch_addr;
    logic [31:0]              ex2if_branch_target_addr;
    logic                     ex2if_branch_update_GHSR;
    logic [GSHARE_GHSR_WIDTH-1:0] ex2if_GHSR_restore;
    
    `uvm_object_utils_begin(exe_seq_item)
        `uvm_field_int(data1, UVM_ALL_ON)
        `uvm_field_int(data2, UVM_ALL_ON)
        `uvm_field_int(immediate_data, UVM_ALL_ON)
        `uvm_field_int(pc, UVM_ALL_ON)
        `uvm_field_int(control_in, UVM_ALL_ON)
        `uvm_field_int(branch_predict, UVM_ALL_ON)
        `uvm_field_int(fwd_sel_rs1, UVM_ALL_ON)
        `uvm_field_int(fwd_sel_rs2, UVM_ALL_ON)
        `uvm_field_int(fwd_data_ex_mem, UVM_ALL_ON)
        `uvm_field_int(fwd_data_mem_wb, UVM_ALL_ON)

        `uvm_field_int(control_out, UVM_ALL_ON)
        `uvm_field_int(muldiv_ready, UVM_ALL_ON)
        `uvm_field_int(exception, UVM_ALL_ON)
        `uvm_field_int(rd_data, UVM_ALL_ON)
        `uvm_field_int(branch_target_pc, UVM_ALL_ON)
        `uvm_field_int(branch_flush, UVM_ALL_ON)
        `uvm_field_int(memory_addr, UVM_ALL_ON)
        `uvm_field_int(memory_data, UVM_ALL_ON)

        `uvm_field_int(ex2if_branch_valid, UVM_ALL_ON)
        `uvm_field_int(ex2if_branch_taken, UVM_ALL_ON)
        `uvm_field_int(ex2if_branch_addr, UVM_ALL_ON)
        `uvm_field_int(ex2if_branch_target_addr, UVM_ALL_ON)
        `uvm_field_int(ex2if_branch_update_GHSR, UVM_ALL_ON)
        `uvm_field_int(ex2if_GHSR_restore, UVM_ALL_ON)
    `uvm_object_utils_end
    
    function new(string name = "exe_seq_item");
        super.new(name);
    endfunction
    
    // Constraint: reasonable random values
    constraint valid_data_c {
        data1 inside {[0:32'hFFFFFFFF]};
        data2 inside {[0:32'hFFFFFFFF]};
        immediate_data inside {[0:32'hFFFFFFFF]};
        pc[1:0] == 2'b00;  // Word-aligned
    }
    
    virtual function string convert2string();
        string s;
        s = $sformatf("\n=== EXE Transaction ===");
        s = {s, $sformatf("\nPC: 0x%08h", pc)};
        s = {s, $sformatf("\nInputs: rs1=0x%08h, rs2=0x%08h, imm=0x%08h", 
            data1, data2, immediate_data)};
        s = {s, $sformatf("\nControl: alu_op=%s, is_branch=%0b, is_jump=%0b, is_mul=%0b", 
            control_in.alu_op.name(), 
            control_in.is_branch, 
            control_in.is_jump,
            control_in.is_mul)};
        s = {s, $sformatf("\nOutputs: rd_data=0x%08h, mem_addr=0x%08h", rd_data, memory_addr)};
        s = {s, $sformatf("\nBranch: valid=%0b, taken=%0b, target=0x%08h, flush=%0b", 
            ex2if_branch_valid, ex2if_branch_taken, branch_target_pc, branch_flush)};
        if (control_in.mem_read || control_in.mem_write) begin
            s = {s, $sformatf("\nMemory: addr=0x%08h, data=0x%08h", memory_addr, memory_data)};
        end
        s = {s, "\n========================"};
        return s;
    endfunction
    
endclass

`endif
