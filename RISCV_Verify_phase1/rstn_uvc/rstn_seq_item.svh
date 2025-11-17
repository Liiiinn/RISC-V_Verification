class rstn_seq_item extends uvm_sequence_item;
  rand int unsigned rstn_delay;
  rand int unsigned rstn_length;

  bit rstn_value;
  int unsigned clks;

  
  `uvm_object_utils_begin(rstn_seq_item)
    `ubm_field_int(rstn_delay, UVM_ALL_ON| UVM_DEC)
    `ubm_field_int(rstn_length, UVM_ALL_ON| UVM_DEC)
    `ubm_field_int(rstn_value, UVM_ALL_ON| UVM_DEC)
    `ubm_field_int(clks, UVM_ALL_ON| UVM_DEC)
  `uvm_object_utils_end

  function new(string name = "rstn_seq_item");
    super.new(name);
  endfunction : new

endclass :rstn_seq_item