`timescale 1ns / 1ps

import common::*;


module alu(
/*AUTOARG*/
   // Outputs
   result,
   // Inputs
   control, left_operand, right_operand
   );

    input wire [3:0] control;
    input wire [31:0] left_operand; 
    input wire [31:0] right_operand;
    output logic [31:0] result;
 
    always_comb begin
        case (control)

	    ALU_ADD  : result = left_operand + right_operand ; 
	    ALU_SUB  : result = left_operand - right_operand ;
	    ALU_SLT  : result = {{31{1'b0}}, (signed'(left_operand) < signed'(right_operand))} ;
	    ALU_SLTU : result = {{31{1'b0}}, (left_operand < right_operand)} ;
	    ALU_XOR  : result = left_operand ^ right_operand ;
	    ALU_OR   : result = left_operand | right_operand ;
	    ALU_AND  : result = left_operand & right_operand ;
	    ALU_SLL  : result = left_operand << right_operand[4:0] ;
	    ALU_SRL  : result = left_operand >> right_operand[4:0] ;
	    ALU_SRA  : result = (signed'(left_operand)) >>> right_operand[4:0] ; 
	    ALU_PASS : result = right_operand;
	  
            default: result = '0;
        endcase
    end
    
    


endmodule
