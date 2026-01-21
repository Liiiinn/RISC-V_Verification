`timescale 1ns/1ps

module tb_top;
    
    import uvm_pkg::*;
    import common::*;
    import cpu_uvc_pkg::*;

    `include "uvm_macros.svh"
    `include "top_env.svh"
    `include "base_test.svh"
    
    // ===== 时钟和复位 =====
    logic clk, rstn;
    
    // ===== CPU接口实例化 =====
    cpu_if cpu_vif(.clk(clk), .rstn(rstn));
    
    // ===== DUT实例化 =====
    cpu dut(
        .clk(clk),
        .reset_n(rstn),
        
        // UART程序加载接口
        .write_address(cpu_vif.write_address),
        .write_data(cpu_vif.write_data),
        .write_enable(cpu_vif.write_enable),
        
        // 调试输出（直接连接到DUT端口）
        .debug_flush(cpu_vif.debug_flush),
        .debug_is_bj(cpu_vif.debug_is_bj),
        .debug_exception(cpu_vif.debug_exception),
        .debug_reg(cpu_vif.debug_reg),
        .ram_debug(cpu_vif.ram_debug)
    );
    
    // ===== Pipeline PC/Instruction delay to match retired (WB) stage =====
    // 5-stage pipeline: IF -> ID -> EX -> MEM -> WB
    // retired signal corresponds to WB stage, so we need 4-cycle delay
    logic [31:0] pc_delay [0:3];
    logic [31:0] instr_delay [0:3];
    
    always @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            foreach (pc_delay[i]) pc_delay[i] <= 32'h0;
            foreach (instr_delay[i]) instr_delay[i] <= 32'h0;
        end else begin
            // Shift register: track PC/instruction through pipeline
            pc_delay[0] <= dut.imem_addr;
            instr_delay[0] <= dut.imem_data;
            for (int i = 1; i < 4; i++) begin
                pc_delay[i] <= pc_delay[i-1];
                instr_delay[i] <= instr_delay[i-1];
            end
        end
    end
    
    // ===== 层次化路径采样内部信号 =====
    always @(posedge clk) begin
        // PC和指令（使用4-cycle delayed值来匹配WB阶段的retired信号）
        cpu_vif.debug_pc = pc_delay[3];
        cpu_vif.debug_instruction = instr_delay[3];
        cpu_vif.debug_next_pc = dut.inst_fetch_stage.pc_next;
        
        // 分支信号（从execute阶段采样）
        cpu_vif.debug_branch_taken = dut.ex2if_branch_taken;
        cpu_vif.debug_branch_target = dut.ex2if_branch_target_addr;
        
        // 流水线寄存器
        cpu_vif.debug_if_id_pc = dut.if_id_reg.pc;
        cpu_vif.debug_if_id_instruction = dut.if_id_reg.instruction;
        cpu_vif.debug_id_ex_pc = dut.id_ex_reg.pc;
        cpu_vif.debug_ex_mem_pc = dut.ex_mem_reg.alu_data;
        cpu_vif.debug_mem_wb_pc = dut.mem_wb_reg.alu_data;
        
        // 流水线控制信号
        cpu_vif.debug_hazard = dut.hazard;
        cpu_vif.debug_stall = dut.hazard;
        cpu_vif.debug_PC_stall = dut.hazard;
        
        // 内存访问信号
        cpu_vif.debug_mem_read = dut.ex_mem_reg.control.mem_read;
        cpu_vif.debug_mem_write = dut.ex_mem_reg.control.mem_write;
        cpu_vif.debug_mem_addr = dut.memory_addr;
        cpu_vif.debug_mem_wdata = dut.ex_mem_reg.memory_data;  // Use memory_data instead of rs2_data
        cpu_vif.debug_mem_rdata = dut.memory_memory_data;
        
        // 寄存器写回信号
        cpu_vif.debug_rd_addr = dut.mem_wb_reg.reg_rd_id;  // Use reg_rd_id instead of rd_id
        cpu_vif.debug_rd_data = dut.wb_result;
        cpu_vif.debug_rd_we = dut.mem_wb_reg.control.reg_write;
    end
    
    // ===== 时钟生成 =====
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 10ns周期 = 100MHz
    end
    
    // ===== 复位生成 =====
    initial begin
        rstn = 0;
        repeat (10) @(posedge clk);
        rstn = 1;
        `uvm_info("TB_TOP", "Reset released", UVM_MEDIUM)
    end
    
    // ===== UVM配置和启动 =====
    initial begin
        string mem_file;
        
        // 设置虚拟接口到config_db
        uvm_config_db#(virtual cpu_if)::set(null, "*", "cpu_vif", cpu_vif);
        
        // 设置DUT路径（用于层次化采样）
        cpu_vif.dut_path = "tb_top.dut";
        
        // 从命令行获取mem文件并加载到program_memory
        if ($value$plusargs("MEM_FILE=%s", mem_file)) begin
            `uvm_info("TB_TOP", $sformatf("Loading program from: %s", mem_file), UVM_LOW)
            $readmemh(mem_file, dut.inst_mem.ram);
        end else begin
            `uvm_warning("TB_TOP", "No MEM_FILE specified, program memory not initialized")
        end
        
        // 启用波形记录 (disabled - use vsim -vcdplus/-wlf instead)
        // $dumpfile("logs/cpu_simulation.vcd");
        // $dumpvars(0, tb_top);
        
        `uvm_info("TB_TOP", "========================================", UVM_LOW)
        `uvm_info("TB_TOP", "  CPU Offline Verification Testbench", UVM_LOW)
        `uvm_info("TB_TOP", "  WSL2 Spike + Windows UVM + riscv-dv", UVM_LOW)
        `uvm_info("TB_TOP", "========================================", UVM_LOW)
        
        // 运行UVM测试
        run_test();
    end
    
    // ===== 超时保护 =====
    initial begin
        #100_000_000;  // 100ms超时
        `uvm_fatal("TB_TOP", "Simulation timeout!")
    end
    
    // ===== 程序完成监控 =====
    always @(posedge cpu_vif.program_finished) begin
        `uvm_info("TB_TOP", $sformatf("Program finished at cycle %0d", cpu_vif.cycle_count), UVM_LOW)
        repeat (100) @(posedge clk);  // 等待日志完成
        $finish;
    end
    
endmodule
