
class myTest extends uvm_test;
  //Register to factory
	`uvm_component_utils(myTest)
  
  //Create env and sequence
  myEnv myenv;
  mySequence OmySequence; 
  virtual_seq virseq;
  
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
    virseq = virtual_seq::type_id::create("VirSequence",this);
  endfunction
  
  //Run phase
  task run_phase(uvm_phase phase);
    		super.run_phase(phase);
    phase.raise_objection(this);
		fork
//       begin
      //  OmySequence.start(myenv.myagent.mysequencer);
      //  OmySequence.start(myenv.vfagent.vfsequencer);
          
         // OmySequence.start(myenv.evnsequencer);
          virseq.start(myenv.evnsequencer);
//      end
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



