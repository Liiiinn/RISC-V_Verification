class rstn_config extends uvm_object;
 bit is_active = 1;
 bit has_monitor = 1;

 virual rstn_if m_vif;

 `uvm_object_tuils_begin(rstn_config)
 `ubm_field_int(is_active, UVM_ALL_ON| UVM_DEC)
 `ubm_field_int(has_monitor,UVM_ALL_ON| UVM_DEC)
 `uvm_object_utils_end
  
 function new(string name = "rstn_config");
   super.new(name);
 endfunction : new

endclass : rstn_config