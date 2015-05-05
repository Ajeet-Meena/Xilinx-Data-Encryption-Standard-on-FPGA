`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:03:52 10/10/2013 
// Design Name: 
// Module Name:    Reg32 
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
module Reg32(CLK, RST, RIGHT, RIGHT_REG, LEFT_REG1, RIGHT_REG1);
input CLK;
input RST;
input [32 : 1]RIGHT;
input [32 : 1]RIGHT_REG;
output [32 : 1] LEFT_REG1;
output [32 : 1] RIGHT_REG1;
wire CLK;
wire RST;
reg [32 : 1] LEFT_REG1;
reg [32 : 1] RIGHT_REG1;
always @ (posedge CLK or posedge RST)
begin
if(RST)
begin
LEFT_REG1 <= 32'h00000000;
RIGHT_REG1 <= 32'h00000000;
end
else
begin
LEFT_REG1 <= RIGHT;
RIGHT_REG1 <= RIGHT_REG;
end
end
endmodule

