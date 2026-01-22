class exe_config extends uvm_object;
    bit is_active = 1;
    bit has_monitor = 1;
    virtual exe_if m_vif;

    `uvm_object_utils_begin(exe_config)
    `uvm_field_int(is_active, UVM_ALL_ON | UVM_DEC)
    `uvm_field_int(has_monitor, UVM_ALL_ON | UVM_DEC)
    `uvm_object_utils_end

    function new(string name = "exe_config");
        super.new(name);
    endfunction

endclass : exe_config