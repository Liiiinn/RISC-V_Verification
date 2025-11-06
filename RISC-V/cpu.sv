`timescale 1ns / 1ps

import common::*;


module cpu(/*AUTOARG*/
   // Outputs
   debug_flush, debug_is_bj, debug_reg, debug_exception,ram_debug,
   // Inputs
   clk, reset_n, write_address, write_data, write_enable
   );
   input          clk;
   input          reset_n;
   input [31:0]   write_address;
   input [7:0] 	  write_data;
   input  	  write_enable;
   output 	  debug_flush;
   output 	  debug_is_bj;
   output 	  debug_exception;
   output       [31:0] debug_reg[0:REGISTER_FILE_SIZE-1];
   output logic [31:0] ram_debug[DATA_RAM_DEPTH/4];
   
   
   

   /*AUTOWIRE*/
   // Beginning of automatic wires (for undeclared instantiated-module outputs)
   logic		branch_flush;		// From inst_execute_stage of execute_stage.v
   branch_predict_type	branch_out;		// From inst_decode_stage of decode_stage.v
   logic [31:0]		branch_target_pc;	// From inst_execute_stage of execute_stage.v
   logic [GSHARE_GHSR_WIDTH-1:0] ex2if_GHSR_restore;// From inst_execute_stage of execute_stage.v
   logic [31:0]		ex2if_branch_addr;	// From inst_execute_stage of execute_stage.v
   logic		ex2if_branch_taken;	// From inst_execute_stage of execute_stage.v
   logic [31:0]		ex2if_branch_target_addr;// From inst_execute_stage of execute_stage.v
   logic		ex2if_branch_update_GHSR;// From inst_execute_stage of execute_stage.v
   logic		ex2if_branch_valid;	// From inst_execute_stage of execute_stage.v
   logic [1:0]		fwd_sel_rs1;		// From inst_fwd_unit of fwd_unit.v
   logic [1:0]		fwd_sel_rs2;		// From inst_fwd_unit of fwd_unit.v
   wire			hazard;			// From inst_hazard_detect of hazard_detect.v
   logic [31:0]		imem_addr;		// From inst_fetch_stage of fetch_stage.v
   logic		imem_req;		// From inst_fetch_stage of fetch_stage.v
   logic [31:0]		imem_req_addr;		// From inst_fetch_stage of fetch_stage.v
   instruction_type	instruction;		// From inst_fetch_stage of fetch_stage.v
   logic [31:0]		memory_addr;		// From inst_execute_stage of execute_stage.v
   logic exception;
   // End of automatics
   /*AUTOREG*/
   
    logic [31:0] program_mem_address ;
    logic program_mem_write_enable = 0;         
    logic [31:0] program_mem_write_data = 0; 
    logic [31:0] program_mem_read_data;

    logic [XLEN_WIDTH-1:0] imem_data;   
    logic [4:0] decode_reg_rd_id;
    logic [31:0] decode_data1;
    logic [31:0] decode_data2;
    logic [31:0] decode_immediate_data;
    logic [31:0] decode_pc;
    control_type decode_control;
    
    logic [31:0] execute_alu_data;
    control_type execute_control;
    logic [31:0] execute_memory_data;
    logic muldiv_ready;
    
    logic [31:0] memory_memory_data;
    logic [31:0] memory_alu_data;
    control_type memory_control;

    
    logic [4:0] wb_reg_rd_id;
    logic [31:0] wb_result;
    logic wb_write_back_en;    
    
    if_id_type if_id_reg;
    id_ex_type id_ex_reg;
    ex_mem_type ex_mem_reg;
    mem_wb_type mem_wb_reg;
   instruction_type if_id_instruction;
   branch_predict_type  branch_predict;
   
   
   logic compressed;
   
   logic  PC_stall;
   logic  if_id_stall;
   logic  id_ex_stall;
   logic  ex_mem_stall;
   logic  mem_wb_stall;
   logic  PC_flush;
   logic  if_id_flush;
   logic  id_ex_flush;
   logic  ex_mem_flush;
   logic  mem_wb_flush;
   
   
  
   assign debug_exception = exception; // 
   assign debug_flush = branch_flush; // 0 means not take branch pc
   assign debug_is_bj = id_ex_reg.control.is_branch || id_ex_reg.control.is_jump || id_ex_reg.control.is_jumpr; // 0 means not take branch pc
   

    
   
    always_ff @(posedge clk) begin


	   if(if_id_flush | !reset_n) begin
	      if_id_reg.pc             <= '0;
	      if_id_reg.branch_predict <= '0;
	      if_id_reg.instruction    <= 32'h00000013;
	      end
	   else if (if_id_stall) begin
	      if_id_reg<=if_id_reg;
	      end
	   else begin
              if_id_reg.pc <= imem_addr;
              if_id_reg.branch_predict <= branch_predict;	      
              if_id_reg.instruction <= if_id_instruction;
	      end

	   if(id_ex_flush | !reset_n) begin
	      id_ex_reg<='0;
	      end
	   else if (id_ex_stall) begin
	      id_ex_reg<=id_ex_reg;
	      end
	   else begin
              id_ex_reg.reg_rd_id <= decode_reg_rd_id;
              id_ex_reg.data1 <= decode_data1;
              id_ex_reg.data2 <= decode_data2;
              id_ex_reg.pc <= decode_pc;
              id_ex_reg.immediate_data <= decode_immediate_data;
              id_ex_reg.control <= decode_control;              
              id_ex_reg.branch_predict <= branch_out;              
              end
	      

	   if(ex_mem_flush | !reset_n) begin
	      ex_mem_reg<='0;
	      end
	   else if (ex_mem_stall) begin
	      ex_mem_reg<=ex_mem_reg;
	      end
	   else begin
	    ex_mem_reg.reg_rd_id <= id_ex_reg.reg_rd_id;
            ex_mem_reg.control <= execute_control;
            ex_mem_reg.alu_data <= execute_alu_data; // if it is LOAD/STORE , alu_data = mem_addr
            ex_mem_reg.memory_data <= execute_memory_data;
              end


	   if(mem_wb_flush | !reset_n) begin
	      mem_wb_reg<='0;
	      end
	   else if (mem_wb_stall) begin
	      mem_wb_reg<=mem_wb_reg;
	      end
	   else begin
            mem_wb_reg.reg_rd_id <= ex_mem_reg.reg_rd_id;
            mem_wb_reg.memory_data <= memory_memory_data;
            mem_wb_reg.alu_data <= memory_alu_data;
            mem_wb_reg.control <= memory_control;
              end
       
       end


    program_memory inst_mem(
        .clk(clk),        
        .byte_address(imem_req_addr),
        .write_address(write_address),
        .write_enable(write_enable),
        .write_data(write_data),
        .is_compress(compressed),
        .read_data(imem_data)
    );
    
/*fetch_stage AUTO_TEMPLATE(
         .PC(program_mem_address),
         .imem_resp(1'b1),
         .is_compress(compressed),
         
 )*/
    fetch_stage inst_fetch_stage(
/*AUTOINST*/
				 // Outputs
				 .imem_req		(imem_req),
				 .imem_req_addr		(imem_req_addr[31:0]),
				 .imem_addr		(imem_addr[31:0]),
				 .branch_predict	(branch_predict),
				 .instruction		(if_id_instruction),
				 // Inputs
				 .clk			(clk),
				 .reset_n		(reset_n),
				 .is_compress		(compressed),	 // Templated
				 .imem_data		(imem_data[XLEN_WIDTH-1:0]),
				 .imem_resp		(1'b1),		 // Templated
				 .PC_stall		(PC_stall),
				 .PC_flush		(PC_flush),
				 .ex2if_branch_valid	(ex2if_branch_valid),
				 .ex2if_branch_taken	(ex2if_branch_taken),
				 .ex2if_branch_addr	(ex2if_branch_addr[31:0]),
				 .ex2if_branch_target_addr(ex2if_branch_target_addr[31:0]),
				 .ex2if_branch_update_GHSR(ex2if_branch_update_GHSR),
				 .ex2if_GHSR_restore	(ex2if_GHSR_restore[GSHARE_GHSR_WIDTH-1:0]));




   hazard_detect inst_hazard_detect(/*AUTOINST*/
				    // Outputs
				    .hazard		(hazard),
				    // Inputs
				    .if_id_reg		(if_id_reg),
				    .id_ex_reg		(id_ex_reg));
   
   

   
    /*decode_stage AUTO_TEMPLATE(
        .instruction(if_id_reg.instruction),
        .pc(if_id_reg.pc),
        .pc_out(decode_pc),
        .write_en(wb_write_back_en),
        .write_id(wb_reg_rd_id),        
        .write_data(wb_result),
        .reg_rd_id(decode_reg_rd_id),
        .read_data1(decode_data1),
        .read_data2(decode_data2),
        .immediate_data(decode_immediate_data),
        .control_signals(decode_control),
        .branch_in(if_id_reg.branch_predict),
    )*/
   decode_stage inst_decode_stage(/*AUTOINST*/
				  // Outputs
				  .branch_out		(branch_out),
				  .reg_rd_id		(decode_reg_rd_id), // Templated
				  .pc_out		(decode_pc),	 // Templated
				  .read_data1		(decode_data1),	 // Templated
				  .read_data2		(decode_data2),	 // Templated
				  .immediate_data	(decode_immediate_data), // Templated
				  .debug_reg		   (debug_reg),
				  .control_signals	(decode_control), // Templated
				  
				  // Inputs
				  .clk			(clk),
				  .reset_n		(reset_n),
				  .instruction		(if_id_reg.instruction), // Templated
				  .pc			(if_id_reg.pc),	 // Templated
				  .write_en		(wb_write_back_en), // Templated
				  .write_id		(wb_reg_rd_id),	 // Templated
				  .write_data		(wb_result),	 // Templated
				  .branch_in		(if_id_reg.branch_predict)); // Templated
   

   fwd_unit inst_fwd_unit(/*AUTOINST*/
			  // Outputs
			  .fwd_sel_rs1		(fwd_sel_rs1[1:0]),
			  .fwd_sel_rs2		(fwd_sel_rs2[1:0]),
			  // Inputs
			  .id_ex_reg		(id_ex_reg),
			  .ex_mem_reg		(ex_mem_reg),
			  .mem_wb_reg		(mem_wb_reg));
   
   
   /* execute_stage AUTO_TEMPLATE (
        .data1(id_ex_reg.data1),
        .data2(id_ex_reg.data2),
        .immediate_data(id_ex_reg.immediate_data),
        .control_in(id_ex_reg.control),
        .control_out(execute_control),
        .rd_data(execute_alu_data),
        .memory_data(execute_memory_data),
        .fwd_data_ex_mem(ex_mem_reg.alu_data),
        .pc(id_ex_reg.pc),
        .branch_predict(id_ex_reg.branch_predict),
        .fwd_data_mem_wb(wb_result),
    )*/
    execute_stage inst_execute_stage(
				     // Outputs
				     .control_out	(execute_control), // Templated
				     .rd_data		(execute_alu_data), // Templated
				     .branch_target_pc	(branch_target_pc[31:0]),
				     .branch_flush	(branch_flush),
				     .memory_data	(execute_memory_data), // Templated
				     .memory_addr	(memory_addr[31:0]),
				     .ex2if_branch_valid(ex2if_branch_valid),
				     .ex2if_branch_taken(ex2if_branch_taken),
				     .ex2if_branch_addr	(ex2if_branch_addr[31:0]),
				     .ex2if_branch_target_addr(ex2if_branch_target_addr[31:0]),
				     .ex2if_branch_update_GHSR(ex2if_branch_update_GHSR),
				     .ex2if_GHSR_restore(ex2if_GHSR_restore[GSHARE_GHSR_WIDTH-1:0]),
				     .muldiv_ready(muldiv_ready),
				     // Inputs
				     .clk		(clk),
				     .reset_n		(reset_n),
				     .data1		(id_ex_reg.data1), // Templated
				     .data2		(id_ex_reg.data2), // Templated
				     .pc		(id_ex_reg.pc),	 // Templated
				     .immediate_data	(id_ex_reg.immediate_data), // Templated
				     .control_in	(id_ex_reg.control), // Templated
				     .branch_predict	(id_ex_reg.branch_predict), // Templated
				     .fwd_sel_rs1	(fwd_sel_rs1[1:0]),
				     .fwd_sel_rs2	(fwd_sel_rs2[1:0]),
				     .fwd_data_ex_mem	(ex_mem_reg.alu_data), // Templated
				     .fwd_data_mem_wb	(wb_result),	 // Templated
				     .exception(exception)
                 );

   
 /*mem_stage AUTO_TEMPLATE(
        .alu_data_in(ex_mem_reg.alu_data),
        .memory_data_in(ex_mem_reg.memory_data),
        .control_in(ex_mem_reg.control),
        .control_out(memory_control),
        .memory_data_out(memory_memory_data),
        .alu_data_out(memory_alu_data),
  ) */   
    
    mem_stage inst_mem_stage(

			     // Outputs
			     .control_out	(memory_control), // Templated
			     .memory_data_out	(memory_memory_data), // Templated
			     .alu_data_out	(memory_alu_data), // Templated
			     .ram_debug	        (ram_debug), // Templated
			     // Inputs
			     .clk		(clk),
			     .reset_n		(reset_n),
			     .alu_data_in	(ex_mem_reg.alu_data), // Templated
			     .memory_data_in	(ex_mem_reg.memory_data), // Templated
			     .control_in	(ex_mem_reg.control)); // Templated

   always_comb begin
      if_id_stall='0;
      PC_stall='0;
      id_ex_stall='0;
      ex_mem_stall='0;
      mem_wb_stall='0;
      PC_flush   ='0;
      if_id_flush='0;
      id_ex_flush='0;
      ex_mem_flush='0;
      mem_wb_flush='0;
      if ( hazard ) begin
	 if_id_stall=1'b1;
	 PC_stall = 1'b1;
	 id_ex_flush=1'b1;
         end
      else if ( branch_flush ) begin
	 if_id_flush = 1'b1;
	 id_ex_flush = 1'b1;
	 PC_flush = 1'b1;	 
	 end
     else if (!muldiv_ready) begin
      PC_stall = 1'b1;
      if_id_stall=1'b1;
      id_ex_stall=1'b1;
      ex_mem_flush=1'b1;
     end
     else if(exception) begin
      PC_stall = 1'b1;
      if_id_stall=1'b1;
      id_ex_stall=1'b1;
      ex_mem_flush=1'b1;
     end
     else if ( if_id_reg.pc[9:2] == 8'b11111111) begin // read all program
	 if_id_stall = '1;
	 id_ex_stall = '1;
	 ex_mem_stall = '1;
	 mem_wb_flush = '1;
     end
   end

   assign wb_reg_rd_id = mem_wb_reg.reg_rd_id;
    assign wb_write_back_en = mem_wb_reg.control.reg_write;
    assign wb_result = mem_wb_reg.control.mem_read ? mem_wb_reg.memory_data : mem_wb_reg.alu_data;

endmodule
