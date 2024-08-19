parameter DATAWIDTH = 8'd32;
parameter CRCWIDTH  = 8'd16;
parameter NUM_TEST = 8'd10;
//`include "uvm_pkg.sv"
`include "uvm_macros.svh"
  import uvm_pkg::*;

//Include all file
`include "CRC_Verification.sv"
`include "my_sequence.sv"
`include "my_driver.sv"
`include "my_scoreboard.sv"
`include "my_monitor.sv"
`include "my_interface.sv"
`include "my_agent.sv"
`include "my_evn.sv"
`include "my_test.sv"

module testbench;

  //Create interface
  dutInterface dutif();
  vfInterface vfif();
  reg clk;
  
  //DUT
  crcencoder dut(
    .clk(dutif.clk),
    .resetn(dutif.resetn),
    .ctrlen(dutif.ctrlen),
    .datain(dutif.datain),
    .genPoly(dutif.genPoly),
    .crcSeq(dutif.crcSeq),
    .crcready(dutif.crcready)
	 );
  
  crcParallelFull vip(
    .clk(vfif.clk),
    .rstN(vfif.rstN),
    .ctrlEn(vfif.ctrlEn),
    .dataIn(vfif.dataIn),
    .genPoly(vfif.genPoly),
    .initXorValue(vfif.initXorValue),
    .refInEn(vfif.refInEn),
    .refOutEn(vfif.refOutEn),
    .finalXorValue(vfif.finalXorValue),
    .crcOut(vfif.crcOut),
    .crcReady(vfif.crcReady)
  );
  
  assign dutif.clk = clk;
  assign vfif.clk = clk;
  //Clocks
  always begin
    clk = 0;
    #5;
    clk = 1;
    #5;
  end
  
  initial begin
 //       Place the interface into the UVM configuration database
   uvm_config_db#(virtual dutInterface)::set(null, "*", "dutIf", dutif);
   uvm_config_db#(virtual vfInterface)::set(null, "*", "vfIf", vfif);

    
//    Start the test
   run_test("myTest");

    
  end

endmodule



