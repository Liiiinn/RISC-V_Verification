# Makefile for decode stage UVM verification
# 
# Usage:
#   make compile     - Compile the design and testbench
#   make sim         - Run simulation with default test
#   make test TEST=<test_name> - Run specific test
#   make clean       - Clean build files
#   make all         - Compile and run default test

# Simulator (change as needed: vcs, questa, xcelium)
SIM ?= questa

# Directories
SRC_DIR = ../RISC-V
TB_DIR = .
BUILD_DIR = work

# Source files
DESIGN_FILES = \
	$(SRC_DIR)/common.sv \
	$(SRC_DIR)/register_file.sv \
	$(SRC_DIR)/control_unit.sv \
	decode_stage.sv

TESTBENCH_FILES = \
	decode_pkg.sv \
	decode_interface.sv \
	decode_tb.sv

# Default test
TEST ?= decode_random_test

# Compilation flags
COMPILE_FLAGS = +incdir+$(SRC_DIR) +incdir+$(TB_DIR) -timescale=1ns/1ps

# Simulation flags
SIM_FLAGS = +UVM_TESTNAME=$(TEST) +UVM_VERBOSITY=UVM_MEDIUM

# Questa specific settings
ifeq ($(SIM), questa)
    COMP_CMD = vlog -work $(BUILD_DIR) $(COMPILE_FLAGS)
    SIM_CMD = vsim -work $(BUILD_DIR) $(SIM_FLAGS) -do "run -all; quit -f"
    LIB_CMD = vlib $(BUILD_DIR)
    MAP_CMD = vmap work $(BUILD_DIR)
endif

# VCS specific settings
ifeq ($(SIM), vcs)
    COMP_CMD = vcs $(COMPILE_FLAGS) -sverilog +v2k -Mupdate -debug_all
    SIM_CMD = ./simv $(SIM_FLAGS) +vcs+lic+wait
    LIB_CMD = 
    MAP_CMD = 
endif

# Xcelium specific settings
ifeq ($(SIM), xcelium)
    COMP_CMD = xmvlog -work $(BUILD_DIR) $(COMPILE_FLAGS) -sv
    SIM_CMD = xmsim -work $(BUILD_DIR) $(SIM_FLAGS)
    LIB_CMD = xmvlib $(BUILD_DIR)
    MAP_CMD = 
endif

.PHONY: all compile sim test clean help

all: compile sim

# Create work library
$(BUILD_DIR):
	$(LIB_CMD)
	$(MAP_CMD)

# Compile design and testbench
compile: $(BUILD_DIR)
	@echo "Compiling design files..."
	$(COMP_CMD) $(DESIGN_FILES)
	@echo "Compiling testbench files..."
	$(COMP_CMD) $(TESTBENCH_FILES)
	@echo "Compilation completed."

# Run simulation
sim: compile
	@echo "Running simulation with test: $(TEST)"
	$(SIM_CMD) decode_tb
	@echo "Simulation completed."

# Run specific test
test:
	@echo "Running test: $(TEST)"
	$(MAKE) sim TEST=$(TEST)

# Available tests
tests:
	@echo "Available tests:"
	@echo "  decode_random_test      - Random instruction test"
	@echo "  decode_rtype_test       - R-type instruction test"
	@echo "  decode_itype_test       - I-type instruction test"
	@echo "  decode_regfile_test     - Register file test"
	@echo "  decode_branch_test      - Branch instruction test"
	@echo "  decode_jump_test        - Jump instruction test"
	@echo "  decode_loadstore_test   - Load/Store instruction test"
	@echo "  decode_comprehensive_test - All tests combined"

# Clean build files
clean:
	@echo "Cleaning build files..."
	rm -rf $(BUILD_DIR)
	rm -f *.log *.vcd *.wlf *.vstf
	rm -f simv* csrc ucli.key vc_hdrs.h
	rm -f transcript modelsim.ini
	@echo "Clean completed."

# Help
help:
	@echo "UVM Decode Stage Verification Makefile"
	@echo ""
	@echo "Usage:"
	@echo "  make compile              - Compile design and testbench"
	@echo "  make sim                  - Run simulation with default test"
	@echo "  make test TEST=<name>     - Run specific test"
	@echo "  make tests                - Show available tests"
	@echo "  make clean                - Clean build files"
	@echo "  make all                  - Compile and run default simulation"
	@echo "  make help                 - Show this help"
	@echo ""
	@echo "Variables:"
	@echo "  SIM=<simulator>           - Specify simulator (questa/vcs/xcelium)"
	@echo "  TEST=<test_name>          - Specify test to run"
	@echo ""
	@echo "Examples:"
	@echo "  make test TEST=decode_rtype_test"
	@echo "  make sim SIM=vcs"
