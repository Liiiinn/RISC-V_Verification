// decode_item.sv - UVM sequence item for decode stage testing
`ifndef DECODE_ITEM_SV
`define DECODE_ITEM_SV

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class decode_item extends uvm_sequence_item;
    //task 15: Input signals
    rand instruction_type instruction;

    
    // Output signals (will be captured by monitor)
    branch_predict_type branch_out;
    logic [4:0] reg_rd_id;
    logic [31:0] pc_out;
    logic [31:0] read_data1;
    logic [31:0] read_data2;
    logic [31:0] immediate_data;
    control_type control_signals;
    logic [31:0] debug_reg[0:REGISTER_FILE_SIZE-1];
    
    // Constraints
    // task 16: Valid RISC-V opcodes and register ranges:

    //task 17: Valid funct3 values based on opcode



    //task 18: complete UVM macros :instruction, pc, write_en, write_id, write_data,
    // branch_in, branch_out, reg_rd_id, pc_out, read_data1, read_data2, immediate_data, control_signals
    `uvm_object_utils_begin(decode_item)
        `uvm_field_int(instruction, UVM_ALL_ON)
        `uvm_field_int(pc, UVM_ALL_ON)
        `uvm_field_int(write_en, UVM_ALL_ON)
        `uvm_field_int(write_id, UVM_ALL_ON)
        `uvm_field_int(write_data, UVM_ALL_ON)
        `uvm_field_int(branch_in, UVM_ALL_ON)

    `uvm_object_utils_end
    
    function new(string name = "decode_item");
        super.new(name);
    endfunction
    
endclass

`endif
