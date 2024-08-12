
//`include "uvm_pkg.sv"
`include "uvm_macros.svh"
  import uvm_pkg::*;

//Include all file
`include "my_sequence.sv"
`include "my_driver.sv"
`include "my_monitor.sv"
 `include "dut_interface.sv"
 `include "my_test.sv"

module testbench;


  parameter DATAWIDTH = 4'd10;
  parameter CRCWIDTH  = 4'd4;

  //Create interface
  dutInterface dutif();
  
  //DUT
  crc_encoder dut(
    .clk(dutif.clk),
    .resetn(dutif.resetn),
    .ctrlen(dutif.ctrlen),
    .datain(dutif.datain),
    .genPoly(dutif.genPoly),
    .crcSeq(dutif.crcSeq),
    .crcready(dutif.crcready)
	 );
  
  
  //Clocks
  always begin
    dutif.clk = 0;
    #5;
    dutif.clk = 1;
    #5;
  end
  
  initial begin
 //       Place the interface into the UVM configuration database
   uvm_config_db#(virtual dutInterface)::set(null, "*", "dutIf", dutif);
    
//    Start the test
   run_test("myTest");
    #10000;
    $finish;
    
  end

endmodule




