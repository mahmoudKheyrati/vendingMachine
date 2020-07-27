`timescale 1ns/1ps

module setMoney_TEST;

    // Inputs
    reg clock;
    reg mode;
    reg [3:0] value;

    // Instantiate the Unit Under Test (UUT)
    setMoney uut(
        .clock(clock),
        .mode(mode),
        .value(value)
    );

    initial begin
        // Initialize Inputs
        clock = 0;
        mode = 0;
        value = 0;

        // Wait 100 ns for global reset to finish
        #100;
        clock = 1;
        value = 4'b1111;
        #100;
        clock = 0;
        value = 4'b0000;
        #100;
        clock = 1;
        mode = 1;
        value = 4'b1100;
        #100;
        clock = 0;
        value = 4'b0000;
        // Add stimulus here

    end

endmodule

