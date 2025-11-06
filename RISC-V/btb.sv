`timescale 1ns/1ps
import common::*;


module btb
(
/*AUTOARG*/
   // Outputs
   instr0_btb_hit, instr0_btb_target_addr, instr1_btb_hit,
   instr1_btb_target_addr,
   // Inputs
   clk, reset_n, IF_instr0_pc, IF_instr1_pc, branch_valid,
   branch_taken, branch_addr, branch_target_addr
   );
   input           clk;
   input 	   reset_n;

    //PC stage -> IF stage pc
   input   logic [31:0]    IF_instr0_pc;
   input   logic [31:0]    IF_instr1_pc;

    // From EXE branch unit ; use to update btb entry and status
   input   logic 	   branch_valid;
   input   logic 	   branch_taken;
   input   logic [31:0]    branch_addr;
   input   logic [31:0]    branch_target_addr;

    //BTB hit signal to IF stage
   output  logic 	   instr0_btb_hit;
   output  logic [31:0]    instr0_btb_target_addr;
   output  logic 	   instr1_btb_hit;
   output  logic [31:0]    instr1_btb_target_addr;


   localparam WORD_WIDTH = 1; //4 byte
   localparam INDEX_WIDTH = $clog2(BTB_ENTRY_NUM);
   localparam TAG_WIDTH = XLEN_WIDTH - WORD_WIDTH - INDEX_WIDTH; 
   localparam BTB_TARGET_ADDR_WIDTH = XLEN_WIDTH - WORD_WIDTH; //30 bits
   localparam BTB_SINGLE_ENTRY_WIDTH = TAG_WIDTH + BTB_TARGET_ADDR_WIDTH; 

   /*AUTOWIRE*/
   // Beginning of automatic wires (for undeclared instantiated-module outputs)
   wire [TAG_WIDTH-1:0]	tag_0;			// From btb_tag_inst of ram2r1w.v
   wire [TAG_WIDTH-1:0]	tag_1;			// From btb_tag_inst of ram2r1w.v
   // End of automatics
   /*AUTOREG*/


   //vaild bit for BTB
   logic                update_BTB;
   logic    [XLEN_WIDTH-1:WORD_WIDTH]            update_entry_addr;
   logic 		btb_entry_valids [0 : BTB_ENTRY_NUM-1];
 		



   //BTBread
   assign instr0_btb_target_addr[WORD_WIDTH-1:0] = {WORD_WIDTH{1'b0}};
   assign instr1_btb_target_addr[WORD_WIDTH-1:0] = {WORD_WIDTH{1'b0}};
      

   //BTB hit 
   assign instr0_btb_hit  = btb_entry_valids[IF_instr0_pc[INDEX_WIDTH-1+WORD_WIDTH:WORD_WIDTH]] && ( IF_instr0_pc[XLEN_WIDTH-1:XLEN_WIDTH-TAG_WIDTH] == tag_0);
   assign instr1_btb_hit  = btb_entry_valids[IF_instr1_pc[INDEX_WIDTH-1+WORD_WIDTH:WORD_WIDTH]] && ( IF_instr1_pc[XLEN_WIDTH-1:XLEN_WIDTH-TAG_WIDTH] == tag_1);
   
   //BTB write
   assign update_BTB            =  branch_valid && branch_taken;
   assign update_entry_addr     =  branch_addr[XLEN_WIDTH-1:WORD_WIDTH];
   
   

   /*ram2r1w AUTO_TEMPLATE (
			 // Outputs
			 .data_0_o		(tag_0[TAG_WIDTH-1:0]),
			 .data_1_o		(tag_1[TAG_WIDTH-1:0]),
			 // Inputs
			 .clk			(clk),
			 .we			(update_BTB),
			 .data_i		(branch_addr[XLEN_WIDTH-1:XLEN_WIDTH-TAG_WIDTH]),
			 .write_addr		(branch_addr[INDEX_WIDTH+WORD_WIDTH-1:WORD_WIDTH]),
			 .read_0_addr		(IF_instr0_pc[INDEX_WIDTH+WORD_WIDTH-1:WORD_WIDTH]),
			 .read_1_addr		(IF_instr1_pc[INDEX_WIDTH+WORD_WIDTH-1:WORD_WIDTH]),)*/   
   

   ram2r1w #(. ENTRY_NUM(BTB_ENTRY_NUM), .ADDR_WIDTH(INDEX_WIDTH), .DATA_WIDTH(TAG_WIDTH)) 
   btb_tag_inst  
     (/*AUTOINST*/
      // Outputs
      .data_0_o				(tag_0[TAG_WIDTH-1:0]),	 // Templated
      .data_1_o				(tag_1[TAG_WIDTH-1:0]),	 // Templated
      // Inputs
      .clk				(clk),			 // Templated
      .reset_n				(reset_n),
      .we				(update_BTB),		 // Templated
      .data_i				(branch_addr[XLEN_WIDTH-1:XLEN_WIDTH-TAG_WIDTH]), // Templated
      .write_addr			(branch_addr[INDEX_WIDTH+WORD_WIDTH-1:WORD_WIDTH]), // Templated
      .read_0_addr			(IF_instr0_pc[INDEX_WIDTH+WORD_WIDTH-1:WORD_WIDTH]), // Templated
      .read_1_addr			(IF_instr1_pc[INDEX_WIDTH+WORD_WIDTH-1:WORD_WIDTH])); // Templated


   /*ram2r1w AUTO_TEMPLATE (
			 // Outputs
			 .data_0_o		(instr0_btb_target_addr[XLEN_WIDTH-1:WORD_WIDTH]),
			 .data_1_o		(instr1_btb_target_addr[XLEN_WIDTH-1:WORD_WIDTH]),
			 // Inputs
			 .clk			(clk),
			 .we			(update_BTB),
			 .data_i		(branch_target_addr[XLEN_WIDTH-1:WORD_WIDTH]),
			 .write_addr		(branch_addr[INDEX_WIDTH-1+WORD_WIDTH:WORD_WIDTH]),
			 .read_0_addr		(IF_instr0_pc[INDEX_WIDTH-1+WORD_WIDTH:WORD_WIDTH]),
			 .read_1_addr		(IF_instr1_pc[INDEX_WIDTH-1+WORD_WIDTH:WORD_WIDTH]),)*/   
   
   ram2r1w #(.ENTRY_NUM(BTB_ENTRY_NUM), .ADDR_WIDTH(INDEX_WIDTH), .DATA_WIDTH(BTB_TARGET_ADDR_WIDTH))  
btb_addr_inst (/*AUTOINST*/
	       // Outputs
	       .data_0_o		(instr0_btb_target_addr[XLEN_WIDTH-1:WORD_WIDTH]), // Templated
	       .data_1_o		(instr1_btb_target_addr[XLEN_WIDTH-1:WORD_WIDTH]), // Templated
	       // Inputs
	       .clk			(clk),			 // Templated
	       .reset_n			(reset_n),
	       .we			(update_BTB),		 // Templated
	       .data_i			(branch_target_addr[XLEN_WIDTH-1:WORD_WIDTH]), // Templated
	       .write_addr		(branch_addr[INDEX_WIDTH-1+WORD_WIDTH:WORD_WIDTH]), // Templated
	       .read_0_addr		(IF_instr0_pc[INDEX_WIDTH-1+WORD_WIDTH:WORD_WIDTH]), // Templated
	       .read_1_addr		(IF_instr1_pc[INDEX_WIDTH-1+WORD_WIDTH:WORD_WIDTH])); // Templated
   
integer i;
always_ff @(posedge clk) begin
    if (!reset_n)
        for (i = 0 ; i < BTB_ENTRY_NUM ; i = i + 1)
            btb_entry_valids[i] <= 0;
    else if (update_BTB)
        btb_entry_valids[update_entry_addr] <= 1'b1;
    else
        for (i = 0 ; i < BTB_ENTRY_NUM ; i = i + 1)
            btb_entry_valids[i] <= btb_entry_valids[i];
end








endmodule
