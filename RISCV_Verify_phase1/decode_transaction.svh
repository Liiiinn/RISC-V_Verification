class id_decode_tr extends uvm_sequence_item;
import uvm_pkg::*;
`include "uvm_macros.svh"
`include "common.sv"
  rand bit [31:0] instr;

  // from decode
  bit [4:0] rs1;
  bit [4:0] rs2;
  bit [4:0] rd;

  bit [31:0] imm;
  control_type control_signals;
  // control signals
//   bit [3:0]  alu_op;
//   bit [2:0]  encoding_type;
//   bit [4:0]  alu_op;
//   bit        mem_read;
//   bit        mem_write;
//   bit        mem_to_reg;
//   bit        reg_write;
//   bit        is_branch;
//   bit        is_jump;
//   bit        is_jumpr;
//   bit        is_lui;
//   bit        is_auipc;
//   bit        is_branch;
//   bit        is_mul;

  string     instr_type;

  `uvm_object_utils(id_decode_tr)

  function new(string name="id_decode_tr");
    super.new(name);
  endfunction

endclass
