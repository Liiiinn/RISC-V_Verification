`timescale 1ns / 1ps

import common::*;
module fetch_stage( /*AUTOARG*/
   // Outputs
   imem_req, imem_req_addr, imem_addr, branch_predict, instruction,
   // Inputs
   clk, reset_n, is_compress,imem_data, imem_resp, PC_stall, PC_flush,
   ex2if_branch_valid, ex2if_branch_taken, ex2if_branch_addr,
   ex2if_branch_target_addr, ex2if_branch_update_GHSR,
   ex2if_GHSR_restore
   );
   
   input                                    clk;
   input 				    reset_n;

   //From i-mem
   input  logic  is_compress;
   input  logic [XLEN_WIDTH-1:0] 	    imem_data;
   input  logic 			    imem_resp;
				    
   
   //from stall/flush unit
   input 				    PC_stall;
   input 				    PC_flush;

   //from exestage
   input  logic 			    ex2if_branch_valid;   // if it is a branch/jump?
   input  logic 			    ex2if_branch_taken;
   input  logic [31:0] 			    ex2if_branch_addr;   // instr content of branch
   input  logic [31:0] 			    ex2if_branch_target_addr;  
   input  logic 			    ex2if_branch_update_GHSR; //
   input  logic [GSHARE_GHSR_WIDTH-1:0]     ex2if_GHSR_restore ;

 
   //TO iMEM
   output logic 			    imem_req;
   output logic [31:0]			    imem_req_addr;
			    
   
   //TO if/id reg
   output logic [31:0] 			    imem_addr;
   output branch_predict_type 		    branch_predict;
   output instruction_type 		    instruction;
			    

 
    /*AUTOWIRE*/
    // Beginning of automatic wires (for undeclared instantiated-module outputs)
    logic [GSHARE_GHSR_WIDTH-1:0] current_instr0_GHSR;// From gshare_inst of gshare.v
    logic [GSHARE_GHSR_WIDTH-1:0] current_instr1_GHSR;// From gshare_inst of gshare.v
    logic		instr0_btb_hit;		// From btb_inst of btb.v
    logic [31:0]	instr0_btb_target_addr;	// From btb_inst of btb.v
    logic		instr0_predict_taken;	// From gshare_inst of gshare.v
    logic		instr1_btb_hit;		// From btb_inst of btb.v
    logic [31:0]	instr1_btb_target_addr;	// From btb_inst of btb.v
    logic		instr1_predict_taken;	// From gshare_inst of gshare.v
    // End of automatics
   
   
   logic [31:0] 	pc_next, pc_reg;
   logic 		pc_load;
    

   assign pc_load  = imem_resp;
   assign imem_req = ~PC_flush;
   assign imem_req_addr = pc_reg;
   assign imem_addr = pc_reg;

   assign branch_predict.branch_taken_predict = instr0_btb_hit? instr0_predict_taken : 1'b0;
   assign branch_predict.current_GHSR         = current_instr0_GHSR[GSHARE_GHSR_WIDTH-1:0];
   assign branch_predict.branch_btb_hit       = instr0_btb_hit;
   assign branch_predict.branch_btb_addr      = instr0_btb_target_addr[31:0];
   
   
   //pre_decode inst_pre_deceode(
      //.instruction(imem_data),
      //.is_compress(is_compress)
      //);
   
    always_ff @(posedge clk) begin
        if (!reset_n) begin
            pc_reg <= PC_INIT;
        end
        else if (pc_load) begin
            pc_reg <= pc_next;
        end 
    end
        
        
    always_comb begin
       if(PC_stall) begin
	 pc_next = pc_reg;
         end
       else if ( PC_flush ) begin
	  pc_next = ex2if_branch_target_addr;	  	  
	 end 
	   else if ( instr0_predict_taken && instr0_btb_hit) begin
	       pc_next = instr0_btb_target_addr[31:0];
	   end     
       else begin
         pc_next = is_compress?(pc_reg + 2):(pc_reg + 4);      
         end  
    end   
   
   /*btb AUTO_TEMPLATE(
         	.instr0_btb_hit		(instr0_btb_hit),
		.instr0_btb_target_addr	(instr0_btb_target_addr[31:0]),
	     		
		.clk			(clk),
		.reset_n		(reset_n),
		.IF_instr0_pc		(pc_reg),
		.IF_instr1_pc		('0),
		.branch_valid		(ex2if_branch_valid),
		.branch_taken		(ex2if_branch_taken),
		.branch_addr		(ex2if_branch_addr),
		.branch_target_addr	(ex2if_branch_target_addr[31:0]),
         
 )*/
   btb btb_inst(/*AUTOINST*/
		// Outputs
		.instr0_btb_hit		(instr0_btb_hit),	 // Templated
		.instr0_btb_target_addr	(instr0_btb_target_addr[31:0]), // Templated
		.instr1_btb_hit		(instr1_btb_hit),
		.instr1_btb_target_addr	(instr1_btb_target_addr[31:0]),
		// Inputs
		.clk			(clk),			 // Templated
		.reset_n		(reset_n),		 // Templated
		.IF_instr0_pc		(pc_reg),		 // Templated
		.IF_instr1_pc		('0),			 // Templated
		.branch_valid		(ex2if_branch_valid),	 // Templated
		.branch_taken		(ex2if_branch_taken),	 // Templated
		.branch_addr		(ex2if_branch_addr),	 // Templated
		.branch_target_addr	(ex2if_branch_target_addr[31:0])); // Templated

/*gshare AUTO_TEMPLATE(

		      .current_instr0_GHSR(current_instr0_GHSR[GSHARE_GHSR_WIDTH-1:0]),
		      .current_instr1_GHSR(current_instr1_GHSR[GSHARE_GHSR_WIDTH-1:0]),
		      .clk		(clk),
		      .reset_n		(reset_n),
		      .IF_instr0_pc	(pc_reg),
		      .IF_instr0_hit	(instr0_btb_hit),
		      .IF_instr0_resp	(imem_resp),
 		      .IF_instr1_pc	('0),
		      .IF_instr1_hit	(0), 
		      .EXE_is_BJ	(ex2if_branch_valid),
		      .EXE_update_GHSR	(ex2if_branch_update_GHSR),
		      .EXE_branch_taken	(ex2if_branch_taken),
		      .EXE_branch_addr(ex2if_branch_addr),
		      .EXE_GHSR_restore	(ex2if_GHSR_restore));*/
 
   gshare gshare_inst(/*AUTOINST*/
		      // Outputs
		      .instr0_predict_taken(instr0_predict_taken),
		      .instr1_predict_taken(instr1_predict_taken),
		      .current_instr0_GHSR(current_instr0_GHSR[GSHARE_GHSR_WIDTH-1:0]), // Templated
		      .current_instr1_GHSR(current_instr1_GHSR[GSHARE_GHSR_WIDTH-1:0]), // Templated
		      // Inputs
		      .clk		(clk),			 // Templated
		      .reset_n		(reset_n),		 // Templated
		      .IF_instr0_pc	(pc_reg),		 // Templated
		      .IF_instr1_pc	('0),			 // Templated
		      .IF_instr0_hit	(instr0_btb_hit),	 // Templated
		      .IF_instr1_hit	('0),			 // Templated
		      .IF_instr0_resp	(imem_resp),		 // Templated
		      .EXE_is_BJ	(ex2if_branch_valid),	 // Templated
		      .EXE_update_GHSR	(ex2if_branch_update_GHSR), // Templated
		      .EXE_branch_taken	(ex2if_branch_taken),	 // Templated
		      .EXE_branch_addr	(ex2if_branch_addr),	 // Templated
		      .EXE_GHSR_restore	(ex2if_GHSR_restore));	 // Templated
   

   
    //instruction_type instruction_sel;
    logic [31:0] dec_instruction;
    logic [15:0] compress_instr;
    
    assign instruction= is_compress ? dec_instruction:imem_data;
    assign compress_instr= is_compress ? imem_data[15:0]:16'b0;
    
    
    
    decompress inst_decompress(
			      .enable(is_compress),
			      .instruction	(compress_instr),
			      //output
			      .dec_instruction(dec_instruction)
            );
   
endmodule
