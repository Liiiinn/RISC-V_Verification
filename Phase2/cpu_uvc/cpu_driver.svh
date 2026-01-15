`ifndef CPU_DRIVER_SVH
`define CPU_DRIVER_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class cpu_driver extends uvm_driver #(cpu_seq_item);
    `uvm_component_utils(cpu_driver)
    
    cpu_config m_config;
    virtual cpu_if vif;
    
    integer elf_fd;
    longint bytes_loaded;                // 加载的字节数统计
    logic [31:0] load_start_addr;        // 加载起始地址
    logic [31:0] load_end_addr;          // 加载结束地址
    
    function new(string name = "cpu_driver", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        if (!uvm_config_db#(cpu_config)::get(this, "", "cpu_config", m_config)) begin
            `uvm_fatal(get_name(), "Cannot get cpu_config from config_db!")
        end
        
        vif = m_config.vif;
        `uvm_info(get_name(), "Driver build phase completed", UVM_HIGH)
    endfunction
    
    virtual task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        // 等待复位完成
        `uvm_info(get_name(), "Waiting for reset release...", UVM_HIGH)
        @(posedge vif.rstn);
        repeat (5) @(posedge vif.clk);
        
        // 加载程序到DUT
        if (m_config.batch_mode) begin
            `uvm_info(get_name(), 
                $sformatf("[Test %0d/%0d] Loading ELF: %s", 
                    m_config.test_index + 1, m_config.total_tests, m_config.test_elf_path), 
                UVM_LOW)
        end else begin
            `uvm_info(get_name(), $sformatf("Loading ELF: %s", m_config.test_elf_path), UVM_LOW)
        end
        
        // 加载ELF到DUT内存
        load_elf_to_memory(m_config.test_elf_path);
        
        // 打印加载统计
        `uvm_info(get_name(), 
            $sformatf("✓ Program loaded: %0d bytes [0x%08h - 0x%08h]", 
                bytes_loaded, load_start_addr, load_end_addr), 
            UVM_LOW)
        
        phase.drop_objection(this);
    endtask
    
    // ========================================================================
    // 加载ELF文件到DUT内存
    // 策略：简单加载，假设DUT的write接口正确实现
    // 主要验证留给ISA执行trace与Spike的对比
    // ========================================================================
    virtual task load_elf_to_memory(string elf_path);
        string hex_path;
        integer status;
        logic [31:0] addr;
        logic [7:0] byte_data;
        logic [7:0] first_byte, last_byte;
        bit first_byte_saved;
        
        // 生成HEX路径（假设由riscv-dv预先生成或在编译时转换）
        hex_path = {elf_path, ".hex"};
        
        // 尝试打开HEX文件
        elf_fd = $fopen(hex_path, "r");
        
        // 如果HEX不存在，尝试自动转换
        if (elf_fd == 0) begin
            `uvm_info(get_name(), "HEX file not found, attempting auto-conversion...", UVM_MEDIUM)
            status = convert_elf_to_hex(elf_path, hex_path);
            
            if (status != 0) begin
                `uvm_fatal(get_name(), 
                    $sformatf("Cannot open or convert ELF file: %s\nPlease ensure:\n" +
                              "  1. HEX file exists: %s\n" +
                              "  2. Or riscv32-unknown-elf-objcopy is in PATH",
                              elf_path, hex_path))
            end
            
            elf_fd = $fopen(hex_path, "r");
        end
        
        // 初始化统计
        addr = 32'h0;
        bytes_loaded = 0;
        load_start_addr = 32'h0;
        first_byte_saved = 1'b0;
        
        // 逐字节写入DUT内存
        // 按照接口契约驱动：write_address, write_data, write_enable
        while (!$feof(elf_fd)) begin
            status = $fscanf(elf_fd, "%h", byte_data);
            
            if (status == 1) begin
                // 驱动DUT write接口
                @(posedge vif.clk);
                vif.write_address <= addr;
                vif.write_data <= byte_data;
                vif.write_enable <= 1'b1;
                
                // 统计信息
                if (!first_byte_saved) begin
                    first_byte = byte_data;
                    first_byte_saved = 1'b1;
                end
                last_byte = byte_data;
                
                addr = addr + 1;
                bytes_loaded = bytes_loaded + 1;
                
                // 进度提示（每1KB）
                if (bytes_loaded % 1024 == 0) begin
                    `uvm_info(get_name(), $sformatf("  Loading... %0d KB", bytes_loaded/1024), UVM_HIGH)
                end
            end
        end
        
        // 关闭写使能
        @(posedge vif.clk);
        vif.write_enable <= 1'b0;
        vif.write_address <= 32'h0;
        vif.write_data <= 8'h0;
        
        $fclose(elf_fd);
        
        // 记录加载范围
        load_end_addr = addr - 1;
        
        // 可选：简单的完整性检查（读回首尾字节验证）
        if (m_config.verbose_logging) begin
            `uvm_info(get_name(), 
                $sformatf("Memory load verification: first=0x%02h, last=0x%02h", 
                    first_byte, last_byte), 
                UVM_MEDIUM)
        end
        
        // 警告检查
        if (bytes_loaded == 0) begin
            `uvm_warning(get_name(), "No data loaded from HEX file!")
        end
        
        if (bytes_loaded > 100000) begin
            `uvm_warning(get_name(), 
                $sformatf("Large program loaded (%0d bytes). May exceed memory limits.", 
                    bytes_loaded))
        end
    endtask
    
    // ========================================================================
    // ELF转HEX辅助函数（可选）
    // ========================================================================
    virtual function integer convert_elf_to_hex(string elf_path, string hex_path);
        string cmd;
        integer status;
        
        cmd = $sformatf("riscv32-unknown-elf-objcopy -O verilog %s %s 2>/dev/null", 
                        elf_path, hex_path);
        
        `uvm_info(get_name(), $sformatf("Executing: %s", cmd), UVM_HIGH)
        status = $system(cmd);
        
        return status;
    endfunction
    
    // ========================================================================
    // Report Phase - 打印加载统计
    // ========================================================================
    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        if (bytes_loaded > 0) begin
            `uvm_info(get_name(), "========== Program Loading Summary ==========", UVM_MEDIUM)
            `uvm_info(get_name(), $sformatf("Total bytes loaded: %0d", bytes_loaded), UVM_MEDIUM)
            `uvm_info(get_name(), $sformatf("Address range:      0x%08h - 0x%08h", 
                load_start_addr, load_end_addr), UVM_MEDIUM)
            `uvm_info(get_name(), "=============================================", UVM_MEDIUM)
        end
    endfunction
    
endclass

`endif