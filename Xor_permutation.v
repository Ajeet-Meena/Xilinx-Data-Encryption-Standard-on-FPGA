`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:18:53 10/10/2013 
// Design Name: 
// Module Name:    Xor_permutation 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Xor_Permutation(PERMUTATION_OUTPUT, LEFT, RIGHT_REG);
input [32 : 1]PERMUTATION_OUTPUT;
input [32 : 1]LEFT;
// input [32 : 1]RIGHT_REG1;
// output [32 : 1]LEFT_REG2;
output [32 : 1]RIGHT_REG;
wire [32 : 1]PERMUTATION_OUTPUT;
wire [32 : 1]LEFT;
// wire [32 : 1]RIGHT_REG1;
// reg [32 : 1]LEFT_REG2;
reg [32 : 1]RIGHT_REG;
always @(PERMUTATION_OUTPUT or LEFT or RIGHT_REG)
 
 begin
 // LEFT_REG2 <= RIGHT_REG1;
 RIGHT_REG <= PERMUTATION_OUTPUT ^ LEFT;
 end
 endmodule

