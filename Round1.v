`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:06:16 10/10/2013 
// Design Name: 
// Module Name:    Round1 
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
module Round1(CLK, RST, LEFT, RIGHT, KEY, LEFT1, RIGHT1);
input CLK;
input RST;
input [32 : 1] LEFT;
input [32 : 1] RIGHT;
input [48 : 1] KEY;
output [32 : 1] LEFT1;
 
 output [32 : 1] RIGHT1;
 wire [32 : 1] LEFT1;
 wire [32 : 1] RIGHT1;
 wire CLK;
 wire RST;
 wire [32 : 1] LEFT;
 wire [32 : 1] RIGHT;
 wire [48 : 1] KEY;
 wire [48 : 1] EXPANSION_PERMUTATION;
 wire [6 : 1] S1_INPUT;
 wire [6 : 1] S2_INPUT;
 wire [6 : 1] S3_INPUT;
 
wire [6 : 1] S4_INPUT;
wire [6 : 1] S5_INPUT;
wire [6 : 1] S6_INPUT;
wire [6 : 1] S7_INPUT;
wire [6 : 1] S8_INPUT;
//wire [48 : 1] SBOX_INPUT;
wire [3 : 0] S1_OUTPUT;
wire [3 : 0] S2_OUTPUT;
wire [3 : 0] S3_OUTPUT;
wire [3 : 0] S4_OUTPUT;
wire [3 : 0] S5_OUTPUT;
wire [3 : 0] S6_OUTPUT;
wire [3 : 0] S7_OUTPUT;
wire [3 : 0] S8_OUTPUT;
wire [32 : 1] S_OUTPUT;
wire [32 : 1] PERMUTATION_OUTPUT;
wire [32 : 1] RIGHT_REG;
//wire [6 : 1] SBOX1_INPUT;
//wire [6 : 1] SBOX2_INPUT;
//wire [6 : 1] SBOX3_INPUT;
//wire [6 : 1] SBOX4_INPUT;
//wire [6 : 1] SBOX5_INPUT;
//wire [6 : 1] SBOX6_INPUT;
//wire [6 : 1] SBOX7_INPUT;
//wire [6 : 1] SBOX8_INPUT;
 
Expansion_Permutation expansion (.RIGHT(RIGHT),.EXPANSION_PERMUTATION(EXPANSION_PERMUTATION));
Xor_Operation expansion_to_xor1 (.EXPANSION_PERMUTATION(EXPANSION_PERMUTATION),.SUBKEY(KEY),.SBOX1_INPUT(S1_INPUT),.SBOX2_INPUT(S2_INPUT),.SBOX3_INPUT(S3_INPUT),.SBOX4_INPUT(S4_INPUT),.SBOX5_INPUT(S5_INPUT),.SBOX6_INPUT(S6_INPUT),.SBOX7_INPUT(S7_INPUT),.SBOX8_INPUT(S8_INPUT));
Sbox_Rom1 s1 (.S1_INPUT(S1_INPUT),.S1_OUTPUT(S1_OUTPUT));
Sbox_Rom2 s2 (.S2_INPUT(S2_INPUT),.S2_OUTPUT(S2_OUTPUT));
Sbox_Rom3 s3 (.S3_INPUT(S3_INPUT),.S3_OUTPUT(S3_OUTPUT));
Sbox_Rom4 s4 (.S4_INPUT(S4_INPUT),.S4_OUTPUT(S4_OUTPUT));
Sbox_Rom5 s5 (.S5_INPUT(S5_INPUT),.S5_OUTPUT(S5_OUTPUT));
Sbox_Rom6 s6 (.S6_INPUT(S6_INPUT),.S6_OUTPUT(S6_OUTPUT));
 
Sbox_Rom7 s7 (.S7_INPUT(S7_INPUT),.S7_OUTPUT(S7_OUTPUT));
Sbox_Rom8 s8 (.S8_INPUT(S8_INPUT),.S8_OUTPUT(S8_OUTPUT));
Sbox_Output sout (.S1_OUTPUT(S1_OUTPUT),.S2_OUTPUT(S2_OUTPUT),.S3_OUTPUT(S3_OUTPUT),.S4_OUTPUT(S4_OUTPUT),.S5_OUTPUT(S5_OUTPUT),.S6_OUTPUT(S6_OUTPUT),.S7_OUTPUT(S7_OUTPUT),.S8_OUTPUT(S8_OUTPUT),.S_OUTPUT(S_OUTPUT));
 
Permutation s_to_permutation (.S_OUTPUT(S_OUTPUT),.PERMUTATION_OUTPUT(PERMUTATION_OUTPUT));
Xor_Permutation permut_xor (.PERMUTATION_OUTPUT(PERMUTATION_OUTPUT),.LEFT(LEFT),.RIGHT_REG(RIGHT_REG));
Reg32 input_to_round2 (.CLK(CLK),.RST(RST),.RIGHT(RIGHT),.RIGHT_REG(RIGHT_REG),.LEFT_REG1(LEFT1),.RIGHT_REG1(RIGHT1));

endmodule
