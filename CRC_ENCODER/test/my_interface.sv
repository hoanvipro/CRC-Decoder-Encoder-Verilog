//My interface
interface dutInterface;
  logic clk;
  logic resetn;
  logic ctrlen;
  logic [DATAWIDTH - 1 : 0] datain;
  logic [CRCWIDTH : 0] genPoly;
  logic [CRCWIDTH - 1 : 0] crcSeq;
  logic crcready;
endinterface

interface vfInterface;
  logic clk;   
  logic rstN;   
  logic ctrlEn; 
  logic [DATAWIDTH-1:0] dataIn; 
  logic [CRCWIDTH-1:0] genPoly; 
  logic [CRCWIDTH-1:0] initXorValue;
  logic refInEn;  
  logic refOutEn;
  logic [CRCWIDTH-1:0] finalXorValue;
  logic [CRCWIDTH-1:0] crcOut;
  logic crcReady;
endinterface;
