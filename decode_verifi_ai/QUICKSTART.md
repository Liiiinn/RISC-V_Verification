# 快速开始指南 - Decode Stage UVM 验证

## 5分钟快速运行

### 1. 检查环境
```bash
# 确保在正确的目录
cd "e:\Life Study in Lund\Course\IC Project\verification\RISC-V_Verification\decode_verifi"

# 检查必要文件是否存在
ls -la *.sv Makefile run_tests.sh
```

### 2. 运行第一个测试
```bash
# 使用脚本运行（推荐）
./run_tests.sh -t decode_rtype_test

# 或使用Makefile
make test TEST=decode_rtype_test
```

### 3. 查看结果
测试完成后，检查：
- 终端输出中的"PASSED"/"FAILED"信息
- 如果启用了波形，查看`decode_test.vcd`文件

## 常用命令

```bash
# 列出所有可用测试
./run_tests.sh -l

# 运行随机测试
./run_tests.sh -t decode_random_test

# 运行综合测试（包含所有功能）
./run_tests.sh -t decode_comprehensive_test

# 使用GUI运行（便于调试）
./run_tests.sh -t decode_rtype_test -g

# 启用波形记录
./run_tests.sh -t decode_rtype_test -w

# 清理构建文件
./run_tests.sh -c
```

## 预期输出示例

成功的测试输出应该类似于：
```
=== Decode Stage UVM Test Configuration ===
Test:       decode_rtype_test
Simulator:  questa
Verbosity:  UVM_MEDIUM
GUI:        false
Waves:      false

Running with Questa ModelSim...
Compiling design...
Compiling testbench...
Starting simulation...

UVM_INFO @ 0: reporter [RPTMGR] Topology printout:
uvm_test_top [decode_rtype_test]
  env [decode_env]
    agent [decode_agent]
      driver [decode_driver]
      monitor [decode_monitor]
      sequencer [uvm_sequencer]
    scoreboard [decode_scoreboard]

...

UVM_INFO: [SCOREBOARD] === FINAL REPORT ===
UVM_INFO: [SCOREBOARD] Total transactions: 16
UVM_INFO: [SCOREBOARD] Passed: 16
UVM_INFO: [SCOREBOARD] Failed: 0
UVM_INFO: [SCOREBOARD] *** ALL TESTS PASSED ***

=== Test completed successfully! ===
```

## 故障排除

### 问题1: 找不到文件
```
错误: can't find ../RISC-V/common.sv
解决: 检查相对路径，确保RISC-V目录存在
```

### 问题2: UVM相关错误
```
错误: UVM_FATAL: Could not get virtual interface
解决: 检查testbench中interface的配置
```

### 问题3: 编译错误
```
错误: syntax error near "import"
解决: 确保使用的是SystemVerilog编译器，添加-sv标志
```

## 下一步

1. **理解测试结构**: 查看`decode_test.sv`了解不同测试的区别
2. **自定义测试**: 修改`decode_sequence.sv`中的约束
3. **添加检查**: 扩展`decode_scoreboard.sv`中的验证逻辑
4. **覆盖率分析**: 启用功能和代码覆盖率收集

## 需要帮助?

- 查看`README.md`获取详细文档
- 检查各个`.sv`文件中的注释
- 运行`./run_tests.sh -h`获取命令帮助
