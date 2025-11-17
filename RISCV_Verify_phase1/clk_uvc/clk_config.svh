class clk_config extends uvm_object;
bit is_active = 1;
int usigned clk_period = 100; // in ns
// interface 
virtual clk_if m_if;

`uvm_object_tuils_begin(clk_config)
`ubm_field_int(is_active, UVM_ALL_ON| UVM_DEC)
`uvm_field_int(clk_period,UVM_ALL_ON| UVM_DEC)
`uvm_object_utils_end

function new(string name = "clk_config");
  super.new(name);
endfunction : new

endclass : clk_config