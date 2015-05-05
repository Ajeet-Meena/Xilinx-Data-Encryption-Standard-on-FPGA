`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:26:31 10/11/2013
// Design Name:   Des_Top
// Module Name:   C:/Users/Aakash/Dropbox/project007/DES/DESS/DES_test1.v
// Project Name:  DESS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Des_Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DES_test1;

	// Inputs
	reg CLK;
	reg RST;
	reg CHIP_SELECT_BAR;
	reg [64:1] PLAIN_TEXT;
	reg [64:1] KEY;

	// Outputs
	wire [64:1] CIPHER_TEXT;

	// Instantiate the Unit Under Test (UUT)
	Des_Top uut (
		.CLK(CLK), 
		.RST(RST), 
		.CHIP_SELECT_BAR(CHIP_SELECT_BAR), 
		.PLAIN_TEXT(PLAIN_TEXT), 
		.CIPHER_TEXT(CIPHER_TEXT), 
		.KEY(KEY)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		RST = 0;
		CHIP_SELECT_BAR = 0;
		//PLAIN_TEXT = 64'h69276d2073657879;
		PLAIN_TEXT = 64'hc16b85393adb0ecb;
		KEY = 64'h0101010101010101;

		// Wait 100 ns for global reset to finish
		#100;
		
     // CLK = 0;
		RST = 1;
		CHIP_SELECT_BAR = 0;
		//PLAIN_TEXT = 64'h69276d2073657879;
		PLAIN_TEXT = 64'hc16b85393adb0ecb;
		KEY = 64'h0101010101010101;
		// Add stimulus here
     # 20
	  RST=0;
	  
	end
   always #10 CLK=~CLK;
endmodule

