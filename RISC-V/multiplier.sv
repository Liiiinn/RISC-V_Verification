import common::*;
module multiplier #(
    parameter CHUNK_WIDTH = 8 // Bits per cycle
)(
    input  logic clk,
    input  logic reset_n,
    input  logic start,
    input  alu_op_type operation, // MUL, MULU
    input  logic [XLEN_WIDTH-1:0] operand1,
    input  logic [XLEN_WIDTH-1:0] operand2,
    output logic [XLEN_WIDTH-1:0] result,
    output logic finish,
    output logic ready
);

    logic signed [XLEN_WIDTH-1:0] multiplicand;
    logic signed [XLEN_WIDTH-1:0] multiplier;
    logic signed [2*XLEN_WIDTH-1:0] product;
    logic [$clog2(XLEN_WIDTH / CHUNK_WIDTH):0] cycle_count;
    logic busy;

    localparam int NUM_CYCLES = (XLEN_WIDTH + CHUNK_WIDTH - 1) / CHUNK_WIDTH;

    // Chunked multiplication
    always_ff @(posedge clk) begin
        if (!reset_n) begin
            multiplicand <= '0;
            multiplier   <= '0;
            product      <= '0;
            cycle_count  <= '0;
            busy         <= 1'b0;
            finish      <= 1'b0;
        end else if (start && !busy && !finish) begin
            multiplicand <= signed'(operand1);
            multiplier   <= signed'(operand2);
            product      <= '0;
            cycle_count  <= 0;
            busy         <= 1'b1;
            finish      <= 1'b0;
        end else if (busy) begin
            logic signed [CHUNK_WIDTH-1:0] multiplier_chunk;
            logic signed [2*XLEN_WIDTH-1:0] partial_product;
            multiplier_chunk = multiplier[CHUNK_WIDTH-1:0];
            if (cycle_count != NUM_CYCLES - 1)
                partial_product = multiplicand * $unsigned(multiplier_chunk);
            else
                partial_product = multiplicand * $signed(multiplier_chunk);
            product <= product + (partial_product <<< (cycle_count * CHUNK_WIDTH));
            multiplier <= multiplier >>> CHUNK_WIDTH;
            if (cycle_count == NUM_CYCLES - 1) begin
                busy  <= 1'b0;
                finish <= 1'b1;
            end else begin
                cycle_count <= cycle_count + 1;
            end
        end else begin
            finish <= 1'b0;
        end

    end

    
    always_comb begin
        if (finish) begin
            ready = 1'b1;
        end else if (start && !busy && !finish) begin
            ready = 1'b0;
        end else if (busy) begin
            ready = 1'b0;
        end else begin
            ready = 1'b1;
        end
    end

    assign result = (operation == ALU_MULH) ? product[2*XLEN_WIDTH-1:XLEN_WIDTH] : product[XLEN_WIDTH-1:0];

endmodule
