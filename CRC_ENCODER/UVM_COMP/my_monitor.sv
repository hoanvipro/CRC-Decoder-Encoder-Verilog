class myMonitor extends uvm_monitor;
  
  //Register factory
  `uvm_component_utils(myMonitor)
  
  // Constructor
  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction
  
  //Interface
  virtual dutInterface dutif;
  
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    //Check interface connection
    if(!uvm_config_db#(virtual dutInterface)::get(this,"","dutIf",dutif)) begin
      `uvm_error("Monitor","Can NOT get DUT interface!!!")
    end
  endfunction
  
  //Run phasd
  virtual task run_phase(uvm_phase phase);
    super.run_phase(phase);
    forever begin
      @(posedge dutif.clk) begin
        #1
        if(dutif.crcready) 
         `uvm_info("Monitor",$sformatf("CRC Sequence is: %b", dutif.crcSeq), UVM_LOW)
        end
    end
  endtask
endclass
         
  
