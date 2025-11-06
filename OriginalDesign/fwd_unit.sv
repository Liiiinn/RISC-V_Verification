`timescale 1ns/1ps

import common::*;


module fwd_unit(
   input id_ex_type id_ex_reg,
   input ex_mem_type ex_mem_reg,
   input mem_wb_type mem_wb_reg,
   output logic [1:0] fwd_sel_rs1,
   output logic [1:0] fwd_sel_rs2


);

   
// fwd_sel = 01 , forwarding mem_wb_reg
// fwd_sel = 10 , forwarding ex_mem_reg

   always_comb begin:forwarding_sel
      fwd_sel_rs1=0;
      fwd_sel_rs2=0;
      if ( ex_mem_reg.control.reg_write & (ex_mem_reg.reg_rd_id == id_ex_reg.control.rs1_id)) begin
		fwd_sel_rs1=2'b10;
      end
      else if ( mem_wb_reg.control.reg_write & (mem_wb_reg.reg_rd_id == id_ex_reg.control.rs1_id) )begin
	        fwd_sel_rs1=2'b01;
      end   
      if ( ex_mem_reg.control.reg_write & (ex_mem_reg.reg_rd_id == id_ex_reg.control.rs2_id)) begin
		fwd_sel_rs2=2'b10;
      end
      else if ( mem_wb_reg.control.reg_write & (mem_wb_reg.reg_rd_id == id_ex_reg.control.rs2_id) )begin
	        fwd_sel_rs2=2'b01;
      end
      
      
      
   end
endmodule
