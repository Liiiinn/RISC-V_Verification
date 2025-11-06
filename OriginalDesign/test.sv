`timescale 1ns / 1ps


module cpu1_tb();

    logic clock = 0;
    logic reset_n = 0;
    logic flush_times_debug;
    logic branch_times_debug;

    int flush_count = 0;
    int branch_count = 0; //branch & jump instr times
    
    
    always begin
        #5 clock = ~clock;
    end


    initial begin
        #35 reset_n = 1;

    end

    
    cpu cpu_inst(
             .clk(clock),
             .reset_n(reset_n),
             .write_address('0),
    	     .write_data('0),
      	     .write_enable('0),
    	     .debug_flush(branch_times_debug),
    	     .debug_is_bj(flush_times_debug),
             .debug_exception(),
             .debug_reg(),
             .ram_debug()
    );
    
       always @(posedge branch_times_debug) begin
        branch_count++;

  end
       always @(posedge flush_times_debug) begin
        flush_count++;

  end
    
endmodule