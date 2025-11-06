`timescale 1ns/1ps
import common::*;


module gshare(
/*AUTOARG*/
   // Outputs
   instr0_predict_taken, instr1_predict_taken, current_instr0_GHSR,
   current_instr1_GHSR,
   // Inputs
   clk, reset_n, IF_instr0_pc, IF_instr1_pc, IF_instr0_hit,
   IF_instr1_hit, IF_instr0_resp, EXE_is_BJ, EXE_update_GHSR,
   EXE_branch_taken, EXE_branch_addr, EXE_GHSR_restore
   );

   input    clk;
   input    reset_n;


   //FETCH
   input logic [31:0] IF_instr0_pc;
   input logic [31:0] IF_instr1_pc;
   input logic 	      IF_instr0_hit;
   input logic 	      IF_instr1_hit;  // GHSR changes only if hit
   input logic 	      IF_instr0_resp;   // to check if the instr is valid 
   output logic       instr0_predict_taken;
   output logic       instr1_predict_taken;
   output logic [GSHARE_GHSR_WIDTH-1:0]  current_instr0_GHSR;
   output logic [GSHARE_GHSR_WIDTH-1:0]  current_instr1_GHSR;



   //EXE
   input  logic 	      EXE_is_BJ;
   input  logic 	      EXE_update_GHSR; //include not hit btb
   input  logic 	      EXE_branch_taken;
   input  logic [31:0]        EXE_branch_addr;
   input  logic [GSHARE_GHSR_WIDTH-1:0] EXE_GHSR_restore ;



   logic [1:0] 				GSHARE_PHT[GSHARE_PHT_SIZE-1:0];
   logic [GSHARE_GHSR_WIDTH-1:0] 	GHSR,GHSR_next;
   logic 				spec_update_GHSR;
   logic [1:0]				instr0_bimod;
   logic [1:0]				instr1_bimod;
   logic [GSHARE_PHT_WIDTH-1:0] 	instr0_pht_addr;
   logic [GSHARE_PHT_WIDTH-1:0] 	instr1_pht_addr;
   logic [GSHARE_PHT_WIDTH-1:0] 	update_pht_addr;




  //check point for resstore
   always_comb begin
      current_instr0_GHSR = GHSR;
   end
   always_comb begin
      if (IF_instr0_hit && instr0_predict_taken == 0)
        current_instr1_GHSR = {GHSR[GSHARE_GHSR_WIDTH-2:0],1'b0};
      else
        current_instr1_GHSR = GHSR;
   end

   //use specualtive update for GHR
   assign spec_update_GHSR = IF_instr0_resp && IF_instr0_hit ;
   
   always_ff@(posedge clk) begin
      if(~reset_n) begin
	 GHSR <= '0;
      end
      else if (EXE_is_BJ && EXE_update_GHSR) begin
	 GHSR <= {EXE_GHSR_restore[GSHARE_GHSR_WIDTH-2:0],EXE_branch_taken};	 
      end
      else if (spec_update_GHSR) begin
	 GHSR <= GHSR_next;
      end
      else begin
	 GHSR <= GHSR; 
      end
   end

   always_comb begin
     if (instr0_predict_taken && IF_instr0_hit)
       GHSR_next = {GHSR[GSHARE_GHSR_WIDTH-2:0] ,instr0_predict_taken};
     else if (instr1_predict_taken && IF_instr1_hit && IF_instr0_hit)
       GHSR_next = {GHSR[GSHARE_GHSR_WIDTH-3:0] , 1'b0 ,instr1_predict_taken};
     else if (instr1_predict_taken && IF_instr1_hit)
       GHSR_next = {GHSR[GSHARE_GHSR_WIDTH-2:0], instr1_predict_taken};
     else if (IF_instr0_hit)
       GHSR_next = {GHSR[GSHARE_GHSR_WIDTH-2:0] , 1'b0};
     else
       GHSR_next = GHSR;
  end


  //PHT

  //PHT READ
   assign instr0_pht_addr = gshare_hash(GHSR,IF_instr0_pc);
   assign instr1_pht_addr = gshare_hash(GHSR,IF_instr1_pc);
   assign update_pht_addr = gshare_hash(EXE_GHSR_restore,EXE_branch_addr);
   
   assign instr0_bimod = GSHARE_PHT[instr0_pht_addr];
   assign instr1_bimod = GSHARE_PHT[instr1_pht_addr];
   assign instr0_predict_taken = if_branch_taken(instr0_bimod);
   assign instr1_predict_taken = if_branch_taken(instr1_bimod);

   //PHT WRITE

   genvar i;
   generate
   for( i=0; i< GSHARE_PHT_SIZE; i=i+1) begin
      always_ff@(posedge clk) begin
	 if (~reset_n) begin
	    
	       GSHARE_PHT[i] <= 2'b10;
	          
	 end

	 else if (EXE_is_BJ && update_pht_addr == i) begin
	    case( GSHARE_PHT[i]) 
	       2'b00: GSHARE_PHT[i] <= (EXE_branch_taken ? 2'b01 : 2'b00); //strongly not taken
               2'b01: GSHARE_PHT[i] <= (EXE_branch_taken ? 2'b10 : 2'b00); //weakly not taken
               2'b10: GSHARE_PHT[i] <= (EXE_branch_taken ? 2'b11 : 2'b01); //weakly taken
               2'b11: GSHARE_PHT[i] <= (EXE_branch_taken ? 2'b11 : 2'b10); //strongly taken	       
	    endcase // case ( GSHARE_PHT[i])	    	    
	 end

	  else
	      GSHARE_PHT[i] <= GSHARE_PHT[i];
      end // always_ff@ (posedge clk)
   end
   endgenerate
  
   
  endmodule
 
