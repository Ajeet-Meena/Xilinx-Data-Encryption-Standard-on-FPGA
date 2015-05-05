`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:20:04 10/11/2013 
// Design Name: 
// Module Name:    Sbox_Rom7 
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
module Sbox_Rom7(S7_INPUT, S7_OUTPUT);
input [6 : 1] S7_INPUT;
output [3 : 0 ] S7_OUTPUT;
wire [6 : 1] S7_INPUT;
 
reg [3 : 0] S7_OUTPUT;
wire [6 : 1] S7_SELECT;
assign S7_SELECT = {S7_INPUT[6],S7_INPUT[1],S7_INPUT[5 : 2]};
always @(S7_SELECT)
begin
case(S7_SELECT)
6'b000000: S7_OUTPUT <= 4'h4;
6'b000001: S7_OUTPUT <= 4'hB;
6'b000010: S7_OUTPUT <= 4'h2;
6'b000011: S7_OUTPUT <= 4'hE;
6'b000100: S7_OUTPUT <= 4'hF;
6'b000101: S7_OUTPUT <= 4'h0;6'b000110: S7_OUTPUT <= 4'h8;6'b000111: S7_OUTPUT <= 4'hD;6'b001000: S7_OUTPUT <= 4'h3;6'b001001: S7_OUTPUT <= 4'hC;6'b001010: S7_OUTPUT <= 4'h9;6'b001011: S7_OUTPUT <= 4'h7;6'b001100: S7_OUTPUT <= 4'h5;
 6'b001101: S7_OUTPUT <= 4'hA;6'b001110: S7_OUTPUT <= 4'h6;6'b001111: S7_OUTPUT <= 4'h1;6'b010000: S7_OUTPUT <= 4'hD;6'b010001: S7_OUTPUT <= 4'h0;6'b010010: S7_OUTPUT <= 4'hB;6'b010011: S7_OUTPUT <= 4'h7;6'b010100: S7_OUTPUT <= 4'h4;6'b010101: S7_OUTPUT <= 4'h9;6'b010110: S7_OUTPUT <= 4'h1;6'b010111: S7_OUTPUT <= 4'hA;6'b011000: S7_OUTPUT <= 4'hE;6'b011001: S7_OUTPUT <= 4'h3;6'b011010: S7_OUTPUT <= 4'h5;6'b011011: S7_OUTPUT <= 4'hC;6'b011100: S7_OUTPUT <= 4'h2;6'b011101: S7_OUTPUT <= 4'hF;6'b011110: S7_OUTPUT <= 4'h8;6'b011111: S7_OUTPUT <= 4'h6;6'b100000: S7_OUTPUT <= 4'h1;6'b100001: S7_OUTPUT <= 4'h4;6'b100010: S7_OUTPUT <= 4'hB;6'b100011: S7_OUTPUT <= 4'hD;6'b100100: S7_OUTPUT <= 4'hC;6'b100101: S7_OUTPUT <= 4'h3;
 
6'b100110: S7_OUTPUT <= 4'h7;6'b100111: S7_OUTPUT <= 4'hE;6'b101000: S7_OUTPUT <= 4'hA;6'b101001: S7_OUTPUT <= 4'hF;6'b101010: S7_OUTPUT <= 4'h6;6'b101011: S7_OUTPUT <= 4'h8;6'b101100: S7_OUTPUT <= 4'h0;6'b101101: S7_OUTPUT <= 4'h5;6'b101110: S7_OUTPUT <= 4'h9;6'b101111: S7_OUTPUT <= 4'h2;6'b110000: S7_OUTPUT <= 4'h6;6'b110001: S7_OUTPUT <= 4'hB;6'b110010: S7_OUTPUT <= 4'hD;6'b110011: S7_OUTPUT <= 4'h8;6'b110100: S7_OUTPUT <= 4'h1;6'b110101: S7_OUTPUT <= 4'h4;6'b110110: S7_OUTPUT <= 4'hA;6'b110111: S7_OUTPUT <= 4'h7;6'b111000: S7_OUTPUT <= 4'h9;6'b111001: S7_OUTPUT <= 4'h5;6'b111010: S7_OUTPUT <= 4'h0;6'b111011: S7_OUTPUT <= 4'hF;6'b111100: S7_OUTPUT <= 4'hE;6'b111101: S7_OUTPUT <= 4'h2;6'b111110: S7_OUTPUT <= 4'h3;
 
6'b111111: S7_OUTPUT <= 4'hC;
default: S7_OUTPUT <= 4'h0;
endcase
end
endmodule
