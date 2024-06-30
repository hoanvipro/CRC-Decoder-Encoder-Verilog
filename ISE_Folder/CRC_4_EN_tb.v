`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:03:47 05/25/2022
// Design Name:   CRC_4_EN
// Module Name:   C:/Hoan/hoc tap/TKHTVMTH/CRC_4/CRC_4_EN_tb.v
// Project Name:  CRC_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CRC_4_EN
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CRC_4_EN_tb;
	reg clk;
	reg rst;
	reg [7:0] data;
	reg en;
	wire [3:0] CRC;
	wire hoanthanh;
	CRC_4_EN uut (
		.clk(clk), 
		.rst(rst), 
		.data(data), 
		.CRC(CRC), 
		.en(en), 
		.hoanthanh(hoanthanh) );

	initial 
	begin
		rst =0;
		clk = 0;
		en = 1;
		data = 8'b11010011;
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

