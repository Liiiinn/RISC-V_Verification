TEST_NAME=${1:-top_test1}
VERBOSITY=${2:-UVM_MEDIUM}

# First compile (reuse vrun_id_test.sh compilation part)
echo "Compiling design..."
./vrun_id_test.sh $TEST_NAME $VERBOSITY 0 &> /dev/null

# Run with GUI
vsim -i work.tb_top \
    +UVM_TESTNAME=$TEST_NAME \
    +UVM_VERBOSITY=$VERBOSITY \
    +UVM_NO_RELNOTES \
    -do "add wave -r /*; run -all"