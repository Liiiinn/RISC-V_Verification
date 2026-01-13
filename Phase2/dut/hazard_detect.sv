`timescale 1ns/1ps

import common::*;


module hazard_detect(
/*AUTOARG*/
   // Outputs
   hazard,
   // Inputs
   if_id_reg, id_ex_reg
   );
   input if_id_type if_id_reg;
   
   input id_ex_type id_ex_reg;
   
   output hazard; // high active
	 

   
   //detect hazard
 
      
   assign hazard = ((if_id_reg.instruction.rs1 == id_ex_reg.reg_rd_id | if_id_reg.instruction.rs2 == id_ex_reg.reg_rd_id) & id_ex_reg.control.mem_read)? 1'b1:1'b0;
   

	 	 
      

  
   
  

  
endmodule
