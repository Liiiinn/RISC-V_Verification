`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/04/17 18:41:50
// Design Name: 
// Module Name: decompress
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

import common::*;

module decompress(
    input enable,
    input [15:0] instruction, 
    output logic [31:0] dec_instruction
    );
    
    always_comb begin
    dec_instruction=32'b0;
    if(enable) begin
        case({instruction[15:13],instruction[1:0]})
            5'b01000: dec_instruction = {5'b00000, instruction[5], instruction[12:10], instruction[6], 2'b00, 2'b01, instruction[9:7], 3'b010, 2'b01, instruction[4:2], 7'b0000011};//C_LW
            5'b11000: dec_instruction = {5'b00000, instruction[5], instruction[12], 2'b01, instruction[4:2], 2'b01, instruction[9:7], 3'b010, instruction[11:10], instruction[6], 2'b00, 7'b0100011};//S_SW
            5'b10101: dec_instruction = {instruction[12], instruction[8], instruction[10:9], instruction[6], instruction[7], instruction[2], instruction[11], instruction[5:3], instruction[12], {8{instruction[12]}}, 5'b00000, 7'b1101111};//C_J
            5'b00101: dec_instruction = {instruction[12], instruction[8], instruction[10:9], instruction[6], instruction[7], instruction[2], instruction[11], instruction[5:3], instruction[12], {8{instruction[12]}}, 5'b00001, 7'b1101111};//C_JAL
            5'b11001: dec_instruction = {{4{instruction[12]}}, instruction[6:5], instruction[2], 5'b00000, 2'b01, instruction[9:7], 3'b000, instruction[11:10], instruction[4:3], instruction[12], 7'b1100011};//C_BEQZ
            5'b11101: dec_instruction = {{4{instruction[12]}}, instruction[6:5], instruction[2], 5'b00000, 2'b01, instruction[9:7], 3'b001, instruction[11:10], instruction[4:3], instruction[12], 7'b1100011};//C_BNEZ
            5'b01001: dec_instruction = {{7{instruction[12]}}, instruction[6:2], 5'b00000, 3'b000, instruction[11:7], 7'b0010011};//C_LI
            5'b00010: dec_instruction = {7'b0000000, instruction[6:2], instruction[11:7], 3'b001, instruction[11:7], 7'b0010011};//C_SLLI
            5'b00001: begin
                  if (instruction[12:2] == 11'b0)
                      dec_instruction = {25'b0, 7'b0010011};//C_NOP
                  else
                      dec_instruction = {{7{instruction[12]}}, instruction[6:2], instruction[11:7], 3'b000, instruction[11:7], 7'b0010011};//C_ADDI
                  end
            5'b01101: dec_instruction = {{15{instruction[12]}}, instruction[6:2], instruction[11:7], 7'b0110111};//C_LUI
            5'b10001: begin
                  if ({instruction[12:10],instruction[6:5]} == 5'b01100)
                      dec_instruction = {7'b0100000, 2'b01, instruction[4:2], 2'b01, instruction[9:7], 3'b000, 2'b01, instruction[9:7], 7'b0110011};//C_SUB
                  else if({instruction[12:10],instruction[6:5]} == 5'b01101)
                      dec_instruction = {7'b0000000, 2'b01, instruction[4:2], 2'b01, instruction[9:7], 3'b100, 2'b01, instruction[9:7], 7'b0110011};//C_XOR
                  else if({instruction[12:10],instruction[6:5]} == 5'b01110)
                      dec_instruction = {7'b0000000, 2'b01, instruction[4:2], 2'b01, instruction[9:7], 3'b110, 2'b01, instruction[9:7], 7'b0110011};//C_OR
                  else if({instruction[12:10],instruction[6:5]} == 5'b01111)
                      dec_instruction = {7'b0000000, 2'b01, instruction[4:2], 2'b01, instruction[9:7], 3'b111, 2'b01, instruction[9:7], 7'b0110011};//C_AND
                  else if (instruction[11:10] == 2'b10)
                      dec_instruction = {{7{instruction[12]}}, instruction[6:2], 2'b01, instruction[9:7], 3'b111, 2'b01, instruction[9:7], 7'b0010011};//C_ANDI
                  else if (instruction[11:10] == 2'b00)
                      dec_instruction = {7'b0000000, instruction[6:2], 2'b01, instruction[9:7], 3'b101, 2'b01, instruction[9:7], 7'b0010011};//C_SRLI
                  else if(instruction[11:10] == 2'b01)
                      dec_instruction = {7'b0100000, instruction[6:2], 2'b01, instruction[9:7], 3'b101, 2'b01, instruction[9:7], 7'b0010011};//C_SRAI
                  else
                      dec_instruction = 32'b0;
                  end
            5'b10010: begin
                  if(instruction[6:2] == 5'b00000) begin
                      if(instruction[12] && instruction[11:7] != 5'b0)
                      dec_instruction = {12'b0, instruction[11:7], 3'b000, 5'b00001, 7'b1100111}; //C_JALR   ?
                      else
                      dec_instruction = {12'b0, instruction[11:7], 3'b000, 5'b00000, 7'b1100111}; //C_JR    ?
                  end
                  else begin
                      if(instruction[12]==1'b0) //?
                      dec_instruction = {7'b0000000, instruction[6:2], 5'b00000, 3'b000, instruction[11:7], 7'b0110011};// C_MV
                      else
                      dec_instruction = {7'b0000000, instruction[6:2], instruction[11:7], 3'b000, instruction[11:7], 7'b0110011};//C_ADD
                  end
                  end
            default : dec_instruction = 32'b0;
        endcase
    end
    else begin
    dec_instruction=32'b0;
    end
    
end
endmodule

