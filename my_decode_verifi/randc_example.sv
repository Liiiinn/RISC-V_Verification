// randc_example.sv - 演示如何使用randc替代for循环的例子

`timescale 1ns / 1ps

// 方法1: 使用类成员的randc
class register_writer_randc;
    
    // randc变量会循环生成1-31的所有值，不重复
    randc logic [4:0] reg_id;
    
    // 约束限制范围
    constraint valid_range {
        reg_id inside {[1:31]};
    }
    
    // 生成一个寄存器ID
    function logic [4:0] get_next_reg();
        if (!this.randomize()) begin
            $error("Failed to randomize reg_id");
            return 0;
        end
        return reg_id;
    endfunction
    
endclass

// 方法2: 使用randc数组
class register_writer_array;
    
    // 预定义包含1-31的数组
    logic [4:0] reg_array[31];
    int current_index = 0;
    
    function new();
        // 初始化数组
        for (int i = 0; i < 31; i++) begin
            reg_array[i] = i + 1;
        end
        // 随机化数组顺序
        reg_array.shuffle();
    endfunction
    
    // 获取下一个寄存器ID
    function logic [4:0] get_next_reg();
        logic [4:0] result;
        result = reg_array[current_index];
        current_index = (current_index + 1) % 31;
        if (current_index == 0) begin
            // 重新洗牌
            reg_array.shuffle();
        end
        return result;
    endfunction
    
endclass

// 方法3: 在UVM序列中直接使用randc
class decode_regfile_sequence_example extends uvm_sequence #(decode_item);
    
    `uvm_object_utils(decode_regfile_sequence_example)
    
    // 使用randc确保覆盖所有寄存器
    randc logic [4:0] write_reg_id;
    
    constraint reg_constraint {
        write_reg_id >= 1;
        write_reg_id <= 31;
    }
    
    function new(string name = "decode_regfile_sequence_example");
        super.new(name);
    endfunction
    
    virtual task body();
        decode_item req;
        
        $display("=== 使用randc方法写寄存器 ===");
        
        // 写入所有寄存器，randc保证不重复直到所有值都被使用
        repeat (31) begin
            req = decode_item::type_id::create("req");
            start_item(req);
            
            // 每次调用randomize()会得到下一个randc值
            if (!this.randomize()) begin
                `uvm_error("SEQ", "Randomization failed")
            end
            
            req.write_en = 1;
            req.write_id = write_reg_id;
            req.write_data = $urandom();
            
            $display("时间 %0t: 写入寄存器 x%0d = 0x%h", $time, write_reg_id, req.write_data);
            
            finish_item(req);
            #10;
        end
        
        $display("=== 所有寄存器写入完成 ===");
    endtask
    
endclass

// 测试模块
module randc_test();
    
    register_writer_randc rw1;
    register_writer_array rw2;
    
    initial begin
        $display("=== 测试randc方法 ===");
        
        // 测试方法1
        $display("\n方法1 - 类成员randc:");
        rw1 = new();
        for (int i = 0; i < 35; i++) begin // 测试35次，看循环效果
            $display("第%0d次: 寄存器 x%0d", i+1, rw1.get_next_reg());
        end
        
        // 测试方法2  
        $display("\n方法2 - 数组洗牌:");
        rw2 = new();
        for (int i = 0; i < 35; i++) begin
            $display("第%0d次: 寄存器 x%0d", i+1, rw2.get_next_reg());
        end
        
        $display("\n=== randc的优势 ===");
        $display("1. 自动确保所有值都被使用一遍");
        $display("2. 顺序是随机的，增加测试覆盖");
        $display("3. 不需要手动管理循环变量");
        $display("4. 适合UVM环境的随机化框架");
        
        $finish;
    end
    
endmodule

/*
输出示例:
方法1 - 类成员randc:
第1次: 寄存器 x15
第2次: 寄存器 x7  
第3次: 寄存器 x23
...
第31次: 寄存器 x12
第32次: 寄存器 x8  // 开始新一轮，但顺序不同
第33次: 寄存器 x19

randc的关键特性:
- 在一个周期内，所有可能的值都会被生成一次
- 直到所有值都用完，才开始下一个周期
- 每个周期内的顺序是随机的
- 非常适合需要完全覆盖的测试场景
*/
