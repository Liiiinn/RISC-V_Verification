import uvm_pkg::*;
`include "uvm_macros.svh"

class clk_config extends uvm_object;	
	bit is_active = 1;
	int unsigned clk_period = 100; // in ns
	virtual clk_if m_if;

	`uvm_object_utils_begin(clk_config)
	`uvm_field_int(is_active, UVM_ALL_ON | UVM_DEC)
	`uvm_field_int(clk_period,UVM_ALL_ON | UVM_DEC)
	`uvm_object_utils_end
	
	// interface 


	function new(string name = "clk_config");
		super.new(name);
	endfunction : new

endclass : clk_config