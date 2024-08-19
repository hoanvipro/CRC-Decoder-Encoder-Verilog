module crcParallelFull (
   clk,
   rstN,
   ctrlEn,
   dataIn,
   genPoly,
   initXorValue,
   refInEn,
   refOutEn,
   finalXorValue,
   crcOut,
   crcReady
   );
  parameter CRC_WIDTH = 16;
  parameter DWIDTH    = 32; //Must be n byte with n=1,2,3,4,...
  parameter TMP_WIDTH = DWIDTH*CRC_WIDTH;
  //
  //Inputs
  //
  input clk;    //System clock
  input rstN;   //System Reset
  input ctrlEn; //CRC enable
  input [DWIDTH-1:0] dataIn; //Data input
  input [CRC_WIDTH-1:0] genPoly; //Generator Polynominal
  input [CRC_WIDTH-1:0] initXorValue; //Initial value, set 0 if don't use
  input refInEn;  //Reverse bit order in each input byte
  input refOutEn; //Reverse bit order of CRC output
  input [CRC_WIDTH-1:0] finalXorValue; //Final XOR value, set 0 if don't use
  //
  //Outputs
  //
  output wire [CRC_WIDTH-1:0] crcOut;
  output reg crcReady;
  //
  //Internal signals
  //
  wire [DWIDTH-1:0] xorInitInput;
  wire [DWIDTH-1:0] refInput;
  reg  [DWIDTH-1:0] dataInReg;
  reg  [CRC_WIDTH-1:0] GenPolyReg;
  wire [TMP_WIDTH-1:0]  subCrc;
  wire [DWIDTH+CRC_WIDTH-1:0] dataInCal; 
  reg [CRC_WIDTH-1:0] crcSeq;
  wire [CRC_WIDTH-1:0] refOutput;
  reg invOutEn;
  //--------------------------------------
  // (1) Reflected input
  //--------------------------------------
  generate
    genvar j;
    for (j = 0; j < (DWIDTH/8); j=j+1) begin: RefIn
      assign refInput[j*8+0] = dataIn[j*8+7];
      assign refInput[j*8+1] = dataIn[j*8+6];
      assign refInput[j*8+2] = dataIn[j*8+5];
      assign refInput[j*8+3] = dataIn[j*8+4];
      assign refInput[j*8+4] = dataIn[j*8+3];
      assign refInput[j*8+5] = dataIn[j*8+2];
      assign refInput[j*8+6] = dataIn[j*8+1];
      assign refInput[j*8+7] = dataIn[j*8+0];
    end
  endgenerate
  //--------------------------------------
  // (2) XOR input
  //--------------------------------------
  assign xorInitInput = (refInEn? refInput[DWIDTH-1:0]: dataIn) 
  ^ {initXorValue[CRC_WIDTH-1:0], {DWIDTH-CRC_WIDTH{1'b0}}};
  //--------------------------------------
  // (3) Store data and Generator polynomial
  //--------------------------------------
  always @ (posedge clk) begin
    if (ctrlEn) begin
      GenPolyReg[CRC_WIDTH-1:0] <= genPoly[CRC_WIDTH-1:0];
      dataInReg[DWIDTH-1:0]   <= xorInitInput[DWIDTH-1:0];
    end
  end
  assign dataInCal[DWIDTH+CRC_WIDTH-1:0] =
         {dataInReg[DWIDTH-1:0], {CRC_WIDTH{1'b0}}};
  //---------------------------------
  // (4) Ready signal
  //--------------------------------------
  always @ (posedge clk, negedge rstN) begin
    if (~rstN)
      crcReady <= 1'b1;
    else if (ctrlEn)
      crcReady <= 1'b0;
    else
      crcReady <= 1'b1;
  end
  //--------------------------------------
  // (5) Combinational logic calculates CRC
  //--------------------------------------
  generate
    genvar i;
    assign subCrc[TMP_WIDTH-1:(TMP_WIDTH-1)-(CRC_WIDTH-1)]
           = dataInCal[DWIDTH+CRC_WIDTH-1]?
             dataInCal[DWIDTH+CRC_WIDTH-2:(DWIDTH+CRC_WIDTH-1)-(CRC_WIDTH-1)-1] ^ GenPolyReg[CRC_WIDTH-1:0]
           : dataInCal[DWIDTH+CRC_WIDTH-2:(DWIDTH+CRC_WIDTH-1)-(CRC_WIDTH-1)-1];
    for (i=1; i < DWIDTH; i=i+1) begin: CrcCal
      assign subCrc[TMP_WIDTH-1-(i*CRC_WIDTH):(TMP_WIDTH-1)-(i*CRC_WIDTH)-(CRC_WIDTH-1)]
              = subCrc[TMP_WIDTH-1-(i-1)*CRC_WIDTH]? 
                  {subCrc[(TMP_WIDTH-1)-((i-1)*CRC_WIDTH)-1:(TMP_WIDTH-1)-(i*CRC_WIDTH-1)],
                  dataInCal[(DWIDTH+CRC_WIDTH-1)-CRC_WIDTH-i]} ^ GenPolyReg[CRC_WIDTH-1:0]
                : {subCrc[(TMP_WIDTH-1)-((i-1)*CRC_WIDTH)-1:(TMP_WIDTH-1)-(i*CRC_WIDTH-1)],
                dataInCal[(DWIDTH+CRC_WIDTH-1)-CRC_WIDTH-i]};
    end
  endgenerate
  //--------------------------------------
  // (6) CRC register
  //--------------------------------------
  always @ (posedge clk, negedge rstN) begin
    if (~rstN)
      crcSeq[CRC_WIDTH-1:0] <= {CRC_WIDTH{1'b0}};
    else if (~crcReady)
      crcSeq[CRC_WIDTH-1:0] <= subCrc[CRC_WIDTH-1:0];
  end
  //--------------------------------------
  // (7) Reflected Output
  //--------------------------------------
  generate
    genvar k;
    for (k = 0; k < CRC_WIDTH; k=k+1) begin: RefOut
      assign refOutput[k] = crcSeq[CRC_WIDTH-1-k];
    end
  endgenerate
  //--------------------------------------
  //Final XOR Output
  //--------------------------------------
  always @ (posedge clk) begin
    if (~rstN)
      invOutEn <= 1'b0;
    else if (ctrlEn)
      invOutEn <= refOutEn;
  end
  assign crcOut[CRC_WIDTH-1:0] = (invOutEn? refOutput: crcSeq)
  ^ finalXorValue[CRC_WIDTH-1:0];
  //-----------------------------------------------------------
  //log2 function - Not for synthesizing
  //Only use to calculate the parameter value
  //-----------------------------------------------------------
  function integer clog2; 
    input integer value; 
	  integer i;
    begin 
      clog2 = 0;
      for(i = 0; 2**i < value; i = i + 1) 
        clog2 = i + 1; 
      end
  endfunction

endmodule //crcParallelFull
