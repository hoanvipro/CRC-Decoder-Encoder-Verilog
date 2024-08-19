//My agent
class myAgent extends uvm_agent;
  //Register to factory
  `uvm_component_utils(myAgent)
  //Create driver, sequencer and monitor
  myDriver mydriver;
  mySequencer mysequencer;
  dutMonitor dutmonitor;
  //Constructor
  function new(string name = "myAgent", uvm_component parent);
      super.new(name, parent);
  endfunction
  //Build phase
    function void build_phase(uvm_phase phase);
      super.build_phase(phase);
      //Factory registration
      mydriver    = myDriver::type_id::create("mydriver",this);
      mysequencer = mySequencer::type_id::create("mysequencer",this);
      dutmonitor = dutMonitor::type_id::create("dutMonitor",this);
  endfunction
	//Connect phase
  function void connect_phase(uvm_phase phase);
      super.connect_phase(phase);
      mydriver.seq_item_port.connect(mysequencer.seq_item_export);
  endfunction
  
//My agent
endclass: myAgent

//VF agent
class vfAgent extends uvm_agent;
  //Register to factory
  `uvm_component_utils(vfAgent)
  //Create driver, sequencer and monitor
  vfDriver vfdriver;
  mySequencer vfsequencer;
  vfMonitor vfmonitor;
  //Constructor
  function new(string name = "vfAgent", uvm_component parent);
      super.new(name, parent);
  endfunction
  //Build phase
    function void build_phase(uvm_phase phase);
      super.build_phase(phase);
      //Factory registration
      vfdriver    = vfDriver::type_id::create("vfdriver",this);
      vfsequencer = mySequencer::type_id::create("vfsequencer",this);
      vfmonitor = vfMonitor::type_id::create("vfMonitor",this);
  endfunction
	//Connect phase
  function void connect_phase(uvm_phase phase);
      super.connect_phase(phase);
    vfdriver.seq_item_port.connect(vfsequencer.seq_item_export);
  endfunction
  
//VF agent
endclass: vfAgent
