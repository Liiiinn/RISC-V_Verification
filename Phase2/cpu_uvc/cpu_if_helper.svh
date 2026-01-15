// cpu_if_helper.svh - CPU接口辅助函数集
// 提供指令解析、寄存器访问、调试输出等功能

`ifndef CPU_IF_HELPER_SVH
`define CPU_IF_HELPER_SVH

// ============================================================================
// 辅助函数 - 用于UVM组件和testbench访问DUT状态
// ============================================================================

// 获取指定寄存器的值
function logic [31:0] cpu_get_register(virtual cpu_if vif, input int reg_num);
    if (reg_num >= 0 && reg_num < 32) begin
        return vif.debug_reg[reg_num];
    end else begin
        return 32'h0;
    end
endfunction

// 获取指定内存地址的值
function logic [31:0] cpu_get_memory(virtual cpu_if vif, input logic [31:0] addr);
    logic [31:0] word_addr;
    word_addr = addr >> 2;  // 转换为字地址
    if (word_addr < 1024) begin
        return vif.ram_debug[word_addr];
    end else begin
        return 32'h0;
    end
endfunction

// ============================================================================
// 指令类型检测函数集
// ============================================================================

// 检查是否为LOAD指令
function bit cpu_is_load(input logic [31:0] instruction);
    logic [6:0] opcode = instruction[6:0];
    return (opcode == 7'b0000011); // LOAD opcode
endfunction

// 检查是否为STORE指令
function bit cpu_is_store(input logic [31:0] instruction);
    logic [6:0] opcode = instruction[6:0];
    return (opcode == 7'b0100011); // STORE opcode
endfunction

// 检查是否为BRANCH指令
function bit cpu_is_branch(input logic [31:0] instruction);
    logic [6:0] opcode = instruction[6:0];
    return (opcode == 7'b1100011); // BRANCH opcode
endfunction

// 检查是否为JAL指令
function bit cpu_is_jal(input logic [31:0] instruction);
    logic [6:0] opcode = instruction[6:0];
    return (opcode == 7'b1101111); // JAL opcode
endfunction

// 检查是否为JALR指令
function bit cpu_is_jalr(input logic [31:0] instruction);
    logic [6:0] opcode = instruction[6:0];
    return (opcode == 7'b1100111); // JALR opcode
endfunction

// 检查是否为算术指令（R-type或I-type ALU）
function bit cpu_is_arithmetic(input logic [31:0] instruction);
    logic [6:0] opcode = instruction[6:0];
    return (opcode == 7'b0110011 || opcode == 7'b0010011);
endfunction

// 检查是否为跳转/分支指令
function bit cpu_is_branch_or_jump(input logic [31:0] instruction);
    return cpu_is_branch(instruction) || cpu_is_jal(instruction) || cpu_is_jalr(instruction);
endfunction

// ============================================================================
// 指令反汇编函数
// ============================================================================

// 获取指令的助记符（用于日志和调试）
function string cpu_get_mnemonic(input logic [31:0] instruction);
    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [6:0] funct7;
    
    opcode = instruction[6:0];
    funct3 = instruction[14:12];
    funct7 = instruction[31:25];
    
    case (opcode)
        // R-type: ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND
        7'b0110011: begin
            case ({funct7, funct3})
                10'b0000000_000: return "add";
                10'b0100000_000: return "sub";
                10'b0000000_001: return "sll";
                10'b0000000_010: return "slt";
                10'b0000000_011: return "sltu";
                10'b0000000_100: return "xor";
                10'b0000000_101: return "srl";
                10'b0100000_101: return "sra";
                10'b0000000_110: return "or";
                10'b0000000_111: return "and";
                default: return "r-type";
            endcase
        end
        
        // I-type ALU: ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI
        7'b0010011: begin
            case (funct3)
                3'b000: return "addi";
                3'b010: return "slti";
                3'b011: return "sltiu";
                3'b100: return "xori";
                3'b110: return "ori";
                3'b111: return "andi";
                3'b001: return "slli";
                3'b101: return (funct7[5]) ? "srai" : "srli";
                default: return "i-alu";
            endcase
        end
        
        // LOAD: LB, LH, LW, LBU, LHU
        7'b0000011: begin
            case (funct3)
                3'b000: return "lb";
                3'b001: return "lh";
                3'b010: return "lw";
                3'b100: return "lbu";
                3'b101: return "lhu";
                default: return "load";
            endcase
        end
        
        // STORE: SB, SH, SW
        7'b0100011: begin
            case (funct3)
                3'b000: return "sb";
                3'b001: return "sh";
                3'b010: return "sw";
                default: return "store";
            endcase
        end
        
        // BRANCH: BEQ, BNE, BLT, BGE, BLTU, BGEU
        7'b1100011: begin
            case (funct3)
                3'b000: return "beq";
                3'b001: return "bne";
                3'b100: return "blt";
                3'b101: return "bge";
                3'b110: return "bltu";
                3'b111: return "bgeu";
                default: return "branch";
            endcase
        end
        
        7'b1101111: return "jal";
        7'b1100111: return "jalr";
        7'b0110111: return "lui";
        7'b0010111: return "auipc";
        
        // SYSTEM/CSR
        7'b1110011: begin
            if (instruction == 32'h00100073) return "ebreak";
            else if (instruction == 32'h00000073) return "ecall";
            else return "system";
        end
        
        default: return "unknown";
    endcase
endfunction

// 获取完整的指令信息（含操作数解析，可选）
function string cpu_get_instr_info(input logic [31:0] instruction);
    string mnem = cpu_get_mnemonic(instruction);
    logic [4:0] rd, rs1, rs2;
    logic [11:0] imm_i;
    
    rd = instruction[11:7];
    rs1 = instruction[19:15];
    rs2 = instruction[24:20];
    imm_i = instruction[31:20];
    
    case (instruction[6:0])
        7'b0110011: // R-type
            return $sformatf("%s x%0d, x%0d, x%0d", mnem, rd, rs1, rs2);
        7'b0010011: // I-type
            return $sformatf("%s x%0d, x%0d, %0d", mnem, rd, rs1, $signed(imm_i));
        7'b0000011, 7'b0100011: // LOAD/STORE
            return $sformatf("%s x%0d, [x%0d + %0d]", mnem, rd, rs1, $signed(imm_i));
        default:
            return mnem;
    endcase
endfunction

// ============================================================================
// 调试输出函数
// ============================================================================

// 打印单条指令执行状态
task cpu_print_instruction(
    virtual cpu_if vif,
    input logic [31:0] pc,
    input logic [31:0] instruction
);
    string instr_mnem = cpu_get_mnemonic(instruction);
    $display("[%0t] PC=0x%08h INSTR=0x%08h (%s)", 
             $time, pc, instruction, instr_mnem);
endtask

// 打印当前执行状态（详细版）
task cpu_print_execution_state(virtual cpu_if vif);
    string instr_mnem = cpu_get_mnemonic(vif.debug_instruction);
    
    $display("[%0t] Cycle=%0d PC=0x%08h INSTR=0x%08h (%s)", 
             $time, vif.cycle_count, vif.debug_pc, vif.debug_instruction, instr_mnem);
    
    // 打印寄存器写回
    if (vif.debug_rd_we && vif.debug_rd_addr != 0) begin
        $display("       └─ x%0d <= 0x%08h", vif.debug_rd_addr, vif.debug_rd_data);
    end
    
    // 打印内存读
    if (vif.debug_mem_read) begin
        $display("       └─ MEM[0x%08h] => 0x%08h (read)", vif.debug_mem_addr, vif.debug_mem_rdata);
    end
    
    // 打印内存写
    if (vif.debug_mem_write) begin
        $display("       └─ MEM[0x%08h] <= 0x%08h (write)", vif.debug_mem_addr, vif.debug_mem_wdata);
    end
    
    // 打印分支
    if (vif.debug_is_bj) begin
        $display("       └─ Branch/Jump: next PC = 0x%08h", vif.debug_next_pc);
    end
    
    // 打印流水线状态
    if (vif.debug_stall) begin
        $display("       └─ STALL");
    end
    if (vif.debug_flush) begin
        $display("       └─ FLUSH");
    end
    if (vif.debug_hazard) begin
        $display("       └─ HAZARD");
    end
endtask

// 打印统计信息
task cpu_print_statistics(virtual cpu_if vif);
    real cpi;
    cpi = (vif.instr_count > 0) ? (real'(vif.cycle_count) / real'(vif.instr_count)) : 0.0;
    
    $display("\n========== Execution Statistics ==========");
    $display("Total Cycles:       %0d", vif.cycle_count);
    $display("Total Instructions: %0d", vif.instr_count);
    $display("Branches:           %0d", vif.branch_count);
    $display("Loads:              %0d", vif.load_count);
    $display("Stores:             %0d", vif.store_count);
    $display("Exceptions:         %0d", vif.exception_count);
    $display("CPI:                %.2f", cpi);
    $display("==========================================\n");
endtask

// 打印寄存器值（用于调试）
task cpu_print_registers(virtual cpu_if vif);
    $display("\n========== Register State ==========");
    for (int i = 0; i < 32; i++) begin
        if (vif.debug_reg[i] != 0) begin
            $display("x%0d  = 0x%08h", i, vif.debug_reg[i]);
        end
    end
    $display("====================================\n");
endtask

// 打印内存区域（用于调试）
task cpu_print_memory(
    virtual cpu_if vif,
    input logic [31:0] start_addr,
    input logic [31:0] end_addr
);
    logic [31:0] addr;
    
    $display("\n========== Memory [0x%08h - 0x%08h] ==========", start_addr, end_addr);
    
    for (addr = start_addr; addr <= end_addr; addr += 4) begin
        logic [31:0] data = cpu_get_memory(vif, addr);
        if (data != 0) begin
            $display("[0x%08h] = 0x%08h", addr, data);
        end
    end
    $display("==========================================\n");
endtask

`endif // CPU_IF_HELPER_SVH
