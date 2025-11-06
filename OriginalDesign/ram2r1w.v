`timescale 1ns/1ps

module ram2r1w
#(parameter ENTRY_NUM = 32, ADDR_WIDTH = 5, DATA_WIDTH = 32)
(
    input  clk,
    input  reset_n,
    input  we,
    input  [DATA_WIDTH - 1: 0] data_i,
    input  [ADDR_WIDTH - 1: 0] write_addr,
    input  [ADDR_WIDTH - 1: 0] read_0_addr,
    input  [ADDR_WIDTH - 1: 0] read_1_addr,
    output [DATA_WIDTH - 1: 0] data_0_o,
    output [DATA_WIDTH - 1: 0] data_1_o
);

reg [DATA_WIDTH - 1: 0] history_table [ENTRY_NUM - 1: 0];
assign data_0_o = history_table[read_0_addr];
assign data_1_o = history_table[read_1_addr];



integer i;
always @(posedge clk)
begin
    if(!reset_n) begin
    for (i = 0 ; i < ENTRY_NUM ; i = i + 1)
            history_table[i] <= 0;    
    end
    else if (we) begin
        history_table[write_addr] <= data_i;
    end
end

endmodule // distri_ram
