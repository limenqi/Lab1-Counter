#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vcounter* top = new Vcounter;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("counter.vcd");

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    // run simulation for many clock cycles
    for (i = 0; i < 300; i++) {

        // dump variables into VCD file and toggle clock
        // every i is one clock cycle and one clock cycle contains rising edge and falling edge
        // therefore, we dump tfp twice and toggle clk twice

        for (clk = 0; clk < 2; clk++) {
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }
        top ->rst = (i < 2);
        top ->en = !((i <= 4) | (i >= 14 && i < 16));
        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}
