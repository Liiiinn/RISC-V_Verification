# Decode Stage UVM Verification Environment

这是一个完整的UVM测试环境，用于验证RISC-V处理器的decode stage模块。

## 目录结构

```
decode_verifi/
├── README.md                 # 本文档
├── Makefile                  # Make构建脚本
├── run_tests.sh             # 测试运行脚本
├── decode_pkg.sv            # UVM包文件
├── decode_interface.sv      # 测试接口
├── decode_item.sv           # UVM sequence item
├── decode_driver.sv         # UVM driver
├── decode_monitor.sv        # UVM monitor
├── decode_agent.sv          # UVM agent
├── decode_scoreboard.sv     # UVM scoreboard
├── decode_sequence.sv       # UVM测试序列
├── decode_env.sv            # UVM环境
├── decode_test.sv           # UVM测试
├── decode_tb.sv             # 顶层测试台
└── decode_stage.sv          # 待测模块
```

## 功能特性

### 测试覆盖范围
- **指令类型测试**: R-type, I-type, S-type, B-type, U-type, J-type
- **寄存器文件测试**: 读写操作、数据一致性
- **立即数扩展测试**: 各种指令格式的立即数正确性
- **控制信号测试**: ALU操作、内存访问、分支跳转等控制信号
- **分支预测测试**: 分支预测信息的正确传递

### UVM组件
1. **decode_item**: 定义了输入输出信号的数据结构和约束
2. **decode_driver**: 驱动测试激励到DUT
3. **decode_monitor**: 监控DUT的输入输出
4. **decode_agent**: 包含driver、monitor和sequencer
5. **decode_scoreboard**: 参考模型和结果检查
6. **decode_sequence**: 各种测试序列
7. **decode_env**: 完整的测试环境
8. **decode_test**: 不同的测试用例

## 可用测试

| 测试名称 | 描述 |
|---------|------|
| `decode_random_test` | 随机指令测试 |
| `decode_rtype_test` | R-type指令测试 |
| `decode_itype_test` | I-type指令测试 |
| `decode_regfile_test` | 寄存器文件测试 |
| `decode_branch_test` | 分支指令测试 |
| `decode_jump_test` | 跳转指令测试 |
| `decode_loadstore_test` | 加载存储指令测试 |
| `decode_comprehensive_test` | 综合测试（包含所有上述测试） |

## 快速开始

### 1. 环境准备
确保已安装以下工具之一：
- Mentor Questa/ModelSim
- Synopsys VCS
- Cadence Xcelium

### 2. 运行测试

#### 使用脚本（推荐）
```bash
# 基本用法
./run_tests.sh                              # 运行默认测试

# 指定测试
./run_tests.sh -t decode_rtype_test         # 运行R-type测试
./run_tests.sh -t decode_comprehensive_test # 运行综合测试

# 使用GUI
./run_tests.sh -t decode_rtype_test -g      # 使用GUI运行

# 启用波形
./run_tests.sh -t decode_rtype_test -w      # 启用波形记录

# 指定仿真器
./run_tests.sh -s vcs -t decode_rtype_test  # 使用VCS

# 清理文件
./run_tests.sh -c                           # 清理构建文件

# 查看帮助
./run_tests.sh -h                           # 显示帮助信息
./run_tests.sh -l                           # 列出可用测试
```

#### 使用Makefile
```bash
# 编译
make compile

# 运行默认测试
make sim

# 运行指定测试
make test TEST=decode_rtype_test

# 查看可用测试
make tests

# 清理
make clean
```

### 3. 直接使用仿真器

#### Questa ModelSim
```bash
# 编译
vlib work
vlog +incdir+../RISC-V +incdir+. ../RISC-V/common.sv ../RISC-V/register_file.sv ../RISC-V/control_unit.sv decode_stage.sv
vlog +incdir+../RISC-V +incdir+. decode_pkg.sv decode_interface.sv decode_tb.sv

# 仿真
vsim +UVM_TESTNAME=decode_rtype_test +UVM_VERBOSITY=UVM_MEDIUM -c -do "run -all; quit" decode_tb
```

#### VCS
```bash
# 编译和仿真
vcs +incdir+../RISC-V +incdir+. -sverilog ../RISC-V/common.sv ../RISC-V/register_file.sv ../RISC-V/control_unit.sv decode_stage.sv decode_pkg.sv decode_interface.sv decode_tb.sv
./simv +UVM_TESTNAME=decode_rtype_test +UVM_VERBOSITY=UVM_MEDIUM
```

## 测试详细说明

### decode_rtype_test
测试所有R-type指令（ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND）的解码正确性。

### decode_itype_test  
测试所有I-type指令（ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI）的解码正确性。

### decode_regfile_test
- 写入数据到寄存器1-31
- 测试从不同寄存器组合读取数据
- 验证x0寄存器始终为0

### decode_branch_test
测试分支指令（BEQ, BNE, BLT, BGE, BLTU, BGEU）的解码，包括：
- 立即数正确扩展
- 分支预测信息传递
- 控制信号正确性

### decode_jump_test
测试跳转指令（JAL, JALR）的解码正确性。

### decode_loadstore_test
测试加载存储指令的解码，包括：
- Load: LB, LH, LW, LBU, LHU
- Store: SB, SH, SW

### decode_comprehensive_test
按顺序运行所有上述测试，提供完整的功能覆盖。

## 调试和分析

### 日志分析
UVM会产生详细的日志信息，包括：
- 事务级别的输入输出
- Scoreboard的检查结果
- 错误和警告信息

### 波形分析
启用波形后，可以使用以下文件：
- `decode_test.vcd`: VCD格式波形文件
- `vsim.wlf`: Questa专用波形文件

### 覆盖率分析
可以通过仿真器的覆盖率工具分析：
- 代码覆盖率
- 功能覆盖率
- 断言覆盖率

## 自定义测试

### 添加新的测试序列
1. 在`decode_sequence.sv`中添加新的sequence类
2. 在`decode_test.sv`中添加对应的test类
3. 更新`decode_pkg.sv`包含新文件

### 修改约束
在`decode_item.sv`中修改约束来生成特定的测试模式。

### 扩展Scoreboard
在`decode_scoreboard.sv`中添加新的检查逻辑。

## 常见问题

### Q: 编译错误 "找不到common.sv"
**A:** 确保`../RISC-V/common.sv`文件存在，或调整include路径。

### Q: UVM_FATAL: "Could not get virtual interface"
**A:** 确保testbench正确设置了interface到config_db。

### Q: 测试超时
**A:** 检查时钟和复位信号，确保DUT正常工作。

### Q: Scoreboard报告不匹配
**A:** 检查参考模型的逻辑是否与DUT一致，特别是立即数扩展和控制信号生成。

## 进阶使用

### 性能测试
可以通过增加`num_transactions`来进行长时间的随机测试。

### 错误注入
可以修改driver或sequence来注入错误，测试DUT的错误处理能力。

### 协议检查
可以添加assertion来检查接口协议的正确性。


