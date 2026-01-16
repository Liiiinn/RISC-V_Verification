TEST_NAME=${1:-id_test}
VERBOSITY=${2:-UVM_MEDIUM}

# First compile (reuse vrun_id_test.sh compilation part)
echo "Compiling design..."
./vrun_id_test.sh $TEST_NAME $VERBOSITY 0

# Run with GUI
vsim -i work.tb_top \
    +UVM_TESTNAME=$TEST_NAME \
    +UVM_VERBOSITY=$VERBOSITY \
    +UVM_NO_RELNOTES \
    -do "add wave -r /*; run -all"