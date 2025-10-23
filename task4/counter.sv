module counter #(
    parameter WIDTH = 8
)(
    // interface signals
    input   logic             clk,      // clock
    input   logic             rst,      // reset
    input   logic             en,       // enable
    output  logic [WIDTH-1:0] count     // count output
);

always_ff @(posedge clk, posedge rst) 
    if (rst) count <= {WIDTH{1'b0}}; 
    else if (en)  count <= count + 1'b1;
    else if (~en) count <= count - 1'b1;

endmodule
