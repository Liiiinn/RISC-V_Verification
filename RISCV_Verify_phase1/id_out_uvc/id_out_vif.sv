`ifndef ID_OUT_VIF_SV
`define ID_OUT_VIF_SV

import common::*;

interface id_out_vif(input logic clk, input logic rstn);

    // Output from ID stage
    branch_predict_type branch_out;
    logic [4:0] reg_rd_id;
    logic [31:0] pc_out;
    logic [31:0] read_data1;
    logic [31:0] read_data2;
    logic [31:0] immediate_data;
    control_type control_signals;
    logic [31:0] debug_reg[0:REGISTER_FILE_SIZE-1];
    
    // Monitor clocking block
    clocking monitor_cb @(posedge clk);
        default input #1;
        input branch_out;
        input reg_rd_id;
        input pc_out;
        input read_data1;
        input read_data2;
        input immediate_data;
        input control_signals;
        input debug_reg;
    endclocking
    
    // Modport for monitor
    modport monitor_mp(
        clocking monitor_cb, 
        input clk, 
        input rstn
    );

endinterface : id_out_vif

`endif