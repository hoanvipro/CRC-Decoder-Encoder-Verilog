class dutMonitor extends uvm_monitor;
  integer i = 1;
  //Register factory
  `uvm_component_utils(dutMonitor)
  
  logic [CRCWIDTH - 1 : 0] crcdut;
  
  uvm_analysis_port #(logic [CRCWIDTH - 1 : 0]) crcdut_toScoreboard;
  
  // Constructor
  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction
  
  //Interface
  virtual dutInterface dutif;
  
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    //Check interface connection
        crcdut_toScoreboard = new("crcdut_toScoreboard", this);
    if(!uvm_config_db#(virtual dutInterface)::get(this,"","dutIf",dutif)) begin
      `uvm_error("Monitor","Can NOT get DUT interface!!!")
    end
  endfunction
  
  //Run phase
  virtual task run_phase(uvm_phase phase);
    super.run_phase(phase);
    forever begin
      @(posedge dutif.clk) 
      begin
        #1
        if(~dutif.crcready)
            i = 0;
        else if(dutif.crcready & i < 1) 
          begin
          `uvm_info("OutMonitor",$sformatf("CRC Sequence is: %8h", dutif.crcSeq), UVM_LOW)
            crcdut = dutif.crcSeq;
            crcdut_toScoreboard.write(crcdut);
            i = i + 1;
          end
        end
    end
  endtask
endclass
          
class vfMonitor extends uvm_monitor;
  //Register factory
  `uvm_component_utils(vfMonitor)
        integer i = 1;
  
  logic [CRCWIDTH - 1 : 0] crcvf;
  
  uvm_analysis_port #(logic [CRCWIDTH - 1 : 0]) crcvf_toScoreboard;
  
  // Constructor
  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction
  
  //Interface
  virtual vfInterface vfIf;
  
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    
    crcvf_toScoreboard = new("crcvf_toScoreboard", this);
    //Check interface connection
    if(!uvm_config_db#(virtual vfInterface)::get(this,"","vfIf",vfIf)) begin
      `uvm_error("Monitor","Can NOT get DUT interface!!!")
    end
  endfunction
  
  //Run phasd
  virtual task run_phase(uvm_phase phase);
    super.run_phase(phase);
    forever begin

      @(posedge vfIf.clk) begin
        #1
        if(~vfIf.rstN) 
          `uvm_info("VF Monitor","VF IP Reset", UVM_LOW)
          if(~vfIf.crcReady & vfIf.rstN)
            i = 0;
        else if(vfIf.crcReady & vfIf.rstN & i < 1) begin
          `uvm_info("VF Monitor",$sformatf("CRC Sequence is: %8h", vfIf.crcOut), UVM_LOW)
          crcvf = vfIf.crcOut;
          crcvf_toScoreboard.write(crcvf);
          i = i + 1;
         end
        end
    end
  endtask
endclass
  
