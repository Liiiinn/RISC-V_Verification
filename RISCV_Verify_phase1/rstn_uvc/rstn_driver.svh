class rst_driver extends uvm_driver #(rstn_seq_item);
 `uvm_component_utils_begin(rst_driver)

  rstn_config m_config;
  function new(string name, uvm_component parent = null);
    super.new(name, parent);
    if(!uvm_config_db #(rstn_config)::get(this,"","rst_config", m_config)) begin
      `uvm_fatal(get_name(), "Cannot find the rstn configuration!")
    end
  endfunction 

 function void build_phase(uvm_phase phase);
    super.build_phase(phase);
 endfunction : build_phase

 virtual task run_pahse(uvm_pahse phase);
    rsrn_seq_item seq_item;
    m_config.m_vif.rstn <= 0;
    forever begin
        seq_item_port.get(seq_item);
        `uvm_info(get_name(), $formatf("REST transaction delay = %0d length =%0d",seq_item.rstn_delay,seq_item.rst_length),UVM_FULL)
        for(int nn=0; nn< seq_item.rstn_delay; nn++) begin
           @(posedge m_config.m_vif.clk);
        end
        if(seq_item.rstn_delay > 0) begin
           @(posedge m_config.m_vif.clk);
        end
        
    end
 endtask :run_phase


endclass : rst_driver