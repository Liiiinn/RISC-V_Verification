interface decode_if (input logic clk, input logic reset_n);
    logic [31:0] instruction;
    logic [31:0] pc;
    logic        write_en;
    logic [4:0]  write_id;
    logic [31:0] write_data;
    logic        branch_in;

endinterface : decode_if