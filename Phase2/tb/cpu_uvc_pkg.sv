`ifndef CPU_UVC_PKG_SV
`define CPU_UVC_PKG_SV

// Import common package first
import common::*;

package cpu_uvc_pkg;
    
    import uvm_pkg::*;
    `include "uvm_macros.svh"
    
    // Include utility functions first
    `include "cpu_utils.svh"
    
    // Include UVC components (must be in +incdir paths)
    `include "cpu_config.svh"
    `include "cpu_seq_item.svh"
    `include "cpu_driver.svh"
    `include "cpu_monitor.svh"
    `include "cpu_logger.svh"
    `include "cpu_agent.svh"
    `include "cpu_coverage.svh"
    
endpackage

`endif
