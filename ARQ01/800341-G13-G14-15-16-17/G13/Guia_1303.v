// --------------------
// --- Guia_1303
// Autor: Arthur Octavio Xavier Messias Matrícula: 800341// --------------------

`include "jkff.v"

module Guia_1303;
    reg clk, clear;
    reg H; // constante positiva
    reg L; // constante negativa

    or   OR_1  ( or_clear, clear, cl1 );
    jkff JKFF2 ( o4, qn4, H, H, clk, L, or_clear );
    jkff JKFF3 ( o3, qn3, H, H, qn4, L, or_clear );
    jkff JKFF4 ( o2, qn2, H, H, qn3, L, or_clear );
    jkff JKFF5 ( o1, qn1, H, H, qn2, L, or_clear );
    and  AND_1 ( cl1, ~o1, o2, ~o3, o4 );

    initial begin : main
        $display ( "Guia_1303 - Teste" );
        $display ( " clk    output");
        // initial values
        clk   = 1;
        H     = 1;
        L     = 0;
        clear = 1;
        #5 clear = 0;
        #650
        $finish;
    end // main
        
    always
        #5 clk = ~clk;

    always @( posedge clk ) begin
        $display ( " %3d    %d%d%d%d", $time, o1, o2, o3, o4 );
    end 
endmodule // Guia_1303