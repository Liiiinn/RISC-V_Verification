`timescale 1ns / 1ps
import common::*;

module decode_stage(/*AUTOARG*/
   // Outputs
   branch_out, reg_rd_id, pc_out, read_data1, read_data2,
   immediate_data, control_signals, debug_reg,
   // Inputs
   clk, reset_n, instruction, pc, write_en, write_id, write_data,
   branch_in
);


    input clk;
    input reset_n;
    input  instruction_type instruction;    
    input logic [31:0] pc;
    input logic write_en;
    input logic [4:0] write_id;
    input logic [31:0] write_data;
    input branch_predict_type  branch_in;
    output branch_predict_type  branch_out;
    output logic [4:0] reg_rd_id;
    output logic [31:0] pc_out;
    output logic [31:0] read_data1;
    output logic [31:0] read_data2;
    output logic [31:0] immediate_data;
    output control_type control_signals;
    output logic [31:0] debug_reg[0:REGISTER_FILE_SIZE-1];
   
       

    logic [31:0] rf_read_data1;
    logic [31:0] rf_read_data2;
    logic [31:0] rf_debug_reg[0:REGISTER_FILE_SIZE-1];  

    control_type control;
        
        
   /* logic decompress_en;
    instruction_type instruction_sel;
    logic [31:0] dec_instruction;
    logic [15:0] compress_instr;
    
    assign decompress_en={instruction[1:0]!=2'b11} ? 1:0;
    assign instruction_sel= decompress_en ? dec_instruction:instruction;
    assign compress_instr= decompress_en ? instruction[15:0]:16'b0;
    
    
    decompress inst_decompress(
			      .enable(decompress_en),
			      .instruction	(compress_instr),
			      //output
			      .dec_instruction(dec_instruction)
            );*/

    register_file rf_inst(
        .clk(clk),
        .reset_n(reset_n),
        .write_en(write_en),
        .read1_id(instruction.rs1),
        .read2_id(instruction.rs2),
        .write_id(write_id),
        .write_data(write_data),
        .read1_data(rf_read_data1),
        .read2_data(rf_read_data2), 
        .debug_reg(rf_debug_reg)        
    );
    
   /* control inst_control(
    .control(control),
   */
    control_unit inst_control(/*AUTOINST*/
		// Outputs
		.control		(control),
		// Inputs
		.clk	        (clk),
		.reset_n		(reset_n),
		.instruction	(instruction)
    );

    
   
    assign reg_rd_id = instruction.rd;
    assign read_data1 = rf_read_data1;
    assign read_data2 = rf_read_data2;
    assign immediate_data = immediate_extension(instruction, control.encoding);
    assign control_signals = control;
    assign pc_out = pc;
    assign branch_out = branch_in;
    assign debug_reg = rf_debug_reg;
   
    
endmodule
