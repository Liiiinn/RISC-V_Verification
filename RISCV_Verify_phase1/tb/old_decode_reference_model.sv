import uvm_pkg::*;
`include "uvm_macros.svh"
`include "common.sv"
//还有bug
class id_ref_model extends uvm_component;
	uvm_analysis_imp #(id_seq_item,id_ref_model) analysis_imp;
	uvm_analysis_port #(id_seq_item) id_ref_ap;
	`uvm_component_utils(id_ref_model)

	function new(string name, uvm_component parent);
		super.new(name,parent);
		analysis_imp = new("analysis_imp", this);
		id_ref_ap = new("id_ref_ap", this);
	endfunction

	function void write(id_seq_item,item);
		id_seq_item exp = id_seq_item::type_id::create("exp");
		exp.instr = item.instr;
		decode_instr(exp); // decode;
		id_ref_ap.write(exp);
	endfunction 


	function void decode_instr(id_decode_tr tr);

		logic[6:0] opcode= tr.instr[6:0];
		logic[2:0] funct3 = tr.instr[14:12];
		logic[6:0] funct7 = tr.instr[31:25];

		
		tr.rs1 = tr.instr[19:15];
		tr.rs2 = tr.instr[24:20];
		tr.rd = tr.instr[11:7];

		case(opcode)
			7'b0110011: begin // R-type
				tr.reg_write = 1'b1;
				tr.encoding = R_TYPE;
				if(funct7 == 7'b0000000) begin
					case(funct3)
						3'b000: tr.alu_op = ALU_ADD;
						3'b001: tr.alu_op = ALU_SLL;
						3'b010: tr.alu_op = ALU_SLT;
						3'b011: tr.alu_op = ALU_SLTU;
						3'b100: tr.alu_op = ALU_XOR;
						3'b101: tr.alu_op = ALU_SRL;
						3'b110: tr.alu_op = ALU_OR;
						3'b111: tr.alu_op = ALU_AND;
					endcase
				end
				if(funct7 == 7'b0000001) begin
					case(funct3)
						3'b000: tr.alu_op = ALU_MUL;
						3'b001: tr.alu_op = ALU_MULH;
						3'b100: tr.alu_op = ALU_DIV;
						3'b101: tr.alu_op = ALU_DIVU;
						3'b110: tr.alu_op = ALU_REM;
						3'b111: tr.alu_op = ALU_REMU;
					endcase
				end
				if(funct7 == 7'b0100000) begin
					case(funct3)
						3'b000: tr.alu_op = ALU_SUB;
						3'b101: tr.alu_op = ALU_SRA;
						default : tr.alu_op = ALU_ADD;
					endcase
				end
			end
			7'b0010011: begin // I-type)
				tr.reg_write = 1'b1;
				tr.encoding = I_TYPE;
				tr.alu_src = 1'b1;
				case(funct3)
					3'b000:tr.alu_op = ALU_ADD;
					3'b011:tr.alu_op = ALU_SLTU;
					3'b010:tr.alu_op = ALU_SLT;
					3'b100:tr.alu_op = ALU_XOR;
					3'b110:tr.alu_op = ALU_OR;
					3'b111:tr.alu_op = ALU_AND;
					3'b001:tr.alu_op = (funct7==7'b0000000)?ALU_SLL:ALU_ADD;
					3'b101:tr.alu_op = (funct7==7'b0100000)?ALU_SRA:((funct7==7'b0000000)?ALU_SRL:ALU_ADD);
					//default : tr.alu_op = ALU_ADD;
				endcase
			end

			7'b0000011:begin//load-type
				tr.encoding  = I_TYPE;
				tr.reg_write = 1'b1;
				tr.alu_src   = 1'b1;
				tr.mem_read  = 1'b1;
				tr.mem_to_reg= 1'b1;
				case(funct3)
					3'b000:tr.alu_op = ALU_ADD;
					3'b001:tr.alu_op = ALU_ADD;
					3'b010:tr.alu_op = ALU_ADD;
					3'b100:tr.alu_op = ALU_ADD;
					3'b101:tr.alu_op = ALU_ADD;
					// default : tr.alu_op = ALU_ADD;
				endcase
			end

			7'b1100011:begin // branch
				tr.encoding = B_TYPE;
				tr.is_branch = 1'b1;
				case(funct3)
					3'b000:tr.alu_op = ALU_SUB;
					3'b001:tr.alu_op = ALU_SUB;
					3'b010:tr.alu_op = ALU_SUB;
					3'b011:tr.alu_op = ALU_SUB;
					3'b100:tr.alu_op = ALU_SUB;
					3'b101:tr.alu_op = ALU_SUB;
					//default : tr.alu_op = ALU_SUB; 需要default吗？
				endcase
			end
			7'b1101111:begin //J-type
				tr.alu_op = ALU_ADD;
				tr.encoding = J_TYPE;
				tr.is_jump = 1'b1;
				tr.reg_write = 1'b1;
			end
			7'b1100111:begin //I-type jalr
				tr.alu_op = ALU_ADD;
				tr.encoding = I_TYPE;
				tr.is_jumpr = 1'b1;
				tr.reg_write = 1'b1;
			end
			7'b0100011:begin //S-type store
				tr.encoding = S_TYPE;
				tr.mem_write = 1'b1;
				tr.alu_src = 1'b1;
				case(funct3)
					3'b000:tr.alu_op = ALU_ADD;
					3'b001:tr.alu_op = ALU_ADD;
					3'b010:tr.alu_op = ALU_ADD;
				endcase
			end
			7'b0110111:begin //U-type lui
				tr.alu_op  = ALU_PASS;
				tr.encoding = U_TYPE;
				tr.reg_write = 1'b1;
				tr.alu_src = 1'b1;
				tr.is_lui = 1'b1;
			end

			7'b0010111:begin //U-type auipc'
				tr.alu_op = ALU_ADD;
				tr.encoding = U_TYPE;
				tr.reg_write = 1'b1;
				tr.alu_src = 1'b1;
				tr.is_auipc = 1'b1;
			end
		
		endcase

		return ctrl;

	endfunction : decode_instruction

endclass : id_ref_model