class rstn_monitor extends uvm_monitor;
	`uvm_component_utils(rstn_monitor)
	rstn_config m_config;
	uvm_analysis_port #(rstn_seq_item) m_analysis_port;

	function new(string name , uvm_component parent = null);
		super.new(name, parent);
	endfunction : new

	function void build_phase(uvm_phase phase);
		super.build_phase(phase);

		m_analysis_port = new("m_analysis_port", this);
        
        if(!uvm_config_db #(rstn_config)::get(this, "", "config", m_config)) begin
            `uvm_fatal(get_name(), "Cannot find the rstn configuration!")
        end
	endfunction : build_phase

	task run_phase(uvm_phase phase);
		rstn_seq_item seq_item;
		int unsigned clocks;
		logic rstn;
		logic prev_rstn;

		// ✅ 添加调试信息
        `uvm_info(get_name(), "RSTN monitor starting", UVM_LOW)

		// ✅ 等待第一个时钟沿
        @(negedge m_config.m_vif.clk);
        prev_rstn = m_config.m_vif.rstn;

		forever begin
			@(negedge m_config.m_vif.clk);
            rstn = m_config.m_vif.rstn;
            
            // ✅ 检测 rstn 变化
            if (rstn != prev_rstn) begin
                seq_item = rstn_seq_item::type_id::create("seq_item");
                seq_item.rstn_value = rstn;
                seq_item.clks = 1;

                `uvm_info(get_name(), $sformatf("RSTN change detected: rstn=%0b, clocks=%0d", rstn, 1), UVM_MEDIUM)
                m_analysis_port.write(seq_item);
                
                prev_rstn = rstn;
            end
		// 	@(negedge m_config.m_vif.clk);
        //     rstn = m_config.m_vif.rstn;
        //     clocks = 1;

		// 	while(rstn == m_config.m_vif.rstn) begin
		// 		@(negedge m_config.m_vif.clk);
		// 		clocks++;
		// 	end
		// 	seq_item = rstn_seq_item::type_id::create("seq_item");
		// 	seq_item.rstn_value = m_config.m_vif.rstn;
		// 	seq_item.clks = clocks;
		// 	m_analysis_port.write(seq_item);
		// 	clocks = 1;
		end
	endtask : run_phase
endclass : rstn_monitor