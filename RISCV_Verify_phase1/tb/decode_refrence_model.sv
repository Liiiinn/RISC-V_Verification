import uvm_pkg::*;
`include "uvm_macros.svh"
`include "common.sv"

class id_ref_model extends uvm_component;
 	uvm_analysis_imp #(id_seq_item,id_ref_model) analysis_imp;
 	uvm_analysis_port #(id_out_seq_item) id_ref_ap;
 	`uvm_component_utils(id_ref_model)

	function new(string name, uvm_component parent);
	  	super.new(name,parent);
	  	analysis_imp = new("analysis_imp", this);
	  	id_ref_ap = new("id_ref_ap", this);
	endfunction

	function void write(id_seq_item item);
	  	id_out_seq_item exp = id_out_seq_item::type_id::create("exp");
	  	// exp.instr = item.instr;
	  	decode_instr(exp); // decode;
	  	id_ref_ap.write(exp);
	endfunction 

	function void decode_instr(id_out_seq_item exp, id_seq_item item); // Input a handle so exp can be modified
	  	instruction_type instr = item.instruction;
		
		exp = '0; // default all fields to zero
		// 待填写：
    	// exp.read_data1 = 
    	// exp.read_data2 = 
    	// exp.debug_reg = 

		// Filling control_signals
		exp.control_signals.funct3 = instr.funct3;
		exp.control_signals.rs1_id = instr.rs1;
		exp.control_signals.rs2_id = instr.rs2;

		case (instr.opcode)
            OP_ALU: begin
                exp.control_signals.encoding = R_TYPE;
                exp.control_signals.reg_write = 1'b1; 
            end
            OP_LOAD: begin
                exp.control_signals.encoding = I_TYPE;
                exp.control_signals.reg_write = 1'b1;
                exp.control_signals.alu_src = 1'b1;                
                exp.control_signals.mem_read = 1'b1;                
                exp.control_signals.mem_to_reg = 1'b1;                 
            end
            OP_ALUI: begin
                exp.control_signals.encoding = I_TYPE;
                exp.control_signals.reg_write = 1'b1;
                exp.control_signals.alu_src = 1'b1;              
            end
            OP_STORE: begin
                exp.control_signals.encoding = S_TYPE;
                exp.control_signals.alu_src = 1'b1;
                exp.control_signals.mem_write = 1'b1;                  
            end
            OP_BRANCH: begin
                exp.control_signals.encoding = B_TYPE;
                exp.control_signals.is_branch = 1'b1;            
            end
            OP_JAL: begin
                exp.control_signals.encoding = J_TYPE;
                exp.control_signals.reg_write = 1'b1;
                exp.control_signals.is_jump = 1'b1;            
            end
            OP_JALR: begin
                exp.control_signals.encoding = I_TYPE;
                exp.control_signals.reg_write = 1'b1;
                exp.control_signals.is_jumpr = 1'b1;            
            end
            OP_AUIPC: begin
                exp.control_signals.encoding = U_TYPE;
                exp.control_signals.reg_write = 1'b1;
                exp.control_signals.alu_src = 1'b1;
                exp.control_signals.is_auipc = 1'b1;
	        end
            OP_LUI: begin
                exp.control_signals.encoding = U_TYPE;
                exp.control_signals.reg_write = 1'b1;
                exp.control_signals.alu_src = 1'b1;                            
                exp.control_signals.is_lui = 1'b1;                            
            end
        endcase

		// ============== R-type & Shift I-type (17 bits) ==============
		case({instr.funct7, instr.funct3, instr.opcode})
			ADD_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_ADD;
			end
			SUB_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SUB;
			end
			AND_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_AND;
			end
			OR_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_OR;
			end
			XOR_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_XOR;
			end
			SLL_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SLL;
			end
			SRL_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SRL;
			end
			SRA_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SRA;
			end
			SLT_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SLT;
			end
			SLTU_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SLTU;
			end
			MUL_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_MUL;
				exp.control_signals.is_mul = 1'b1; 
			end
			DIV_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_DIV;
				exp.control_signals.is_mul = 1'b1;
			end
			DIVU_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_DIVU;
				exp.control_signals.is_mul = 1'b1;
			end
			REM_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_REM;
				exp.control_signals.is_mul = 1'b1;
			end
			REMU_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_REMU;
				exp.control_signals.is_mul = 1'b1;
			end
			MULH_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_MULH;
				exp.control_signals.is_mul = 1'b1;
			end
			SLLI_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SLL;
			end
			SRLI_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SRL;
			end
			SRAI_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SRA;
			end
		endcase

		// ============== I-type (普通算术逻辑) & JALR (10 bits) ==============
		case({instr.funct3, instr.opcode})
			ADDI_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_ADD;
			end
			ANDI_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_AND;
			end
			ORI_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_OR;
			end
			XORI_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_XOR;
			end
			SLTI_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SLT;
			end
			SLTIU_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SLTU;
			end
			// ============== Load / Store (10 bits: ==============
			LW_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_ADD; // address = base + offset
			end
			LB_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_ADD; 
			end
			LH_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_ADD; 
			end
			LBU_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_ADD; 
			end
			LHU_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_ADD; 
			end
			SW_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_ADD;
			end
			SB_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_ADD;
			end
			SH_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_ADD;
			end
			// ============== Branch (10 bits) ==============
			BEQ_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SUB; // 用减法比较 zero
			end
			BNE_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SUB; 
			end
			BLT_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SUB; 
			end
			BGE_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SUB; 
			end
			BLTU_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SUB; 
			end
			BGEU_INSTRUCTION: begin
				exp.control_signals.alu_op = ALU_SUB; 
			end
			// ============== JALR (10 bits) ==============
			JALR_INSTRUCTION: begin
				// rs1 + offset -> 也可视为 ALU_ADD
				exp.control_signals.alu_op = ALU_ADD;
			end
		endcase

		case(instr.opcode)
			// ============== Jump / U-type except JALR ==============
			JAL_INSTRUCTION: begin
				// PC + offset，常映射为 ALU_ADD（不过通常直接在取PC处加）
				exp.control_signals.alu_op = ALU_ADD; 
			end
			LUI_INSTRUCTION: begin
				// LUI: rd = imm << 12; 可在 ALU 中做 ALU_PASS_IMM 或简单用 ALU_PASS
				exp.control_signals.alu_op = ALU_PASS; 
			end
			AUIPC_INSTRUCTION: begin
				// AUIPC: rd = PC + (imm << 12)，可当成 ALU_ADD
				exp.control_signals.alu_op = ALU_ADD;
			end
		endcase
		
    	exp.pc_out = item.pc;
	  	exp.reg_rd_id = instr.rd;
    	exp.branch_out = item.branch_in;
    	exp.immediate_data = immediate_extension(instr, exp.control_signals.encoding);

	  	// case(opcode)
	  	//   	7'b0110011: begin // R-type
	  	//   	  	exp.reg_write = 1'b1;
	  	//   	  	if(funct7 == 7'b0000000) begin
	  	//   	  	  	case(funct3)
	  	//   	  	  		3'b000: alu_op = ALU_ADD;
	  	//   	  	  		3'b001: alu_op = ALU_SLL;
	  	//   	  	  		3'b010: alu_op = ALU_SLT;
	  	//   	  	  		3'b011: alu_op = ALU_SLTU;
	  	//   	  	  		3'b100: alu_op = ALU_XOR;
	  	//   	  	  		3'b101: alu_op = ALU_SRL;
	  	//   	  	  		3'b110: alu_op = ALU_OR;
	  	//   	  	  		3'b111: alu_op = ALU_AND;
	  	//   	  	  	endcase
	  	//   	  	end
	  	//   	  	if(funct7 == 7'b0000001) begin
	  	//   	  	  	case(funct3)
	  	//   	  	  		3'b000: alu_op = ALU_MUL;
	  	//   	  	  		3'b001: alu_op = ALU_MULH;
	  	//   	  	  		3'b010: alu_op = ALU_MULHSU;
	  	//   	  	  		3'b011: alu_op = ALU_MULHU;
	  	//   	  	  		3'b100: alu_op = ALU_DIV;
	  	//   	  	  		3'b101: alu_op = ALU_DIVU;
	  	//   	  	  		3'b110: alu_op = ALU_REM;
	  	//   	  	  		3'b111: alu_op = ALU_REMU;
	  	//   	  	  	endcase
	  	//   	  	end
	  	//   	  	if(funct7 == 7'b0100000) begin
	  	//   	  	  	case(funct3)
	  	//   	  	  		3'b000: alu_op = ALU_SUB;
	  	//   	  	  		3'b101: alu_op = ALU_SRA;
	  	//   	  	  		default : alu_op = ALU_ADD;
	  	//   	  	  	endcase
	  	//   	  	end
	  	//   	end

	  	//   	7'b0010011: begin // I-type)
	  	//   	 	case(funct3)
	  	//   	 		3'b000:alu_op = ALU_ADDI;
	  	//   	 		3'b011:alu_op = ALU_SLTIU;
	  	//   	 		3'b010:alu_op = ALU_SLTI;
	  	//   	 		3'b100:alu_op = ALU_XORI;
	  	//   	 		3'b110:alu_op = ALU_ORI;
	  	//   	 		3'b111:alu_op = ALU_ANDI;
	  	//   	 		3'b001:alu_op = (funct7==7'b0000000)?ALU_SLLI:ALU_ADD;
	  	//   	 		3'b101:alu_op = (funct7==7'b0100000)?ALU_SRAI:(funct7==7'b0000000)?ALU_SRLI:ALU_ADD;
	  	//   	 		default : alu_op = ALU_ADD;
	  	//   		endcase
	  	//   	end

	  	//   	7'b0000011:begin//load-type
	  	//    		case(funct3)
	  	//    			3'b000:alu_op = ALU_ADD;
	  	//    			3'b001:alu_op = ALU_ADD;
	  	//    			3'b010:alu_op = ALU_ADD;
	  	//    			3'b100:alu_op = ALU_ADD;
	  	//    			3'b101:alu_op = ALU_ADD;
	  	//    			default : alu_op = ALU_ADD;
	  	//    		endcase
	  	//   	end

	  	//   	7'b1100011:begin // branch
	  	//   		case(funct3)
	  	//       		3'b000:alu_op = ALU_SUB;
	  	//       		3'b001:alu_op = ALU_SUB;
	  	//       		3'b010:alu_op = ALU_SUB;
	  	//       		3'b011:alu_op = ALU_SUB;
	  	//       		3'b100:alu_op = ALU_SUB;
	  	//       		3'b101:alu_op = ALU_SUB;
	  	//       		default : alu_op = ALU_ADD;
	  	//   		endcase
	  	// 	end

	  	// 	7'b1101111:begin //J


	  	// 	end
		// endcase
	endfunction : decode_instr

endclass : id_ref_model
