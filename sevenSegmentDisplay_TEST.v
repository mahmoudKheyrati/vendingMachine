`timescale 1ns/1ps

module sevenSegmentDisplay_TEST;

    // Inputs
    reg clock;
    reg [3:0] binaryNumber;
    reg isError;

    // Outputs
    wire A;
    wire B;
    wire C;
    wire D;
    wire E;
    wire F;
    wire G;
    wire DP;

    // Instantiate the Unit Under Test (UUT)
    sevenSegmentDisplay uut(
        .clock(clock),
        .binaryNumber(binaryNumber),
        .isError(isError),
        .A(A),
        .B(B),
        .C(C),
        .D(D),
        .E(E),
        .F(F),
        .G(G),
        .DP(DP)
    );

    initial begin
        // Initialize Inputs
        clock = 0;
        binaryNumber = 0;
        isError = 0;

        // Wait 100 ns for global reset to finish
        #50;
        binaryNumber = 0;
        #50;
        binaryNumber = 1;
        #50;
        binaryNumber = 2;
        #50;
        binaryNumber = 3;
        #50;
        binaryNumber = 4;
        #50;
        binaryNumber = 5;
        #50;
        binaryNumber = 6;
        #50;
        binaryNumber = 7;
        #50;
        binaryNumber = 8;
        #50;
        binaryNumber = 9;
        #50;
        binaryNumber = 10;
        #50;
        binaryNumber = 11;
        #50;
        binaryNumber = 12;
        #50;
        binaryNumber = 13;
        #50;
        binaryNumber = 14;
        #50;
        binaryNumber = 15;
        #50;
        isError = 1;
        #50;

        // Add stimulus here

    end
    always begin
        #50 clock = ~clock;
    end

endmodule

