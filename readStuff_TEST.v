`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:43:35 07/21/2020
// Design Name:   readStuff
// Module Name:   C:/WORK_SPACE/UNIVERSIY/vendingMachine/readStuff_TEST.v
// Project Name:  vendingMachine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: readStuff
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module readStuff_TEST;

	// Inputs
	reg clock;

	// Outputs
	wire [10:0] p0;
	wire [10:0] p1;
	wire [10:0] p2;
	wire [10:0] p3;
	wire [10:0] p4;

	// Instantiate the Unit Under Test (UUT)
	readStuff uut (
		.clock(clock), 
		.p0(p0), 
		.p1(p1), 
		.p2(p2), 
		.p3(p3), 
		.p4(p4)
	);

	initial begin
		// Initialize Inputs
		clock = 0;

		// Wait 100 ns for global reset to finish
		#100;
		clock=1; 
        
		// Add stimulus here

	end
      
endmodule

