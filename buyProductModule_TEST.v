`timescale 1ns / 1ps

module buyProductModule_TEST;

	// Inputs
	reg clock;
	reg [2:0] itemCode;
	reg [3:0] itemCount;

	// Outputs
	wire DP;

	// Instantiate the Unit Under Test (UUT)
	buyProductModule uut (
		.clock(clock), 
		.itemCode(itemCode), 
		.itemCount(itemCount), 
		.DP(DP)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		itemCode = 0;
		itemCount = 0;

		// Wait 100 ns for global reset to finish
		#100;
		itemCode=0;
		itemCount=5;
		#100;
		clock=1;
		#100;
		clock=0;

        
		// Add stimulus here

	end
      
endmodule

