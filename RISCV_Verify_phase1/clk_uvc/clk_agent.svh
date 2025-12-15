import uvm_pkg::*;
`include "uvm_macros.svh"

class clk_agent extends uvm_agent;
  	`uvm_component_utils(clk_agent)
	clk_driver m_driver;
   	clk_config m_config;


  	function new(string name = "clk_agent", uvm_component parent = null);
  	  	super.new(name, parent);
  	endfunction : new


	function void build_phase (uvm_phase phase);
		super.build_phase(phase);
		if(!uvm_config_db #(clk_config)::get(this, "", "config", m_config)) begin
			`uvm_fatal(get_name(), "Cannot find the clock configuration!")
		end

		uvm_config_db #(clk_config)::set(this, "m_driver","m_config", m_config);
		if(m_config.is_active) begin
			m_driver = clk_driver::type_id::create("m_driver", this);
		end
	endfunction : build_phase
 
	function void connect_phase(uvm_phase phase);
		super.connect_phase(phase);
	endfunction : connect_phase


   	function void end_of_elaboration_phase(uvm_phase phase);
     	super.end_of_elaboration_phase(phase);
     	`uvm_info(get_name(), "Clock Agent is alive...", UVM_MEDIUM)
	endfunction : end_of_elaboration_phase

endclass : clk_agent