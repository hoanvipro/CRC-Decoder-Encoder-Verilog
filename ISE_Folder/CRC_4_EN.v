`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:03:08 05/25/2022 
// Design Name: 
// Module Name:    CRC_4_EN 
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
module CRC_4_EN(clk, rst, data, CRC, en, hoanthanh
    ); 
	 input en;
	 input clk, rst;
	 input [7:0] data;
	parameter khong = 1'b0;
	parameter mot = 1'b1;
	parameter bochia = 5'b10011;
	wire [7:0] datavao = data;
	reg i;
	reg [3:0] m;
	reg [11:0] temp;
	output [3:0] CRC;
	output hoanthanh;
	initial begin
	m=12;
	temp = 12'b0;
	i = 0;
	end
	
	always@(posedge clk)
	begin
	if(rst == 1) begin
		m = 12;
		i = 1'b0;
		end
	else if(m == 12) begin
			temp[11] = datavao[7];
			temp[10] = datavao[6];
			temp[9]  = datavao[5];
			temp[8]  = datavao[4];
			temp[7]  = datavao[3];
			temp[6]  = datavao[2];
			temp[5]  = datavao[1];
			temp[4]  = datavao[0];
			temp[3:0] = 1'b0;
			m = 11;
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
	assign CRC = temp[3:0];
endmodule
