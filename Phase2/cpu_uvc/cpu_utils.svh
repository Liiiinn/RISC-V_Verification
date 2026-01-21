// cpu_utils.svh - Utility functions for CPU verification (package-level)
// These functions can be called from anywhere in the UVC package

`ifndef CPU_UTILS_SVH
`define CPU_UTILS_SVH

// Get instruction mnemonic from instruction encoding
function automatic string cpu_get_mnemonic(input logic [31:0] instruction);
    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [6:0] funct7;
    
    opcode = instruction[6:0];
    funct3 = instruction[14:12];
    funct7 = instruction[31:25];
    
    case (opcode)
        7'b0110011: begin // R-type
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
                10'b0000001_000: return "mul";
                10'b0000001_001: return "mulh";
                10'b0000001_010: return "mulhsu";
                10'b0000001_011: return "mulhu";
                10'b0000001_100: return "div";
                10'b0000001_101: return "divu";
                10'b0000001_110: return "rem";
                10'b0000001_111: return "remu";
                default: return "r-unknown";
            endcase
        end
        
        7'b0010011: begin // I-type
            case (funct3)
                3'b000: return "addi";
                3'b010: return "slti";
                3'b011: return "sltiu";
                3'b100: return "xori";
                3'b110: return "ori";
                3'b111: return "andi";
                3'b001: return "slli";
                3'b101: return (funct7[5]) ? "srai" : "srli";
                default: return "i-unknown";
            endcase
        end
        
        7'b0000011: begin // LOAD
            case (funct3)
                3'b000: return "lb";
                3'b001: return "lh";
                3'b010: return "lw";
                3'b100: return "lbu";
                3'b101: return "lhu";
                default: return "load-unknown";
            endcase
        end
        
        7'b0100011: begin // STORE
            case (funct3)
                3'b000: return "sb";
                3'b001: return "sh";
                3'b010: return "sw";
                default: return "store-unknown";
            endcase
        end
        
        7'b1100011: begin // BRANCH
            case (funct3)
                3'b000: return "beq";
                3'b001: return "bne";
                3'b100: return "blt";
                3'b101: return "bge";
                3'b110: return "bltu";
                3'b111: return "bgeu";
                default: return "branch-unknown";
            endcase
        end
        
        7'b1101111: return "jal";     // JAL
        7'b1100111: return "jalr";    // JALR
        7'b0110111: return "lui";     // LUI
        7'b0010111: return "auipc";   // AUIPC
        7'b0001111: return "fence";   // FENCE
        7'b1110011: begin             // SYSTEM
            if (instruction[31:7] == 0) begin
                case (funct3)
                    3'b000: return (instruction[20]) ? "ebreak" : "ecall";
                    default: return "system-unknown";
                endcase
            end else begin
                case (funct3)
                    3'b001: return "csrrw";
                    3'b010: return "csrrs";
                    3'b011: return "csrrc";
                    3'b101: return "csrrwi";
                    3'b110: return "csrrsi";
                    3'b111: return "csrrci";
                    default: return "csr-unknown";
                endcase
            end
        end
        
        default: return "unknown";
    endcase
endfunction

`endif // CPU_UTILS_SVH
