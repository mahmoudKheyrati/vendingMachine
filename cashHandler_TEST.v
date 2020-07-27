`timescale 1ns/1ps
`timescale 1ns/1ps

module cashHandler_TEST;

    // Inputs
    reg clock;
    reg mode;
    reg func;
    reg [10:0] amount;

    // Outputs
    wire res;

    // Instantiate the Unit Under Test (UUT)
    cashHandler uut(
        .clock(clock),
        .mode(mode),
        .func(func),
        .amount(amount),
        .res(res)
    );

    initial begin
        // Initialize Inputs
        clock = 0;
        mode = 0;
        func = 0;
        amount = 0;

        // Wait 100 ns for global reset to finish
        // for customer mode
        #100;
        //purchase
        clock = 1;
        mode = 0;
        func = 0;
        amount = 4'b011;
        #100;
        clock = 0;
        #100;
        clock = 1;
//		// charge customer
        func = 1;
        amount = 4'b0111;
        #100;
        clock = 0;
        #100;
        // machine mode
        clock = 1;
        //recive money
        mode = 1;
        func = 1;
		amount = 4'b1010;
        #100;
        clock = 0;
        #100;
        //charge machine money
        mode = 1;
        func = 0;
		amount = 4'b1010;
        #100;
        clock = 1;
        #100;
        clock = 0;

        // Add stimulus here

    end

endmodule

