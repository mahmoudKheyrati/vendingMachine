`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:10:49 07/22/2020
// Design Name:   storeHandler
// Module Name:   C:/WORK_SPACE/UNIVERSIY/vendingMachine/storeHandler_TEST.v
// Project Name:  vendingMachine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: storeHandler
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module storeHandler_TEST;

	// Inputs
	reg clock;
	reg [1:0] mode;
	reg [2:0] productCode;
	reg [3:0] itemCount;
	reg [3:0] newPrice;

	// Instantiate the Unit Under Test (UUT)
	storeHandler uut (
		.clock(clock), 
		.mode(mode), 
		.productCode(productCode), 
		.itemCount(itemCount), 
		.newPrice(newPrice)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		mode = 0;
		productCode = 0;
		itemCount = 0;
		newPrice = 0;

		// Wait 100 ns for global reset to finish
		#100;
		//charge by the owner 
		clock = 1;
		mode = 0 ;
		productCode = 0 ;
		itemCount = 10;
		#100 ;
		clock = 0 ;
		#400 ;
		// buy product one
		clock =1 ;
		mode =1;
		itemCount = 5 ;
		productCode = 0 ;
		#100;
		clock = 0 ;
		#100;
		// change price
		mode =2'b10;
		productCode = 0 ;
		newPrice = 15;
		#100;
		clock = 1 ;
		#100 ;
		clock = 0 ;


		$display("hi every one");
		
		
        
		// Add stimulus here

	end
      
endmodule

