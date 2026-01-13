`timescale 1ns / 1ps

import common::*;

module program_memory (
    input clk,
    input [XLEN_WIDTH-1:0] byte_address,
    input [XLEN_WIDTH-1:0] write_address,
    input write_enable,         
    input [7:0] write_data, 
    output is_compress,
    output logic [XLEN_WIDTH-1:0] read_data
);

   //logic [31:0] ram [256];
       (* DONT_TOUCH= "TRUE" *)logic [7:0] ram [1024];
    logic [7:0] word_address;
    
    
    assign word_address = byte_address[9:2];    
    
    
    initial begin
        $readmemh("instruction_mem.mem", ram);
    end
     
    
    always @(posedge clk) begin
        if (write_enable) begin
            ram[write_address[9:0]] <= write_data;
        end 
    end
    
    //assign read_data = ram[word_address];
                     

    logic [31:0] rdata;
    
    assign rdata = {ram[byte_address+3], ram[byte_address + 2],ram[byte_address + 1], ram[byte_address]};
   
    assign is_compress = (rdata[1:0] != 2'b11);

    assign read_data =is_compress ? {16'b0, rdata[15:0]} : rdata;
endmodule
