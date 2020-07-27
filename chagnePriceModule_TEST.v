`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:13:24 07/22/2020
// Design Name:   changePriceModule
// Module Name:   C:/WORK_SPACE/UNIVERSIY/vendingMachine/chagnePriceModule_TEST.v
// Project Name:  vendingMachine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: changePriceModule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module chagnePriceModule_TEST;

	// Inputs
	reg clock;
	reg [2:0] productCode;
	reg [3:0] newPrice;

	// Instantiate the Unit Under Test (UUT)
	changePriceModule uut (
		.clock(clock), 
		.productCode(productCode), 
		.newPrice(newPrice)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		productCode = 0;
		newPrice = 0;

		// Wait 100 ns for global reset to finish
		#100;
		productCode = 4'b0100;
		newPrice = 4'b0010;
		#100;
		clock = 1;
		#100;
		clock=0;
		#100;


        
		// Add stimulus here

	end
      
endmodule

