// interface_comparison.sv - 不同interface设计的对比

// 设计1: 只有输入信号的接口
interface input_only_if(input logic clk, input logic reset_n);
    instruction_type instruction;
    logic [31:0] pc;
    logic write_en;
    
    clocking driver_cb @(posedge clk);
        default input #1 output #1;
        output instruction, pc, write_en;
    endclocking
    
    modport driver_mp(clocking driver_cb, input clk, reset_n);
endinterface

// 优点:
// - 简单清晰
// - 职责单一
// - 编译快速
// - 适合单向数据流

// 缺点:
// - 不能统一管理输出
// - 需要额外的监控机制
// - scoreboard需要其他方式获取输出

//=======================================================

// 设计2: 完整双向接口
interface bidirectional_if(input logic clk, input logic reset_n);
    // 输入信号
    instruction_type instruction;
    logic [31:0] pc;
    logic write_en;
    
    // 输出信号
    logic [31:0] read_data1;
    logic [31:0] read_data2;
    control_type control_signals;
    
    clocking driver_cb @(posedge clk);
        output instruction, pc, write_en;
    endclocking
    
    clocking monitor_cb @(posedge clk);
        input instruction, pc, write_en;           // 监控输入
        input read_data1, read_data2, control_signals; // 监控输出
    endclocking
    
    modport driver_mp(clocking driver_cb, input clk, reset_n);
    modport monitor_mp(clocking monitor_cb, input clk, reset_n);
endinterface

// 优点:
// - 统一管理所有信号
// - 便于监控和调试
// - scoreboard容易实现
// - 符合UVM最佳实践

// 缺点:
// - 接口较复杂
// - 需要管理更多信号
// - 可能过度设计

//=======================================================

// 设计3: 分离输入输出接口
interface input_if(input logic clk, input logic reset_n);
    instruction_type instruction;
    logic [31:0] pc;
    logic write_en;
    
    clocking cb @(posedge clk);
        output instruction, pc, write_en;
    endclocking
endinterface

interface output_if(input logic clk, input logic reset_n);
    logic [31:0] read_data1;
    logic [31:0] read_data2;
    control_type control_signals;
    
    clocking cb @(posedge clk);
        input read_data1, read_data2, control_signals;
    endclocking
endinterface

// 优点:
// - 清晰的职责分离
// - 可以独立测试
// - 灵活性高
// - 可重用性好

// 缺点:
// - 需要管理两个接口
// - 可能增加复杂性
// - 时钟同步需要注意

//=======================================================

// 实际使用场景选择:

// 场景1: 简单功能测试 -> 使用input_only_if
module simple_test();
    input_only_if iif(clk, reset_n);
    
    // 直接观察DUT输出
    logic [31:0] dut_output;
    
    decode_stage dut(
        .clk(iif.clk),
        .instruction(iif.instruction),
        .output_data(dut_output)
    );
    
    // 简单的激励驱动
    initial begin
        @(iif.driver_cb);
        iif.driver_cb.instruction <= test_instruction;
    end
endmodule

// 场景2: 完整UVM环境 -> 使用bidirectional_if
class decode_monitor extends uvm_monitor;
    virtual bidirectional_if vif;
    
    virtual task run_phase(uvm_phase phase);
        forever begin
            @(vif.monitor_cb);
            // 可以同时监控输入和输出
            item.instruction = vif.monitor_cb.instruction;
            item.read_data1 = vif.monitor_cb.read_data1;
            analysis_port.write(item);
        end
    endtask
endclass

// 场景3: 模块化验证 -> 使用分离接口
class decode_env extends uvm_env;
    input_agent  input_agt;
    output_agent output_agt;
    
    virtual function void connect_phase(uvm_phase phase);
        // 连接不同的agent到不同的接口
        input_agt.analysis_port.connect(scoreboard.input_export);
        output_agt.analysis_port.connect(scoreboard.output_export);
    endfunction
endclass
