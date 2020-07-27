`timescale 1ns/1ps

module chargeMachineModule_TEST;

    // Inputs
    reg clock;
    reg [2:0] productCode;
    reg [3:0] productCount;

    // Outputs
    wire DP;

    // Instantiate the Unit Under Test (UUT)
    chargeMachineModule uut(
        .clock(clock),
        .productCode(productCode),
        .productCount(productCount),
        .DP(DP)
    );

    initial begin
        // Initialize Inputs
        clock = 0;
        productCode = 0;
        productCount = 0;

        // Wait 100 ns for global reset to finish
        #100;
        productCode = 0;
        productCount = 7;
        #100;
        clock = 1;
        #100;
        clock = 0;
        #100;
        productCode = 2;
        productCount = 1;
        #100;
        clock = 1;
        #100;
        clock = 0;
        #100;


        // Add stimulus here

    end

endmodule

