// ------------------------- 
// Clock.v
// Clock Generator
// Nome: Arthur Octavio Xavier Messias
// Matricula: 800341
// ------------------------- 

module clock ( output clk ); 
    reg clk;
    
    initial begin : start
    clk = 1'b0; 
    end // start

    always begin : clock 
        #12 clk = ~clk; 
    end // clock
endmodule // clock ( )