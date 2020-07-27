`timescale 1ns / 1ps

module writeStuff_TEST;

	// Inputs
	reg clock;
	reg [10:0] p0;
	reg [10:0] p1;
	reg [10:0] p2;
	reg [10:0] p3;
	reg [10:0] p4;

	// Instantiate the Unit Under Test (UUT)
	writeStuff uut (
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
		p0 = 0;
		p1 = 0;
		p2 = 0;
		p3 = 0;
		p4 = 0;

		// Wait 100 ns for global reset to finish
		#100;
		clock=1;
		p0= 11'b00000110001;
		p1= 11'b00101110011;
		p2= 11'b01000100010;
		p3= 11'b01101010101;
		p4= 11'b10010110001;
		#100 ;
		clock = 0 ;
		p0= 00000000000;
        
		// Add stimulus here

	end
      
endmodule

