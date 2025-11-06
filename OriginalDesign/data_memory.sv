
`timescale 1ns / 1ps

import common ::*;



module data_memory (
    input 		clk,
    input [9:0] 	byte_address,
    input [2:0] 	store_func3,
    input 		write_enable, 
    input [31:0] 	write_data,
    output logic [31:0] ram_debug[DATA_RAM_DEPTH/4],
    output logic [31:0] read_data
);

   logic [7:0] 	ram [DATA_RAM_DEPTH] = '{default:0};
   logic [$clog2(DATA_RAM_DEPTH)-1:2] read_word_address;
   logic [$clog2(DATA_RAM_DEPTH)-1:2] write_word_address;
   logic [$clog2(DATA_RAM_DEPTH)-1:1] write_hword_address;
   logic [$clog2(DATA_RAM_DEPTH)-1:0] write_byte_address;
    

  
   assign read_word_address   = byte_address[$clog2(DATA_RAM_DEPTH)-1:2];
   assign write_word_address  = byte_address[$clog2(DATA_RAM_DEPTH)-1:2];
   assign write_hword_address = byte_address[$clog2(DATA_RAM_DEPTH)-1:1];
   assign write_byte_address  = byte_address[$clog2(DATA_RAM_DEPTH)-1:0];
  /*for debug*/

   always_comb begin

      for(int i =0; i<(DATA_RAM_DEPTH/4); i=i+1) begin
	ram_debug[i][7:0]  = ram[4*i];
	ram_debug[i][15:8] = ram[4*i+1];
	ram_debug[i][23:16] = ram[4*i+2];
	ram_debug[i][31:24] = ram[4*i+3];
      end


   end
   
    
    always @(posedge clk) begin
        if (write_enable) begin
	   case (store_func3) 
	     F3_SB:begin
		ram[write_byte_address] <= (byte_address[1:0] == 2'b00)? write_data[7:0]:
				      (byte_address[1:0] == 2'b01)? write_data[15:8]:
				      (byte_address[1:0] == 2'b10)? write_data[23:16]:write_data[31:24];				
	     end	     
	     F3_SH:begin
		ram[{write_hword_address,1'b0}] <= (byte_address[1] == 1'b0)? write_data[7:0]:write_data[23:16];
		ram[{write_hword_address,1'b1}] <= (byte_address[1] == 1'b0)? write_data[15:8]:write_data[31:24];				     			  	       
	     end	     
	     F3_SW: begin
	       {ram[{write_word_address,2'b11}],ram[{write_word_address,2'b10}],ram[{write_word_address,2'b01}],ram[{write_word_address,2'b00}]} <= write_data;
	     end
	     default: begin
	       {ram[{write_word_address,2'b11}],ram[{write_word_address,2'b10}],ram[{write_word_address,2'b01}],ram[{write_word_address,2'b00}]} <= write_data;
	     end
	   endcase
        end 
    end

    
    assign read_data = {ram[{read_word_address,2'b11}],ram[{read_word_address,2'b10}],ram[{read_word_address,2'b01}],ram[{read_word_address,2'b00}]};
    
endmodule
