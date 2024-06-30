`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:04:41 05/25/2022 
// Design Name: 
// Module Name:    CRC_4_DE 
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
module CRC_4_DE(clk, rst, codeword, remainder, en, hoanthanh
    );
 input en;
	 input clk, rst;
	 input [11:0] codeword;
	parameter khong = 1'b0;
	parameter mot = 1'b1;
	parameter bochia = 5'b10011;
	wire [11:0] datavao = codeword;
	reg i;
	reg [4:0] m;
	reg [11:0] temp;
	output [3:0] remainder;
	output hoanthanh;
	initial begin
	m=12;
	temp = 12'b0;
	i = 1'b0;
	end
	
	always@(posedge clk)
	begin
	if(rst == 1) begin
		m = 12;
		i = 1'b0;
		end
	else if(m == 12) begin
			temp = datavao;
			m = m - 1;
	end
	else if (m == 3 || en == 0)
			begin
				temp[3:0] = temp[3:0];
				i = (m == 3)?1'b1:1'b0;
				end
	else 
	begin	
		case(temp[m])
			khong: m <= m-1;
			
			mot: begin
				temp[m] 		<= temp[m] 	^ bochia[4];
				temp[m-1] 	<= temp[m-1] ^ bochia[3];
				temp[m-2] 	<= temp[m-2] ^ bochia[2];
				temp[m-3] 	<= temp[m-3] ^ bochia[1];
				temp[m-4] 	<= temp[m-4] ^ bochia[0];
				
				end	
			endcase	end
	end
	assign hoanthanh = i;
	assign remainder = temp[3:0];

endmodule
