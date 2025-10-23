#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

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

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("Lab 1: Counter");
    
    vbdSetMode(1);    // Set Vbuddy to type 1 mode

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->ld = 0;
    top->v = vbdValue();

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

        // vbdHex (4, (int(top->count) >> 16) & 0xF);
        // vbdHex (3, (int(top->count) >> 8) & 0xF);
        // vbdHex (2, (int(top->count) >> 4) & 0xF);
        // vbdHex (1, int(top->count) & 0xF);
        vbdPlot(int(top->count), 0, 255);
        vbdCycle(i+1);

        top ->rst = (i < 2);
        top ->ld = vbdFlag();
        if (Verilated::gotFinish()) exit(0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}
