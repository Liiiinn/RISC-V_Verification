`timescale 1ns / 1ps

import common::*;

//Unit for load and store
module lsu(
    /*AUTOARG*/
   // Outputs
   mem_addr, store_data,
   // Inputs
   left_operand, right_operand, control, immediate_data
   );

   input [31:0] left_operand;
   
   input [31:0] right_operand;

   input control_type control;
   
   input [31:0] immediate_data;

   
   
   output logic [31:0] mem_addr;// result for jal and jalr next pc
   output logic [31:0] store_data;// branch tagart pc


   
   
   assign mem_addr = left_operand + immediate_data ;
  
   

    
    always_comb begin

       // GET store data 

	  case (control.funct3[1:0])
	    F3_SB   : store_data = right_operand[7:0]  << (8 * mem_addr[1:0]) ;  // Extend LS Byte and send
	    F3_SH   : store_data = right_operand[15:0] << (8 * mem_addr[1:0]) ;  // Extend LS Half-word and send
	    F3_SW    : store_data = right_operand ;                                   // Send word
	    default : store_data = right_operand ;                                   // Send word
	  endcase 
       
       end
    
    
endmodule
