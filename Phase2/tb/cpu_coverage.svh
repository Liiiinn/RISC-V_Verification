class cpu_coverage extends uvm_subscriber#(cpu_seq_item);
    `uvm_component_utils(cpu_coverage)
    
    cpu_seq_item item;
    cpu_config m_config;
    
    // ===== Funct3 覆盖率（ALU 操作）=====
    covergroup funct3_alu_cg;
        option.per_instance = 1;
        option.name = "funct3_alu_coverage";
        
        funct3_alu_cp: coverpoint item.instruction[14:12] {
            bins F3_ADDX  = {3'b000};  // ADD/ADDI
            bins F3_SUB   = {3'b000};  // SUB (same as ADD, differentiated by funct7)
            bins F3_SLTX  = {3'b010};  // SLT/SLTI
            bins F3_SLTUX = {3'b011};  // SLTU/SLTIU
            bins F3_XORX  = {3'b100};  // XOR/XORI
            bins F3_ORX   = {3'b110};  // OR/ORI
            bins F3_ANDX  = {3'b111};  // AND/ANDI
            bins F3_SLLX  = {3'b001};  // SLL/SLLI
            bins F3_SRXX  = {3'b101};  // SRL/SRA/SRLI/SRAI
        }
    endgroup
    
    // ===== Funct3 覆盖率（分支指令）=====
    covergroup funct3_branch_cg;
        option.per_instance = 1;
        option.name = "funct3_branch_coverage";
        
        funct3_branch_cp: coverpoint item.instruction[14:12] {
            bins F3_BEQ  = {3'b000};  // BEQ
            bins F3_BNE  = {3'b001};  // BNE
            bins F3_BLT  = {3'b100};  // BLT
            bins F3_BGE  = {3'b101};  // BGE
            bins F3_BLTU = {3'b110};  // BLTU
            bins F3_BGEU = {3'b111};  // BGEU
        }
        
        // 分支方向覆盖
        branch_taken_cp: coverpoint item.branch_taken {
            bins taken     = {1};
            bins not_taken = {0};
        }
        
        // 交叉覆盖：每种分支类型的 taken/not_taken
        funct3_branch_direction_cross: cross funct3_branch_cp, branch_taken_cp;
    endgroup
    
    // ===== Funct3 覆盖率（JALR）=====
    covergroup funct3_jalr_cg;
        option.per_instance = 1;
        option.name = "funct3_jalr_coverage";
        
        funct3_jalr_cp: coverpoint item.instruction[14:12] {
            bins F3_JALR = {3'b000};  // JALR
        }
    endgroup
    
    // ===== Funct3 覆盖率（Load 指令）=====
    covergroup funct3_load_cg;
        option.per_instance = 1;
        option.name = "funct3_load_coverage";
        
        funct3_load_cp: coverpoint item.instruction[14:12] {
            bins F3_LB  = {3'b000};  // LB - load byte
            bins F3_LH  = {3'b001};  // LH - load halfword
            bins F3_LW  = {3'b010};  // LW - load word
            bins F3_LBU = {3'b100};  // LBU - load byte unsigned
            bins F3_LHU = {3'b101};  // LHU - load halfword unsigned
        }
        
        // 内存地址对齐覆盖
        mem_align_cp: coverpoint item.mem_addr[1:0] {
            bins aligned     = {2'b00};
            bins misalign_1  = {2'b01};
            bins misalign_2  = {2'b10};
            bins misalign_3  = {2'b11};
        }
        
        // 交叉覆盖：Load 类型 × 地址对齐
        load_align_cross: cross funct3_load_cp, mem_align_cp {
            // LW 只在对齐时有效
            ignore_bins lw_misalign = binsof(funct3_load_cp.F3_LW) && 
                                       binsof(mem_align_cp) intersect {2'b01, 2'b10, 2'b11};
            // LH/LHU 只在偶地址有效
            ignore_bins lh_odd_misalign = binsof(funct3_load_cp.F3_LH) && 
                                          binsof(mem_align_cp) intersect {2'b01, 2'b11};
            ignore_bins lhu_odd_misalign = binsof(funct3_load_cp.F3_LHU) && 
                                           binsof(mem_align_cp) intersect {2'b01, 2'b11};
        }
    endgroup
    
    // ===== Funct3 覆盖率（Store 指令）=====
    covergroup funct3_store_cg;
        option.per_instance = 1;
        option.name = "funct3_store_coverage";
        
        funct3_store_cp: coverpoint item.instruction[14:12] {
            bins F3_SB = {3'b000};  // SB - store byte
            bins F3_SH = {3'b001};  // SH - store halfword
            bins F3_SW = {3'b010};  // SW - store word
        }
        
        // 内存地址对齐覆盖
        mem_align_cp: coverpoint item.mem_addr[1:0] {
            bins aligned     = {2'b00};
            bins misalign_1  = {2'b01};
            bins misalign_2  = {2'b10};
            bins misalign_3  = {2'b11};
        }
        
        // 交叉覆盖：Store 类型 × 地址对齐
        store_align_cross: cross funct3_store_cp, mem_align_cp {
            // SW 只在对齐时有效
            ignore_bins sw_misalign = binsof(funct3_store_cp.F3_SW) && 
                                       binsof(mem_align_cp) intersect {2'b01, 2'b10, 2'b11};
            // SH 只在偶地址有效
            ignore_bins sh_odd_misalign = binsof(funct3_store_cp.F3_SH) && 
                                          binsof(mem_align_cp) intersect {2'b01, 2'b11};
        }
    endgroup
    
    // ===== ALU 操作类型覆盖率 =====
    covergroup alu_op_cg;
        option.per_instance = 1;
        option.name = "alu_op_coverage";
        
        alu_op_cp: coverpoint item.alu_op {
            bins ALU_ADD  = {5'b00000};  // ADD
            bins ALU_SUB  = {5'b00001};  // SUB
            bins ALU_SLT  = {5'b00100};  // SLT - set less than
            bins ALU_SLTU = {5'b00110};  // SLTU - set less than unsigned
            bins ALU_XOR  = {5'b01000};  // XOR
            bins ALU_OR   = {5'b01100};  // OR
            bins ALU_AND  = {5'b01110};  // AND
            bins ALU_SLL  = {5'b00010};  // SLL - shift left logical
            bins ALU_SRL  = {5'b01010};  // SRL - shift right logical
            bins ALU_SRA  = {5'b01011};  // SRA - shift right arithmetic
            bins ALU_MUL  = {5'b00011};  // MUL - multiply
            bins ALU_DIV  = {5'b00101};  // DIV - divide
            bins ALU_DIVU = {5'b00111};  // DIVU - divide unsigned
            bins ALU_REM  = {5'b01001};  // REM - remainder
            bins ALU_REMU = {5'b01101};  // REMU - remainder unsigned
            bins ALU_PASS = {5'b01111};  // PASS - passthrough
            bins ALU_MULH = {5'b10000};  // MULH - multiply high
        }
        
        // 操作数来源（立即数 vs 寄存器）
        alu_src_cp: coverpoint item.alu_src {
            bins from_register = {0};
            bins from_immediate = {1};
        }
        
        // 交叉覆盖：ALU 操作 × 操作数来源
        alu_op_src_cross: cross alu_op_cp, alu_src_cp {
            // 某些操作只支持寄存器源（如 SUB, MUL, DIV 等）
            ignore_bins sub_imm = binsof(alu_op_cp.ALU_SUB) && binsof(alu_src_cp.from_immediate);
            ignore_bins mul_imm = binsof(alu_op_cp.ALU_MUL) && binsof(alu_src_cp.from_immediate);
            ignore_bins div_imm = binsof(alu_op_cp.ALU_DIV) && binsof(alu_src_cp.from_immediate);
            ignore_bins divu_imm = binsof(alu_op_cp.ALU_DIVU) && binsof(alu_src_cp.from_immediate);
            ignore_bins rem_imm = binsof(alu_op_cp.ALU_REM) && binsof(alu_src_cp.from_immediate);
            ignore_bins remu_imm = binsof(alu_op_cp.ALU_REMU) && binsof(alu_src_cp.from_immediate);
            ignore_bins mulh_imm = binsof(alu_op_cp.ALU_MULH) && binsof(alu_src_cp.from_immediate);
        }
    endgroup
    
    // ===== 指令 Opcode 覆盖率 =====
    covergroup opcode_cg;
        option.per_instance = 1;
        option.name = "opcode_coverage";
        
        opcode_cp: coverpoint item.instruction[6:0] {
            bins LOAD     = {7'b0000011};  // Load instructions
            bins LOAD_FP  = {7'b0000111};  // Load-FP (Floating Point)
            bins MISC_MEM = {7'b0001111};  // FENCE
            bins OP_IMM   = {7'b0010011};  // Immediate ALU operations
            bins AUIPC    = {7'b0010111};  // AUIPC
            bins STORE    = {7'b0100011};  // Store instructions
            bins STORE_FP = {7'b0100111};  // Store-FP
            bins OP       = {7'b0110011};  // Register-register ALU operations
            bins LUI      = {7'b0110111};  // LUI
            bins BRANCH   = {7'b1100011};  // Branch instructions
            bins JALR     = {7'b1100111};  // JALR
            bins JAL      = {7'b1101111};  // JAL
            bins SYSTEM   = {7'b1110011};  // SYSTEM (ECALL, EBREAK)
        }
    endgroup
    
    // ===== 寄存器写回覆盖率 =====
    covergroup regfile_cg;
        option.per_instance = 1;
        option.name = "regfile_coverage";
        
        // 目标寄存器覆盖（检查所有 32 个寄存器是否被写入）
        rd_addr_cp: coverpoint item.rd_addr {
            bins x0  = {0};   // x0 always zero
            bins x1  = {1};   // ra - return address
            bins x2  = {2};   // sp - stack pointer
            bins x3  = {3};   // gp - global pointer
            bins x4  = {4};   // tp - thread pointer
            bins x5_7   = {[5:7]};    // t0-t2 - temporaries
            bins x8_9   = {[8:9]};    // s0-s1 - saved registers
            bins x10_17 = {[10:17]};  // a0-a7 - function arguments
            bins x18_27 = {[18:27]};  // s2-s11 - saved registers
            bins x28_31 = {[28:31]};  // t3-t6 - temporaries
        }
        
        // 寄存器写使能覆盖
        rd_we_cp: coverpoint item.rd_we {
            bins write_enabled  = {1};
            bins write_disabled = {0};
        }
        
        // 交叉覆盖：确保每个寄存器都被写入过
        rd_write_cross: cross rd_addr_cp, rd_we_cp {
            ignore_bins no_write = binsof(rd_we_cp.write_disabled);
        }
    endgroup
    
    // ===== 流水线冒险覆盖率 =====
    covergroup hazard_cg;
        option.per_instance = 1;
        option.name = "hazard_coverage";
        
        // 冒险检测
        hazard_cp: coverpoint item.hazard {
            bins no_hazard = {0};
            bins hazard_detected = {1};
        }
        
        // 流水线停顿
        stall_cp: coverpoint item.stall {
            bins running = {0};
            bins stalled = {1};
        }
        
        // PC 停顿
        pc_stall_cp: coverpoint item.PC_stall {
            bins pc_advancing = {0};
            bins pc_stalled = {1};
        }
        
        // 交叉覆盖：冒险 × 停顿
        hazard_stall_cross: cross hazard_cp, stall_cp;
    endgroup
    
    // ===== 内存访问覆盖率 =====
    covergroup memory_access_cg;
        option.per_instance = 1;
        option.name = "memory_access_coverage";
        
        // 内存操作类型
        mem_op_cp: coverpoint {item.mem_read, item.mem_write} {
            bins idle  = {2'b00};
            bins read  = {2'b10};
            bins write = {2'b01};
            illegal_bins read_write = {2'b11};  // 不能同时读写
        }
    endgroup
    
    // ===== 构造函数 =====
    function new(string name = "cpu_coverage", uvm_component parent = null);
        super.new(name, parent);
        
        // 创建所有 covergroup
        funct3_alu_cg = new();
        funct3_branch_cg = new();
        funct3_jalr_cg = new();
        funct3_load_cg = new();
        funct3_store_cg = new();
        alu_op_cg = new();
        opcode_cg = new();
        regfile_cg = new();
        hazard_cg = new();
        memory_access_cg = new();
    endfunction
    
    // ===== Build Phase =====
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // 获取配置
        if (!uvm_config_db#(cpu_config)::get(this, "", "cpu_config", m_config)) begin
            `uvm_warning(get_name(), "Cannot get cpu_config, using default")
        end
    endfunction
    
    // ===== Write 函数（订阅者接口）=====
    virtual function void write(cpu_seq_item t);
        item = t;
        
        // 总是采样 opcode
        opcode_cg.sample();
        
        // 根据指令类型采样相应的 covergroup
        case (t.instruction[6:0])
            7'b0010011: begin  // OP_IMM (ADDI, SLTI, XORI, ORI, ANDI, SLLI, SRLI, SRAI)
                funct3_alu_cg.sample();
                alu_op_cg.sample();
            end
            
            7'b0110011: begin  // OP (ADD, SUB, SLT, SLTU, XOR, OR, AND, SLL, SRL, SRA, MUL, DIV, REM)
                funct3_alu_cg.sample();
                alu_op_cg.sample();
            end
            
            7'b1100011: begin  // BRANCH (BEQ, BNE, BLT, BGE, BLTU, BGEU)
                funct3_branch_cg.sample();
            end
            
            7'b1100111: begin  // JALR
                funct3_jalr_cg.sample();
            end
            
            7'b0000011: begin  // LOAD (LB, LH, LW, LBU, LHU)
                funct3_load_cg.sample();
                memory_access_cg.sample();
            end
            
            7'b0100011: begin  // STORE (SB, SH, SW)
                funct3_store_cg.sample();
                memory_access_cg.sample();
            end
            
            7'b0110111, 7'b0010111: begin  // LUI, AUIPC
                alu_op_cg.sample();
            end
            
            7'b1101111: begin  // JAL
                // JAL 不需要特殊采样
            end
        endcase
        
        // 如果有寄存器写回，采样寄存器覆盖率
        if (t.rd_we) begin
            regfile_cg.sample();
        end
        
        // 如果检测到冒险，采样冒险覆盖率
        if (t.hazard || t.stall) begin
            hazard_cg.sample();
        end
    endfunction
    
    // ===== Report Phase =====
    virtual function void report_phase(uvm_phase phase);
        real total_coverage;
        
        super.report_phase(phase);
        
        `uvm_info(get_name(), "============================================================", UVM_LOW)
        `uvm_info(get_name(), "                   Coverage Summary Report                  ", UVM_LOW)
        `uvm_info(get_name(), "============================================================", UVM_LOW)
        
        // Funct3 覆盖率
        `uvm_info(get_name(), "", UVM_LOW)
        `uvm_info(get_name(), "--- Funct3 Coverage (based on common.sv F3_XXX) ---", UVM_LOW)
        `uvm_info(get_name(), $sformatf("  ALU Funct3:      %.2f%%", funct3_alu_cg.get_coverage()), UVM_LOW)
        `uvm_info(get_name(), $sformatf("  Branch Funct3:   %.2f%%", funct3_branch_cg.get_coverage()), UVM_LOW)
        `uvm_info(get_name(), $sformatf("  JALR Funct3:     %.2f%%", funct3_jalr_cg.get_coverage()), UVM_LOW)
        `uvm_info(get_name(), $sformatf("  Load Funct3:     %.2f%%", funct3_load_cg.get_coverage()), UVM_LOW)
        `uvm_info(get_name(), $sformatf("  Store Funct3:    %.2f%%", funct3_store_cg.get_coverage()), UVM_LOW)
        
        // ALU 操作覆盖率
        `uvm_info(get_name(), "", UVM_LOW)
        `uvm_info(get_name(), "--- ALU Operation Coverage (based on alu_op_type) ---", UVM_LOW)
        `uvm_info(get_name(), $sformatf("  ALU Operations:  %.2f%%", alu_op_cg.get_coverage()), UVM_LOW)
        
        // Opcode 覆盖率
        `uvm_info(get_name(), "", UVM_LOW)
        `uvm_info(get_name(), "--- Instruction Type Coverage ---", UVM_LOW)
        `uvm_info(get_name(), $sformatf("  Opcode:          %.2f%%", opcode_cg.get_coverage()), UVM_LOW)
        
        // 寄存器文件覆盖率
        `uvm_info(get_name(), "", UVM_LOW)
        `uvm_info(get_name(), "--- Register File Coverage ---", UVM_LOW)
        `uvm_info(get_name(), $sformatf("  Register Write:  %.2f%%", regfile_cg.get_coverage()), UVM_LOW)
        
        // 冒险覆盖率
        `uvm_info(get_name(), "", UVM_LOW)
        `uvm_info(get_name(), "--- Pipeline Hazard Coverage ---", UVM_LOW)
        `uvm_info(get_name(), $sformatf("  Hazard:          %.2f%%", hazard_cg.get_coverage()), UVM_LOW)
        
        // 内存访问覆盖率
        `uvm_info(get_name(), "", UVM_LOW)
        `uvm_info(get_name(), "--- Memory Access Coverage ---", UVM_LOW)
        `uvm_info(get_name(), $sformatf("  Memory Access:   %.2f%%", memory_access_cg.get_coverage()), UVM_LOW)
        
        // 总体覆盖率（所有 covergroup 的平均值）
        total_coverage = (funct3_alu_cg.get_coverage() + 
                         funct3_branch_cg.get_coverage() + 
                         funct3_jalr_cg.get_coverage() + 
                         funct3_load_cg.get_coverage() + 
                         funct3_store_cg.get_coverage() + 
                         alu_op_cg.get_coverage() + 
                         opcode_cg.get_coverage() + 
                         regfile_cg.get_coverage() + 
                         hazard_cg.get_coverage() + 
                         memory_access_cg.get_coverage()) / 10.0;
        
        `uvm_info(get_name(), "", UVM_LOW)
        `uvm_info(get_name(), "============================================================", UVM_LOW)
        `uvm_info(get_name(), $sformatf("  TOTAL COVERAGE:  %.2f%%", total_coverage), UVM_LOW)
        `uvm_info(get_name(), "============================================================", UVM_LOW)
        
        // 如果覆盖率过低，给出警告
        if (total_coverage < 50.0) begin
            `uvm_warning(get_name(), $sformatf("Coverage is below 50%% (%.2f%%). Consider running more tests.", total_coverage))
        end else if (total_coverage < 80.0) begin
            `uvm_info(get_name(), $sformatf("Coverage is %.2f%%. Good progress, but more tests recommended.", total_coverage), UVM_MEDIUM)
        end else begin
            `uvm_info(get_name(), $sformatf("Excellent coverage (%.2f%%)!", total_coverage), UVM_LOW)
        end
    endfunction
    
endclass
