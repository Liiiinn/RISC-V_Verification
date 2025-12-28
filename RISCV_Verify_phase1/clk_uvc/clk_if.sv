interface clk_if;
    logic clk;

    // task start_clk(int unsigned period);
    //     clk = 0;
    //     forever #(period/2) clk = ~clk;
    // endtask
endinterface