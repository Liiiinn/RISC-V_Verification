#!/bin/bash
# run_tests.sh - Script to run decode stage UVM tests

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Default settings
SIMULATOR="questa"
TEST="decode_random_test"
VERBOSITY="UVM_MEDIUM"
GUI=false
WAVES=false

# Function to print usage
usage() {
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "Options:"
    echo "  -t, --test TEST_NAME      Specify test to run (default: decode_random_test)"
    echo "  -s, --sim SIMULATOR       Specify simulator (questa/vcs/xcelium, default: questa)"
    echo "  -v, --verbosity LEVEL     UVM verbosity level (UVM_NONE/UVM_LOW/UVM_MEDIUM/UVM_HIGH/UVM_FULL, default: UVM_MEDIUM)"
    echo "  -g, --gui                 Run with GUI"
    echo "  -w, --waves               Enable wave dumping"
    echo "  -c, --clean               Clean before running"
    echo "  -l, --list                List available tests"
    echo "  -h, --help                Show this help"
    echo ""
    echo "Available tests:"
    echo "  decode_random_test        - Random instruction test"
    echo "  decode_rtype_test         - R-type instruction test"
    echo "  decode_itype_test         - I-type instruction test"
    echo "  decode_regfile_test       - Register file test"
    echo "  decode_branch_test        - Branch instruction test"
    echo "  decode_jump_test          - Jump instruction test"
    echo "  decode_loadstore_test     - Load/Store instruction test"
    echo "  decode_comprehensive_test - All tests combined"
    echo ""
    echo "Examples:"
    echo "  $0                                    # Run default test"
    echo "  $0 -t decode_rtype_test              # Run R-type test"
    echo "  $0 -t decode_comprehensive_test -g   # Run comprehensive test with GUI"
    echo "  $0 -s vcs -w                         # Run with VCS and waves"
}

# Function to list available tests
list_tests() {
    echo -e "${BLUE}Available UVM tests:${NC}"
    echo "  decode_random_test        - Random instruction test (default)"
    echo "  decode_rtype_test         - R-type instruction test"
    echo "  decode_itype_test         - I-type instruction test" 
    echo "  decode_regfile_test       - Register file test"
    echo "  decode_branch_test        - Branch instruction test"
    echo "  decode_jump_test          - Jump instruction test"
    echo "  decode_loadstore_test     - Load/Store instruction test"
    echo "  decode_comprehensive_test - All tests combined"
}

# Function to run with Questa
run_questa() {
    echo -e "${BLUE}Running with Questa ModelSim...${NC}"
    
    # Compilation
    echo -e "${YELLOW}Compiling design...${NC}"
    vlib work
    vmap work work
    
    # Compile design files
    vlog -work work +incdir+../RISC-V +incdir+. -timescale=1ns/1ps \
         ../RISC-V/common.sv \
         ../RISC-V/register_file.sv \
         ../RISC-V/control_unit.sv \
         decode_stage.sv
    
    if [ $? -ne 0 ]; then
        echo -e "${RED}Design compilation failed!${NC}"
        exit 1
    fi
    
    # Compile testbench
    echo -e "${YELLOW}Compiling testbench...${NC}"
    vlog -work work +incdir+../RISC-V +incdir+. -timescale=1ns/1ps \
         decode_pkg.sv \
         decode_interface.sv \
         decode_tb.sv
    
    if [ $? -ne 0 ]; then
        echo -e "${RED}Testbench compilation failed!${NC}"
        exit 1
    fi
    
    # Simulation
    echo -e "${YELLOW}Starting simulation...${NC}"
    
    SIM_CMD="vsim -work work"
    SIM_CMD="$SIM_CMD +UVM_TESTNAME=$TEST"
    SIM_CMD="$SIM_CMD +UVM_VERBOSITY=$VERBOSITY"
    
    if [ "$WAVES" = true ]; then
        SIM_CMD="$SIM_CMD -vcdfile decode_test.vcd"
    fi
    
    if [ "$GUI" = true ]; then
        SIM_CMD="$SIM_CMD decode_tb"
    else
        SIM_CMD="$SIM_CMD -c -do \"run -all; quit -f\" decode_tb"
    fi
    
    echo "Running: $SIM_CMD"
    eval $SIM_CMD
}

# Function to run with VCS
run_vcs() {
    echo -e "${BLUE}Running with VCS...${NC}"
    
    echo -e "${YELLOW}Compiling and elaborating...${NC}"
    
    COMP_CMD="vcs +incdir+../RISC-V +incdir+. -timescale=1ns/1ps -sverilog +v2k -Mupdate -debug_all"
    COMP_CMD="$COMP_CMD ../RISC-V/common.sv"
    COMP_CMD="$COMP_CMD ../RISC-V/register_file.sv"
    COMP_CMD="$COMP_CMD ../RISC-V/control_unit.sv"
    COMP_CMD="$COMP_CMD decode_stage.sv"
    COMP_CMD="$COMP_CMD decode_pkg.sv"
    COMP_CMD="$COMP_CMD decode_interface.sv"
    COMP_CMD="$COMP_CMD decode_tb.sv"
    COMP_CMD="$COMP_CMD -o simv"
    
    if [ "$WAVES" = true ]; then
        COMP_CMD="$COMP_CMD +vcs+vcdpluson"
    fi
    
    echo "Running: $COMP_CMD"
    eval $COMP_CMD
    
    if [ $? -ne 0 ]; then
        echo -e "${RED}Compilation failed!${NC}"
        exit 1
    fi
    
    # Simulation
    echo -e "${YELLOW}Starting simulation...${NC}"
    
    SIM_CMD="./simv"
    SIM_CMD="$SIM_CMD +UVM_TESTNAME=$TEST"
    SIM_CMD="$SIM_CMD +UVM_VERBOSITY=$VERBOSITY"
    SIM_CMD="$SIM_CMD +vcs+lic+wait"
    
    if [ "$GUI" = true ]; then
        SIM_CMD="$SIM_CMD -gui"
    fi
    
    echo "Running: $SIM_CMD"
    eval $SIM_CMD
}

# Function to clean
clean_files() {
    echo -e "${YELLOW}Cleaning build files...${NC}"
    rm -rf work
    rm -f *.log *.vcd *.wlf *.vstf
    rm -f simv* csrc ucli.key vc_hdrs.h
    rm -f transcript modelsim.ini
    rm -rf xcelium.d
    rm -f xrun.log xrun.history
    echo -e "${GREEN}Clean completed.${NC}"
}

# Parse command line arguments
while [[ $# -gt 0 ]]; do
    case $1 in
        -t|--test)
            TEST="$2"
            shift 2
            ;;
        -s|--sim)
            SIMULATOR="$2"
            shift 2
            ;;
        -v|--verbosity)
            VERBOSITY="$2"
            shift 2
            ;;
        -g|--gui)
            GUI=true
            shift
            ;;
        -w|--waves)
            WAVES=true
            shift
            ;;
        -c|--clean)
            clean_files
            shift
            ;;
        -l|--list)
            list_tests
            exit 0
            ;;
        -h|--help)
            usage
            exit 0
            ;;
        *)
            echo -e "${RED}Unknown option: $1${NC}"
            usage
            exit 1
            ;;
    esac
done

# Validate simulator
if [[ "$SIMULATOR" != "questa" && "$SIMULATOR" != "vcs" && "$SIMULATOR" != "xcelium" ]]; then
    echo -e "${RED}Invalid simulator: $SIMULATOR${NC}"
    echo "Supported simulators: questa, vcs, xcelium"
    exit 1
fi

# Print configuration
echo -e "${GREEN}=== Decode Stage UVM Test Configuration ===${NC}"
echo -e "${BLUE}Test:${NC}       $TEST"
echo -e "${BLUE}Simulator:${NC}  $SIMULATOR"
echo -e "${BLUE}Verbosity:${NC}  $VERBOSITY"
echo -e "${BLUE}GUI:${NC}        $GUI"
echo -e "${BLUE}Waves:${NC}      $WAVES"
echo ""

# Run based on simulator
case $SIMULATOR in
    questa)
        run_questa
        ;;
    vcs)
        run_vcs
        ;;
    xcelium)
        echo -e "${RED}Xcelium support not implemented yet${NC}"
        exit 1
        ;;
    *)
        echo -e "${RED}Unsupported simulator: $SIMULATOR${NC}"
        exit 1
        ;;
esac

# Check results
if [ $? -eq 0 ]; then
    echo -e "${GREEN}=== Test completed successfully! ===${NC}"
else
    echo -e "${RED}=== Test failed! ===${NC}"
    exit 1
fi
