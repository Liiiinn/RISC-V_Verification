`ifndef MEM_IF_SV
`define MEM_IF_SV

interface mem_if(input logic clk, input logic rstn);
    
    // 内存访问信号
    logic [31:0] addr;
    logic [31:0] wdata;
    logic [31:0] rdata;
    logic we;
    logic [3:0] be;  // Byte enable
    
    // Driver clocking block
    clocking driver_cb @(posedge clk);
        default input #1ns output #1ns;
        input addr, wdata, we, be;
        output rdata;
    endclocking
    
    // Monitor clocking block
    clocking monitor_cb @(posedge clk);
        default input #1ns;
        input addr, wdata, rdata, we, be;
    endclocking
    
    modport driver_mp(clocking driver_cb, input clk, rstn);
    modport monitor_mp(clocking monitor_cb, input clk, rstn);
    
endinterface : mem_if

`endif