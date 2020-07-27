`timescale 1ns / 1ps


module recieveMoneyModule_TEST;

	// Inputs
	reg clock;
	reg [3:0] amount;

	// Outputs
	wire DP;

	// Instantiate the Unit Under Test (UUT)
	recieveMoneyModule uut (
		.clock(clock), 
		.amount(amount), 
		.DP(DP)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		amount = 0;

		// Wait 100 ns for global reset to finish
		#100;
		amount = 4'b1111 ;
		#100;
		clock = 1 ;
		#100;
		clock = 0 ;
		#100;
		amount = 4'b1111 ;
		#100;
		clock = 1 ;
		#100;
		clock = 0 ;


		// Add stimulus here

	end
      
endmodule

