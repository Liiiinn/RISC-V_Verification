import common::*;
module mul_div (
    input logic clk,
    input logic reset_n,
    input logic start,
    input alu_op_type operation, 
    input logic [XLEN_WIDTH-1:0] operand1,
    input logic [XLEN_WIDTH-1:0] operand2,
    output logic [XLEN_WIDTH-1:0] result,
    output logic ready,
    output logic exception
);

    // Internal signals
    logic [XLEN_WIDTH-1:0] mul_result;
    logic [XLEN_WIDTH-1:0] div_result;
    logic mul_ready, div_ready;

    // Control signals
    logic is_multiplication;
    logic is_division;

    assign is_multiplication = (operation == ALU_MUL || operation == ALU_MULH);
    assign is_division = (operation == ALU_DIV || operation == ALU_DIVU || operation == ALU_REM || operation == ALU_REMU);

    multiplier inst_seq_multiplier (
        .clk(clk),
        .reset_n(reset_n),
        .start(is_multiplication && start),
        .operation(operation),
        .operand1(operand1),
        .operand2(operand2),
        .result(mul_result),
        .ready( mul_ready)
    );


    // Divider
    divider inst_divider (
        .clk(clk),
        .reset_n(reset_n),
        .start(is_division && start),
        .operation(operation),
        .operand1(operand1),
        .operand2(operand2),
        .result(div_result),
        .ready(div_ready),
        .exception(exception)
    );

    // Output logic
    always_comb begin
        if (is_multiplication) begin
            result = mul_result; 
            ready = mul_ready;
        end else if (is_division) begin
            result = div_result;
            ready = div_ready;
        end else begin
            result = '0;
            ready = 1'b1;
        end
    end

endmodule