`timescale 1ns / 1ps


module getMoney_TEST;

	// Inputs
	reg clock;
	reg mode;

	// Outputs
	wire [3:0] value;

	// Instantiate the Unit Under Test (UUT)
	getMoney uut (
		.clock(clock), 
		.mode(mode), 
		.value(value)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		mode = 0;

		// Wait 100 ns for global reset to finish
		#100;
		clock=1;
		mode=0;
		#100;
		clock=0;
		#100;
		clock=1;
		mode =1 ;
		#100;
		clock=0;

        
		// Add stimulus here

	end
      
endmodule

