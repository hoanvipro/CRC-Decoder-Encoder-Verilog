//Transaction
class myTransaction extends uvm_sequence_item;
  rand logic [9:0] datain;
  rand logic [4:0] genPoly;
  //Register to factory
  `uvm_object_utils_begin(myTransaction)
    `uvm_field_int(datain, UVM_ALL_ON)
    `uvm_field_int(genPoly, UVM_ALL_ON)
  `uvm_object_utils_end
  
  //Constructor
  function new(string name = "myTransaction");
    super.new(name);
  endfunction
 
  
endclass: myTransaction
//Sequencer
class mySequencer extends uvm_sequencer#(myTransaction);
	//Register to factory
  `uvm_component_utils(mySequencer)
  
	//Constructor
	function new (string name = "mySequencer", uvm_component parent = null);
		super.new(name,parent);
	endfunction
  
endclass: mySequencer
//Sequence
class mySequence extends uvm_sequence#(myTransaction);
  //Register to factory
  `uvm_object_utils(mySequence)
  //Create transaction
  myTransaction mytransaction;
  
  //Constructor
  function new (string name = "mySequence");
    super.new(name);
    mytransaction = myTransaction::type_id::create("mytransaction");
  endfunction
  
  //Body of Sequence
  task body();
    repeat(5) 
      begin
//       req = myTransaction::type_id::create("req");
//         start_item(req);

//       if(!mytransaction.randomize()) begin
//         `uvm_error("MY_SEQUENCE", "Randomize failed.");
//       end
//         `uvm_info("Sequence",$sformatf("Datain is: %b", mytransaction.datain), UVM_LOW)
//         finish_item(req);
        `uvm_do(mytransaction)
    end
  endtask: body
  
endclass: mySequence
      
  


