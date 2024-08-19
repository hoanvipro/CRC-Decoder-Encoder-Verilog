class myEnv extends uvm_env;
  //Register to factory
  `uvm_component_utils(myEnv)
  myAgent myagent;
  vfAgent vfagent;
  virtual_sequencer evnsequencer;
  myScoreboard myscoreboard;
  //Constructor
  function new (string name = "myEnv", uvm_component parent = null);
		super.new(name,parent);
  endfunction
  
  //build phase
  function void build_phase(uvm_phase phase);
		super.build_phase(phase);
    //Factory registration
		myagent = myAgent::type_id::create("myagent",this);
    	vfagent = vfAgent::type_id::create("vfagent",this);
    	evnsequencer = virtual_sequencer::type_id::create("vnsequencer",this);
        myscoreboard = myScoreboard::type_id::create("myScoreboard",this);

	endfunction
  
  //Connect phase
  function void connect_phase(uvm_phase phase);
		super.connect_phase(phase);
    evnsequencer.seqr_A = myagent.mysequencer;
    evnsequencer.seqr_B = vfagent.vfsequencer;
    //Connect Monitor to Scoreboard
    myagent.dutmonitor.crcdut_toScoreboard.connect(myscoreboard.aimp_frmMonitorDUT);
    vfagent.vfmonitor.crcvf_toScoreboard.connect(myscoreboard.aimp_frmMonitorVF);

	endfunction

  
endclass: myEnv
