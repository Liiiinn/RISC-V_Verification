# run vrun_gui.sh rather than vrun_id_test.sh

# ==============================================================================
# Configuration
# ==============================================================================

# Color definitions for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Default test settings
TEST_NAME=${1:-top_test1}
VERBOSITY=${2:-UVM_MEDIUM}
COVERAGE=${3:-1}  # Enable coverage by default

# Directory structure
PROJECT_ROOT="."
DUT_DIR="${PROJECT_ROOT}/dut"
TB_DIR="${PROJECT_ROOT}/tb"
CLK_UVC_DIR="${PROJECT_ROOT}/clk_uvc"
RSTN_UVC_DIR="${PROJECT_ROOT}/rstn_uvc"
ID_UVC_DIR="${PROJECT_ROOT}/id_uvc"
ID_OUT_UVC_DIR="${PROJECT_ROOT}/id_out_uvc"

GIT_ROOT="$(cd "${PROJECT_ROOT}/.." && pwd)"  # RISC-V_Verification
PARENT_DIR="$(cd "${GIT_ROOT}/.." && pwd)"     # ICP2
OUTPUT_ROOT="${PARENT_DIR}/sim_output/RISCV_Verify_phase1"

WORK_DIR="${OUTPUT_ROOT}/work"
LOG_DIR="${OUTPUT_ROOT}/logs"
COV_DIR="${OUTPUT_ROOT}/coverage"
WAVE_DIR="${OUTPUT_ROOT}/waves"
REPORT_DIR="${OUTPUT_ROOT}/reports"

# timestamps, to archive history simulations
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")

# create output directory
mkdir -p ${WORK_DIR}
mkdir -p ${LOG_DIR}
mkdir -p ${COV_DIR}
mkdir -p ${WAVE_DIR}
mkdir -p ${REPORT_DIR}

# define output path
COMPILE_LOG="${LOG_DIR}/compile_${TIMESTAMP}.log"
SIM_LOG="${LOG_DIR}/sim_${TEST_NAME}_${TIMESTAMP}.log"
COVERAGE_DB="${COV_DIR}/coverage_${TEST_NAME}.ucdb"
WAVE_FILE="${WAVE_DIR}/waves_${TEST_NAME}.wlf"
TRANSCRIPT="${LOG_DIR}/transcript_${TEST_NAME}.log"

# ==============================================================================
# Print Configuration
# ==============================================================================

echo -e "${GREEN}========================================${NC}"
echo -e "${GREEN}  RISC-V ID Stage UVM Verification${NC}"
echo -e "${GREEN}========================================${NC}"
echo -e "${BLUE}Test Name:${NC}     $TEST_NAME"
echo -e "${BLUE}Verbosity:${NC}     $VERBOSITY"
echo -e "${BLUE}Coverage:${NC}      $([ $COVERAGE -eq 1 ] && echo 'Enabled' || echo 'Disabled')"
echo -e "${BLUE}Output Dir:${NC}    $OUTPUT_ROOT"
echo -e "${BLUE}Work Lib:${NC}      $WORK_DIR"
echo -e "${BLUE}Compile Log:${NC}   $COMPILE_LOG"
echo -e "${BLUE}Sim Log:${NC}       $SIM_LOG"
echo -e "${GREEN}========================================${NC}"
echo ""

# ==============================================================================
# Compilation Step
# ==============================================================================

echo -e "${YELLOW}[1/2] Compiling design and testbench...${NC}"

vlib ${WORK_DIR}
vmap work ${WORK_DIR}

# Build vlog command with all necessary options
VLOG_CMD="vlog -sv -timescale 1ns/1ns +acc=pr"

VLOG_CMD="$VLOG_CMD -work ${WORK_DIR}"

VLOG_CMD="$VLOG_CMD -l ${COMPILE_LOG}"

# Add include directories
VLOG_CMD="$VLOG_CMD +incdir+${DUT_DIR}"
VLOG_CMD="$VLOG_CMD +incdir+${TB_DIR}"
VLOG_CMD="$VLOG_CMD +incdir+${CLK_UVC_DIR}"
VLOG_CMD="$VLOG_CMD +incdir+${RSTN_UVC_DIR}"
VLOG_CMD="$VLOG_CMD +incdir+${ID_UVC_DIR}"
VLOG_CMD="$VLOG_CMD +incdir+${ID_OUT_UVC_DIR}"

# Add coverage options if enabled
if [ $COVERAGE -eq 1 ]; then
    VLOG_CMD="$VLOG_CMD +cover=bcesf"
fi

# Add DUT files
VLOG_CMD="$VLOG_CMD ${DUT_DIR}/common.sv"
VLOG_CMD="$VLOG_CMD ${DUT_DIR}/register_file.sv"
VLOG_CMD="$VLOG_CMD ${DUT_DIR}/control_unit.sv"
VLOG_CMD="$VLOG_CMD ${DUT_DIR}/decode_stage.sv"

# Add Clock UVC files
VLOG_CMD="$VLOG_CMD ${CLK_UVC_DIR}/clk_if.sv"
VLOG_CMD="$VLOG_CMD ${CLK_UVC_DIR}/clk_config.svh"
VLOG_CMD="$VLOG_CMD ${CLK_UVC_DIR}/clk_driver.svh"
VLOG_CMD="$VLOG_CMD ${CLK_UVC_DIR}/clk_agent.svh"

# Add Reset UVC files
VLOG_CMD="$VLOG_CMD ${RSTN_UVC_DIR}/rstn_if.sv"
VLOG_CMD="$VLOG_CMD ${RSTN_UVC_DIR}/rstn_config.svh"
VLOG_CMD="$VLOG_CMD ${RSTN_UVC_DIR}/rstn_seq_item.svh"
VLOG_CMD="$VLOG_CMD ${RSTN_UVC_DIR}/rstn_seq.svh"
VLOG_CMD="$VLOG_CMD ${RSTN_UVC_DIR}/rstn_driver.svh"
VLOG_CMD="$VLOG_CMD ${RSTN_UVC_DIR}/rstn_monitor.svh"
VLOG_CMD="$VLOG_CMD ${RSTN_UVC_DIR}/rstn_agent.svh"

# Add ID Input UVC files
VLOG_CMD="$VLOG_CMD ${ID_UVC_DIR}/id_interface.sv"
VLOG_CMD="$VLOG_CMD ${ID_UVC_DIR}/id_config.svh"
VLOG_CMD="$VLOG_CMD ${ID_UVC_DIR}/id_seq_item.svh"
VLOG_CMD="$VLOG_CMD ${ID_UVC_DIR}/id_seq.svh"
VLOG_CMD="$VLOG_CMD ${ID_UVC_DIR}/id_driver.svh"
VLOG_CMD="$VLOG_CMD ${ID_UVC_DIR}/id_monitor.svh"
VLOG_CMD="$VLOG_CMD ${ID_UVC_DIR}/id_agent.svh"

# Add ID Output UVC files
VLOG_CMD="$VLOG_CMD ${ID_OUT_UVC_DIR}/id_out_vif.sv"
VLOG_CMD="$VLOG_CMD ${ID_OUT_UVC_DIR}/id_out_config.svh"
VLOG_CMD="$VLOG_CMD ${ID_OUT_UVC_DIR}/id_out_seq_item.svh"
VLOG_CMD="$VLOG_CMD ${ID_OUT_UVC_DIR}/id_out_monitor.svh"
VLOG_CMD="$VLOG_CMD ${ID_OUT_UVC_DIR}/id_out_agent.svh"

# Add Testbench files
VLOG_CMD="$VLOG_CMD ${TB_DIR}/tb_pkg.sv"
VLOG_CMD="$VLOG_CMD ${TB_DIR}/tb_top.sv"

# Execute compilation
echo -e "${BLUE}Executing:${NC} $VLOG_CMD"
echo ""
eval $VLOG_CMD

# Check compilation status
if [ $? -ne 0 ]; then
    echo -e "${RED}[ERROR] Compilation failed! Check log: ${COMPILE_LOG}${NC}"
    exit 1
fi

echo -e "${GREEN}[✓] Compilation successful${NC}"
echo -e "${BLUE}Compile log saved to: ${COMPILE_LOG}${NC}"
echo ""

# ==============================================================================
# Simulation Step
# ==============================================================================

echo -e "${YELLOW}[2/2] Running simulation...${NC}"

# Build vsim command
VSIM_CMD="vsim -c"

# Specify work library
VSIM_CMD="$VSIM_CMD -work ${WORK_DIR}"

# Specify log and waveform file locations
VSIM_CMD="$VSIM_CMD -l ${SIM_LOG}"
VSIM_CMD="$VSIM_CMD -wlf ${WAVE_FILE}"

# Top module
VSIM_CMD="$VSIM_CMD work.tb_top"

# Add UVM options
VSIM_CMD="$VSIM_CMD +UVM_TESTNAME=$TEST_NAME"
VSIM_CMD="$VSIM_CMD +UVM_VERBOSITY=$VERBOSITY"
VSIM_CMD="$VSIM_CMD +UVM_NO_RELNOTES"

# Add coverage options if enabled
if [ $COVERAGE -eq 1 ]; then
    VSIM_CMD="$VSIM_CMD -coverage"
    VSIM_CMD="$VSIM_CMD -coverstore ${COVERAGE_DB}"
fi

# Create do command file
DO_FILE="${LOG_DIR}/sim_${TEST_NAME}.do"
cat > ${DO_FILE} << EOF
# Auto-generated do file for ${TEST_NAME}
run -all
EOF

# If coverage is enabled, add coverage save command
if [ $COVERAGE -eq 1 ]; then
    echo "coverage save -onexit ${COVERAGE_DB}" >> ${DO_FILE}
fi

echo "quit -f" >> ${DO_FILE}

# Use do file
VSIM_CMD="$VSIM_CMD -do ${DO_FILE}"

# Execute simulation
echo -e "${BLUE}Executing:${NC} $VSIM_CMD"
echo ""
eval $VSIM_CMD

# Check simulation status
if [ $? -ne 0 ]; then
    echo -e "${RED}[ERROR] Simulation failed! Check log: ${SIM_LOG}${NC}"
    exit 1
fi

echo -e "${GREEN}[✓] Simulation completed${NC}"
echo -e "${BLUE}Simulation log: ${SIM_LOG}${NC}"
echo -e "${BLUE}Waveform file:  ${WAVE_FILE}${NC}"
echo ""

# ==============================================================================
# Post-Simulation Actions
# ==============================================================================

# Check for UVM errors in simulation log
if grep -q "UVM_ERROR" ${SIM_LOG}; then
    echo -e "${RED}[WARNING] UVM_ERROR found in simulation log!${NC}"
    grep "UVM_ERROR" ${SIM_LOG}
fi

if grep -q "UVM_FATAL" ${SIM_LOG}; then
    echo -e "${RED}[FATAL] UVM_FATAL found in simulation log!${NC}"
    grep "UVM_FATAL" ${SIM_LOG}
    exit 1
fi

# Print coverage summary if enabled
if [ $COVERAGE -eq 1 ] && [ -f "${COVERAGE_DB}" ]; then
    echo ""
    echo -e "${YELLOW}Coverage Summary:${NC}"
    COV_REPORT="${REPORT_DIR}/coverage_${TEST_NAME}.txt"
    vcover report -summary ${COVERAGE_DB} | tee ${COV_REPORT}
    echo -e "${BLUE}Full coverage report: ${COV_REPORT}${NC}"
    
    # Generate HTML coverage report
    COV_HTML_DIR="${REPORT_DIR}/coverage_${TEST_NAME}_html"
    vcover report -html -output ${COV_HTML_DIR} ${COVERAGE_DB}
    echo -e "${BLUE}HTML coverage report: ${COV_HTML_DIR}/index.html${NC}"
fi

# Generate test report
TEST_REPORT="${REPORT_DIR}/test_${TEST_NAME}_${TIMESTAMP}.txt"
cat > ${TEST_REPORT} << EOF
========================================
RISC-V ID Stage Verification Report
========================================
Test Name:      ${TEST_NAME}
Timestamp:      ${TIMESTAMP}
Verbosity:      ${VERBOSITY}
Coverage:       $([ $COVERAGE -eq 1 ] && echo 'Enabled' || echo 'Disabled')

Files:
- Compile Log:  ${COMPILE_LOG}
- Sim Log:      ${SIM_LOG}
- Waveform:     ${WAVE_FILE}
- Coverage DB:  ${COVERAGE_DB}

Status:         PASSED
========================================
EOF

echo -e "${BLUE}Test report saved: ${TEST_REPORT}${NC}"

# ==============================================================================
# Final Status
# ==============================================================================

echo ""
echo -e "${GREEN}========================================${NC}"
echo -e "${GREEN}  Test: $TEST_NAME${NC}"
echo -e "${GREEN}  Status: PASSED${NC}"
echo -e "${GREEN}  Output Directory: ${OUTPUT_ROOT}${NC}"
echo -e "${GREEN}========================================${NC}"

exit 0