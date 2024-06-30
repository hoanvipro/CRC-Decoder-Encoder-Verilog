`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:06:04 05/25/2022
// Design Name:   CRC_4_DE
// Module Name:   C:/Hoan/hoc tap/TKHTVMTH/CRC_4/CRC_4_DE_tb.v
// Project Name:  CRC_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CRC_4_DE
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CRC_4_DE_tb;
	reg clk;
	reg rst;
	reg [11:0] codeword;
	reg en;
	wire [3:0] remainder;
	wire hoanthanh;
	CRC_4_DE uut (
		.clk(clk), 
		.rst(rst), 
		.codeword(codeword), 
		.remainder(remainder), 
		.en(en), 
		.hoanthanh(hoanthanh) );

	initial begin
		rst =0;
		clk = 0;
		en = 1;
		codeword = 12'b110100111001;
		#400
		rst = 1;
		#20
		rst = 0;
		en = 0;
		#50
		en = 1;
	end
	always 
		begin
			#10;
			clk=~clk;
		end
      
endmodule

