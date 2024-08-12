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
      `uvm_info("Driver", "Run phase",  UVM_MEDIUM)
      seq_item_port.get_next_item(myPacket);
      `uvm_info("Driver",$sformatf("Datain of get item is: %b", myPacket.datain), UVM_LOW)
      sendata();
      seq_item_port.item_done();  	
    end
  endtask
  
  virtual task sendata();
    // Wiggle pins of DUT
	//Set genPoly and datain on interface
      dutIf.genPoly = 5'b10011;
      dutIf.datain = myPacket.datain;
	//Set ctrlen in 1 clock
      dutIf.ctrlen = 1;
      @(posedge dutIf.clk);
      dutIf.ctrlen = 0;
    //Wait 10,5 clocks
        integer i = 0;
    while(i < 10) begin
      @(posedge dutIf.clk); begin
    `uvm_info("Driver Clock",
              $sformatf("Wait i = %d",i), UVM_MEDIUM)
        i = i + 1; end
    end
    @(negedge dutIf.clk); 
  endtask
    	
  
endclass
