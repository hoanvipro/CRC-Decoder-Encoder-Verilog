//My agent
class myAgent extends uvm_agent;
  //Register to factory
  `uvm_component_utils(myAgent)
  //Create driver, sequencer and monitor
  myDriver mydriver;
  mySequencer mysequencer;
  myMonitor mymonitor;
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
      mymonitor = myMonitor::type_id::create("myMonitor",this);
  endfunction
	//Connect phase
  function void connect_phase(uvm_phase phase);
      super.connect_phase(phase);
      mydriver.seq_item_port.connect(mysequencer.seq_item_export);
  endfunction
  
//My agent
endclass: myAgent

class myEnv extends uvm_env;
  //Register to factory
  `uvm_component_utils(myEnv)
  myAgent myagent;
  
  //Constructor
  function new (string name = "myEnv", uvm_component parent = null);
		super.new(name,parent);
  endfunction
  
  //build phase
  function void build_phase(uvm_phase phase);
		super.build_phase(phase);
    //Factory registration
		myagent = myAgent::type_id::create("myagent",this);
	endfunction
  
  //Connect phase
  function void connect_phase(uvm_phase phase);
		super.connect_phase(phase);
	endfunction
  
endclass: myEnv

class myTest extends uvm_test;
  //Register to factory
	`uvm_component_utils(myTest)
  
  //Create env and sequence
  myEnv myenv;
  mySequence OmySequence; 
  
  //Constructor
  function new (string name = "myTest", uvm_component parent = null);
		super.new(name,parent);
	endfunction
  
  //Build phase
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    //Factory registration
    myenv = myEnv::type_id::create("myenv",this);
    OmySequence = mySequence::type_id::create("OmySequence",this);
  endfunction
  
  //Run phase
  task run_phase(uvm_phase phase);
    		super.run_phase(phase);
    phase.raise_objection(this);
		fork
      begin
        OmySequence.start(myenv.myagent.mysequencer);
      end
			begin
				#1ms;
				`uvm_error("TEST SEQUENCE", "TIMEOUT!!!")
			end
		join_any
		disable fork;
		phase.drop_objection(this);
          	endtask
  //
endclass: myTest




