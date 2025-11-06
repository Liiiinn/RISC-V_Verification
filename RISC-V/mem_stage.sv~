`timescale 1ns / 1ps

import common::*;

module mem_stage(
    input clk,
    input reset_n,
    input [31:0] alu_data_in,
    input [31:0] memory_data_in,
    input control_type control_in,
    output control_type control_out,
    output logic [31:0] memory_data_out,
    output logic [31:0] alu_data_out
);

   logic [31:0] 	memory_data; // data read from mem
   logic [7:0] 		load_byte        ;  // Load byte
   logic [15:0] 	load_hword       ;  // Load half-word
   logic [31:0] 	load_word        ;  // Load word
   logic [31:0] 	load_data        ;  // Load data need to be writen in rd


   assign load_byte    = memory_data >> (8 * alu_data_in[1:0]) ;
   assign load_hword   = memory_data >> (8 * alu_data_in[1:0]) ;
   assign load_word    = memory_data ;
   
   always_comb begin
      case (control_in.funct3)
	F3_LB  : load_data = {{(32-8) { load_byte  [7]}}, load_byte } ;  // Signed Load Byte
	F3_LH  : load_data = { { (32-16){load_hword[15]} }, load_hword} ;  // Signed Load Half-word
	F3_LW  : load_data = { load_word } ;  // Signed Load Word
	F3_LBU : load_data = { { (32-8){1'b0} }, load_byte } ;  // Unsigned Load Byte
	F3_LHU : load_data = { { (32-16){1'b0} }, load_hword} ;  // Unsigned Load Half-word
	default: load_data = { load_word } ;  // Signed Load Word
      endcase      
   end
   
    data_memory inst_mem(
        .clk(clk),        
        .byte_address(alu_data_out),
        .write_enable(control_in.mem_write),
        .write_data(memory_data_in),
        .read_data(memory_data)
    );
    

    assign alu_data_out = alu_data_in;    
    assign control_out = control_in;
    assign memory_data_out = load_data;
    
endmodule
