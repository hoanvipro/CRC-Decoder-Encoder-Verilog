//My interface
interface dutInterface;
  logic clk;
  logic resetn;
  logic ctrlen;
  logic [9:0] datain;
  logic [4 :0] genPoly;
  logic [3 : 0] crcSeq;
  logic crcready;
endinterface
