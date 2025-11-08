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
    decode_interface decode_if(clk, reset_n);
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end
    
    // Reset generation
    initial begin
        reset_n = 0;
        #50;
        reset_n = 1;
    end
    
    // DUT instantiation
    decode_stage dut (
        .clk(decode_if.clk),
        .reset_n(decode_if.reset_n),
        .instruction(decode_if.instruction),
        .pc(decode_if.pc),
        .write_en(decode_if.write_en),
        .write_id(decode_if.write_id),
        .write_data(decode_if.write_data),
        .branch_in(decode_if.branch_in),
        .branch_out(decode_if.branch_out),
        .reg_rd_id(decode_if.reg_rd_id),
        .pc_out(decode_if.pc_out),
        .read_data1(decode_if.read_data1),
        .read_data2(decode_if.read_data2),
        .immediate_data(decode_if.immediate_data),
        .control_signals(decode_if.control_signals),
        .debug_reg(decode_if.debug_reg)
    );
    
    // UVM test configuration
    initial begin
        // Set interface in config_db
        uvm_config_db#(virtual decode_interface)::set(null, "*", "decode_vif", decode_if);
        
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
