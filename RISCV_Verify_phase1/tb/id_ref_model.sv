import uvm_pkg::*;
`include "uvm_macros.svh"
`include "common.sv"

class id_ref_model extends uvm_component;
	uvm_analysis_imp #(id_seq_item,id_ref_model) analysis_imp;
	uvm_analysis_port #(id_seq_item) id_ref_ap;
	`uvm_component_utils(id_ref_model)

	function new(string name, uvm_component parent);
		super.new(name,parent);
		analysis_imp = new("analysis_imp", this);
		id_ref_ap = new("id_ref_ap", this);
	endfunction

	function void write(id_seq_item item);
	  	id_out_seq_item exp = id_out_seq_item::type_id::create("exp");
	  	// exp.instr = item.instr;
	  	decode_instr(exp, item); // decode;
	  	id_ref_ap.write(exp);
	endfunction 

	// 可能的bug：exp还有遗漏未赋值的字段
	function void decode_instr(id_out_seq_item exp, id_seq_item item); // Input a handle so exp can be modified
		instruction_type tr = item.instruction;
		
		exp = '0; // default all fields to zero
		// 待填写：
    	// exp.read_data1 = 
    	// exp.read_data2 = 
		// exp.immediate_data =
		// exp.pc_out = 
		// exp.branch_out =
		// exp.reg_rd_id = 

		// Filling control_signals
		exp.control_signals.funct3 = tr.funct3;
		exp.control_signals.rs1_id = tr.rs1;
		exp.control_signals.rs2_id = tr.rs2;

		logic[6:0] opcode = tr.opcode;
		logic[2:0] funct3 = tr.funct3;
		logic[6:0] funct7 = tr.funct7;	

		case(opcode)
			7'b0110011: begin // R-type
				exp.control_signals.reg_write = 1'b1;
				exp.control_signals.encoding = R_TYPE;
				if(funct7 == 7'b0000000) begin
					case(funct3)
						3'b000: exp.control_signals.alu_op = ALU_ADD;
						3'b001: exp.control_signals.alu_op = ALU_SLL;
						3'b010: exp.control_signals.alu_op = ALU_SLT;
						3'b011: exp.control_signals.alu_op = ALU_SLTU;
						3'b100: exp.control_signals.alu_op = ALU_XOR;
						3'b101: exp.control_signals.alu_op = ALU_SRL;
						3'b110: exp.control_signals.alu_op = ALU_OR;
						3'b111: exp.control_signals.alu_op = ALU_AND;
					endcase
				end
				if(funct7 == 7'b0000001) begin
					case(funct3)
						3'b000: exp.control_signals.alu_op = ALU_MUL;
						3'b001: exp.control_signals.alu_op = ALU_MULH;
						3'b100: exp.control_signals.alu_op = ALU_DIV;
						3'b101: exp.control_signals.alu_op = ALU_DIVU;
						3'b110: exp.control_signals.alu_op = ALU_REM;
						3'b111: exp.control_signals.alu_op = ALU_REMU;
					endcase
				end
				if(funct7 == 7'b0100000) begin
					case(funct3)
						3'b000: exp.control_signals.alu_op = ALU_SUB;
						3'b101: exp.control_signals.alu_op = ALU_SRA;
						default : exp.control_signals.alu_op = ALU_ADD;
					endcase
				end
			end
			7'b0010011: begin // I-type)
				exp.control_signals.reg_write = 1'b1;
				exp.control_signals.encoding = I_TYPE;
				exp.control_signals.alu_src = 1'b1;
				case(funct3)
					3'b000:exp.control_signals.alu_op = ALU_ADD;
					3'b011:exp.control_signals.alu_op = ALU_SLTU;
					3'b010:exp.control_signals.alu_op = ALU_SLT;
					3'b100:exp.control_signals.alu_op = ALU_XOR;
					3'b110:exp.control_signals.alu_op = ALU_OR;
					3'b111:exp.control_signals.alu_op = ALU_AND;
					3'b001:exp.control_signals.alu_op = (funct7==7'b0000000)?ALU_SLL:ALU_ADD;
					3'b101:exp.control_signals.alu_op = (funct7==7'b0100000)?ALU_SRA:((funct7==7'b0000000)?ALU_SRL:ALU_ADD);
					//default : exp.control_signals.alu_op = ALU_ADD;
				endcase
			end

			7'b0000011:begin//load-type
				exp.control_signals.encoding  = I_TYPE;
				exp.control_signals.reg_write = 1'b1;
				exp.control_signals.alu_src   = 1'b1;
				exp.control_signals.mem_read  = 1'b1;
				exp.control_signals.mem_to_reg= 1'b1;
				case(funct3)
					3'b000:exp.control_signals.alu_op = ALU_ADD;
					3'b001:exp.control_signals.alu_op = ALU_ADD;
					3'b010:exp.control_signals.alu_op = ALU_ADD;
					3'b100:exp.control_signals.alu_op = ALU_ADD;
					3'b101:exp.control_signals.alu_op = ALU_ADD;
					// default : exp.control_signals.alu_op = ALU_ADD;
				endcase
			end

			7'b1100011:begin // branch
				exp.control_signals.encoding = B_TYPE;
				exp.control_signals.is_branch = 1'b1;
				case(funct3)
					3'b000:exp.control_signals.alu_op = ALU_SUB;
					3'b001:exp.control_signals.alu_op = ALU_SUB;
					3'b010:exp.control_signals.alu_op = ALU_SUB;
					3'b011:exp.control_signals.alu_op = ALU_SUB;
					3'b100:exp.control_signals.alu_op = ALU_SUB;
					3'b101:exp.control_signals.alu_op = ALU_SUB;
					//default : exp.control_signals.alu_op = ALU_SUB; 需要default吗？
				endcase
			end
			7'b1101111:begin //J-type
				exp.control_signals.alu_op = ALU_ADD;
				exp.control_signals.encoding = J_TYPE;
				exp.control_signals.is_jump = 1'b1;
				exp.control_signals.reg_write = 1'b1;
			end
			7'b1100111:begin //I-type jalr
				exp.control_signals.alu_op = ALU_ADD;
				exp.control_signals.encoding = I_TYPE;
				exp.control_signals.is_jumpr = 1'b1;
				exp.control_signals.reg_write = 1'b1;
			end
			7'b0100011:begin //S-type store
				exp.control_signals.encoding = S_TYPE;
				exp.control_signals.mem_write = 1'b1;
				exp.control_signals.alu_src = 1'b1;
				case(funct3)
					3'b000:exp.control_signals.alu_op = ALU_ADD;
					3'b001:exp.control_signals.alu_op = ALU_ADD;
					3'b010:exp.control_signals.alu_op = ALU_ADD;
				endcase
			end
			7'b0110111:begin //U-type lui
				exp.control_signals.alu_op  = ALU_PASS;
				exp.control_signals.encoding = U_TYPE;
				exp.control_signals.reg_write = 1'b1;
				exp.control_signals.alu_src = 1'b1;
				exp.control_signals.is_lui = 1'b1;
			end

			7'b0010111:begin //U-type auipc'
				exp.control_signals.alu_op = ALU_ADD;
				exp.control_signals.encoding = U_TYPE;
				exp.control_signals.reg_write = 1'b1;
				exp.control_signals.alu_src = 1'b1;
				exp.control_signals.is_auipc = 1'b1;
			end
		endcase
	endfunction : decode_instr

endclass : id_ref_model