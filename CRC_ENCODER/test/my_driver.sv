 class myDriver extends uvm_driver # (myTransaction);
  //Register to factory
  `uvm_component_utils(myDriver)
  
  //Create virtual interface and transaction
  virtual dutInterface dutIf;
  myTransaction myPacket;
  
  //Constructor
  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction
  
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if(!uvm_config_db#(virtual dutInterface)::get(this, "", "dutIf", dutIf)) begin
      `uvm_error("", "uvm_config_db::get failed")
    end
  endfunction 
  //Run face
  virtual task run_phase(uvm_phase phase);
    //Set resetn in 1 clock
    @(posedge dutIf.clk);
	dutIf.resetn = 0;
    @(posedge dutIf.clk);
    dutIf.resetn = 1;
    //Get item from sequencer and drive interfacce
    forever begin
      seq_item_port.get_next_item(myPacket);
      `uvm_info("DUT Driver",$sformatf("Datain of get item is: %8h", myPacket.datain), UVM_LOW)
      sendata();
      seq_item_port.item_done();  	
    end
  endtask
  
  virtual task sendata();
    integer i = 0;
    // Wiggle pins of DUT
	//Set genPoly and datain on interface
   //   dutIf.genPoly = 6'b100101;
    dutIf.genPoly = 16'h8005;
      dutIf.datain = myPacket.datain;
	//Set ctrlen in 1 clock
      dutIf.ctrlen = 1;
      @(posedge dutIf.clk);
      dutIf.ctrlen = 0;
    //Wait 10,5 clocks
    while(i < DATAWIDTH) begin
      @(posedge dutIf.clk);
       begin
//     `uvm_info("Driver Clock",
//               $sformatf("Wait i = %d",i), UVM_MEDIUM)
         i = i + 1; end
     end
    @(negedge dutIf.clk); 
  endtask
    	
  
endclass




class vfDriver extends uvm_driver # (myTransaction);
   //Register to factory
  `uvm_component_utils(vfDriver)
  
  //Create virtual interface and transaction
  virtual vfInterface vfIf;
  myTransaction myPacket;
  
  //Constructor
  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction
  
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if(!uvm_config_db#(virtual vfInterface)::get(this, "", "vfIf", vfIf)) begin
      `uvm_error("", "uvm_config_db::get failed")
    end
  endfunction 
  //Run face
  virtual task run_phase(uvm_phase phase);
    //Set resetn in 1 clock
    @(posedge vfIf.clk);
	vfIf.rstN = 0;
    @(posedge vfIf.clk);
   vfIf.rstN = 1;
    //Get item from sequencer and drive interfacce
    forever begin
      `uvm_info("VF Driver", "Run phase",  UVM_MEDIUM)
      seq_item_port.get_next_item(myPacket);
      `uvm_info("VF Driver",$sformatf("Datain of get item is: %8h", myPacket.datain), UVM_LOW)
      sendata();
      seq_item_port.item_done();  	
    end
  endtask
  
  virtual task sendata();
    integer i = 0;
    vfIf.ctrlEn = 1'b0;
    vfIf.genPoly = 16'h8005;
    vfIf.initXorValue = 16'h0000;
    vfIf.finalXorValue = 16'h0000;
    vfIf.refInEn  = 1'b0;
    vfIf.refOutEn = 1'b0;
//     //Wait three clocks
     @(posedge vfIf.clk);
//     @(posedge vfIf.clk);
//     @(posedge vfIf.clk);
    //Set data
    vfIf.dataIn = myPacket.datain; 
    vfIf.ctrlEn = 1'b1;
    @(posedge vfIf.clk);
    vfIf.ctrlEn = 1'b0;
    @(negedge vfIf.clk); 
  endtask
    	
endclass
