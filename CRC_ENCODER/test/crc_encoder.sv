module crc_encoder (
  clk,
  resetn,
  ctrlen,
  datain,
  genPoly,
  crcSeq,
  crcready);
  
  parameter DATAWIDTH = 4'd10;
  parameter CRCWIDTH  = 4'd4;
  
  //Input
  input clk;
  input resetn;
  input ctrlen;
  input [DATAWIDTH - 1:0] datain;
  input [CRCWIDTH :0] genPoly;
  //Ouput
  output wire [CRCWIDTH - 1 : 0] crcSeq;
  output crcready;
    
  //Status
  reg  calStatus;
  wire crcMaxcounter;
  reg  [3:0] crccounter;
  
  //Reg data
  reg [CRCWIDTH - 1:0]           crcSeqreg;
  reg [(DATAWIDTH - 1) - CRCWIDTH: 0] dataLSBreg;
  reg [CRCWIDTH - 1 : 0] genPolyreg;

  
  //Set calStatus
  
  always@(posedge clk) begin
    if(~resetn)
      calStatus <= 1'b0;
    else if(crcMaxcounter)
        calStatus <= 1'b0;
    else if (ctrlen)
      	calStatus <= 1'b1;
    else
      	calStatus <= calStatus;
  end
  
  assign crcready = ~calStatus;
  
  //Set genPolyreg
  always@(posedge clk) begin
    if(~resetn)
      genPolyreg <= 0;
    else if(ctrlen)
      genPolyreg <= genPoly[CRCWIDTH -1 :0];
    else
      genPolyreg <= genPolyreg;
  end
  
  //Set counter Max
  
  always@(posedge clk) begin
    if(~resetn)
      crccounter <= 4'b0;
    else if(crcMaxcounter)
      crccounter <= 4'b0;
    else if(calStatus)
      crccounter <= crccounter + 1'b1;
    else 
      crccounter <= crccounter;
  end
  
  assign crcMaxcounter = (crccounter == DATAWIDTH - 1) ? 1'b1 : 1'b0;
  
  //Set LSB data
  always@(posedge clk) begin
    if(~resetn)
      dataLSBreg <= 0;
    else if(ctrlen)
      dataLSBreg <= datain[(DATAWIDTH - 1) - CRCWIDTH: 0];
    else if (calStatus)
      dataLSBreg <= #1 dataLSBreg << 1;
    else
      dataLSBreg <= dataLSBreg;
  end
  
  //Set CRC Sequence
  always@(posedge clk) begin
    if(~resetn)
      crcSeqreg <= 0;
   else if(ctrlen)
      crcSeqreg <= datain[DATAWIDTH -1 : DATAWIDTH- CRCWIDTH];
    else if(calStatus) begin
     if(crcSeqreg[CRCWIDTH -1]) begin
        crcSeqreg[CRCWIDTH -1 : 1] <= crcSeqreg[CRCWIDTH -2 : 0] ^ genPolyreg[CRCWIDTH -1 : 1];
		  crcSeqreg[0] <= dataLSBreg[(DATAWIDTH - 1) - CRCWIDTH] ^ genPolyreg[0];

		  end
      else
   	crcSeqreg[CRCWIDTH -1 : 0] <= {crcSeqreg[CRCWIDTH -2 : 0], dataLSBreg[(DATAWIDTH - 1) - CRCWIDTH]};
      end
    else
      crcSeqreg <= crcSeqreg;
  end

  assign crcSeq = crcSeqreg;  
  
  
endmodule
