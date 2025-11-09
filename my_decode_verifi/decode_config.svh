class decode_config extends uvm_object;
   bit is_active = 1;
   bit has_monitor =1;
   virtual decode_interface m_vif;

   `uvm_object_utils_begin(decode_config)
       `uvm_object_utils_field(is_active, UVM_ALL_ON|UVM_DEC)
       `uvm_object_utils_field(has_monitor, UVM_ALL_ON|UVM_DEC)
       `uvm_object_utils_field(m_vif, UVM_ALL_ON|UVM_DEC)

   `uvm_object_utils_end
    function new(string name = "decode_config");
         super.new(name);
    endfunction

endclass