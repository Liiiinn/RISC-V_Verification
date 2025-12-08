class rstn_config extends uvm_object;
	bit is_active = 1;
	bit has_monitor = 1;

	virtual rstn_if m_vif;

	`uvm_object_utils_begin(rstn_config)
		`uvm_field_int(is_active, UVM_ALL_ON | UVM_DEC)
		`uvm_field_int(has_monitor, UVM_ALL_ON | UVM_DEC)
	`uvm_object_utils_end
	
	function new(string name = "rstn_config");
		super.new(name);
	endfunction : new

endclass : rstn_config