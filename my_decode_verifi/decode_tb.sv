// decode_tb.sv - Testbench top module for decode stage
`timescale 1ns / 1ps

import uvm_pkg::*;
`include "uvm_macros.svh"
import decode_pkg::*;
import common::*;

module decode_tb;
    
    // Clock and reset
    logic clk;
    logic reset_n;
    
    // Create interface
    //task3:
    
    // Clock generation
    // task4:
    // Reset generation
    initial begin
    // task5:

    end
    
    // DUT instantiation
    decode_stage dut (

    );
    
    // UVM test configuration
    initial begin
        // Set interface in config_db
        uvm_config_db#(virtual )::set(null, "*", "decode_vif", );
        
        // Enable wave dumping
        $dumpfile("decode_test.vcd");
        $dumpvars(0, decode_tb);
        
        // Run the test
        run_test();
    end
    
    // Timeout watchdog
    initial begin
        #1000000; // 1ms timeout
        `uvm_fatal("TIMEOUT", "Test timeout!")
    end
    
endmodule
