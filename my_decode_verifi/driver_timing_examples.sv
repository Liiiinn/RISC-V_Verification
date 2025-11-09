// decode_driver_enhanced.sv - 增强版driver，提供更精确的时钟控制
virtual task drive_transaction(decode_item req);
    `uvm_info("DRIVER", $sformatf("Starting to drive transaction at time %0t", $time), UVM_HIGH)
    
    // 方法1: 立即驱动（在当前时钟边沿）
    // 适合组合逻辑输入
    m_config.m_vif.instruction <= req.instruction;
    m_config.m_vif.pc <= req.pc;
    m_config.m_vif.write_en <= req.write_en;
    m_config.m_vif.write_id <= req.write_id;
    m_config.m_vif.write_data <= req.write_data;
    m_config.m_vif.branch_in <= req.branch_in;
    
    `uvm_info("DRIVER", $sformatf("Driven at time %0t: instruction=0x%h, pc=0x%h", 
             $time, req.instruction, req.pc), UVM_HIGH)
    
    // 等待一个时钟周期，让DUT处理
    @(posedge m_config.m_vif.clk);
endtask

// 或者，如果您希望每个transaction持续一个完整时钟周期：
virtual task drive_transaction_hold(decode_item req);
    // 在时钟正边沿驱动信号
    @(posedge m_config.m_vif.clk);
    m_config.m_vif.instruction <= req.instruction;
    m_config.m_vif.pc <= req.pc;
    m_config.m_vif.write_en <= req.write_en;
    m_config.m_vif.write_id <= req.write_id;
    m_config.m_vif.write_data <= req.write_data;
    m_config.m_vif.branch_in <= req.branch_in;
    
    // 保持信号一个完整时钟周期
    @(posedge m_config.m_vif.clk);
    `uvm_info("DRIVER", $sformatf("Transaction completed at time %0t", $time), UVM_HIGH)
endtask
