// decode_pkg.sv - UVM package for decode stage verification
`ifndef DECODE_PKG_SV
`define DECODE_PKG_SV

package decode_pkg;
    
    import uvm_pkg::*;
    `include "uvm_macros.svh"
    import common::*;
    
    // Include all UVM components
    `include "decode_item.sv"
    `include "decode_driver.sv"
    `include "decode_monitor.sv"
    `include "decode_agent.sv"
    `include "decode_scoreboard.sv"
    `include "decode_sequence.sv"
    `include "decode_env.sv"
    `include "decode_test.sv"
    
endpackage

`endif
