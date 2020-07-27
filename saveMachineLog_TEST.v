`timescale 1ns / 1ps

module saveMachineLog_TEST;

	// Inputs
	reg clock;
	reg [1:0] operator;
	reg param1;
	reg [3:0] param2;
	reg [3:0] param3;
	reg [3:0] param4;

	// Instantiate the Unit Under Test (UUT)
	saveMachineLogs uut (
		.clock(clock), 
		.operator(operator), 
		.param1(param1), 
		.param2(param2), 
		.param3(param3), 
		.param4(param4)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		operator = 0;
		param1 = 1;
		param2 = 2;
		param3 = 5;
		param4 = 1;

		// Wait 100 ns for global reset to finish
		#100;
		clock=1;
		#100;
		clock=0;
		#100;
		clock=1;
		operator=1;
		#100;
		clock=0;
		#100;
		clock=1;
		operator=2;
		#100;
		clock=0;
		#100;
		clock=1;
		param2=0;
		operator=3;

        
		// Add stimulus here

	end
      
endmodule

