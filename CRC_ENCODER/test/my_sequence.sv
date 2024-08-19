//Transaction
class myTransaction extends uvm_sequence_item;
  rand logic [DATAWIDTH - 1:0] datain;
  rand logic [CRCWIDTH:0] genPoly;
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


// Virtual p_sequencer
class virtual_sequencer extends uvm_sequencer;
  `uvm_component_utils(virtual_sequencer)
  mySequencer seqr_A;
  mySequencer seqr_B;

  function new(string name = "virtual_sequencer", uvm_component parent = null);
    super.new(name, parent);
  endfunction
endclass 



// Virtual sequence
// class virtual_seq extends uvm_sequence #(myTransaction);
//   mySequence Aseq;
//   mySequence Bseq;  
  
//   mySequencer seqr_A;
//   mySequencer seqr_B;
//   `uvm_object_utils(virtual_seq)
//   `uvm_declare_p_sequencer(virtual_sequencer)
  
//   function new (string name = "virtual_seq");
//     super.new(name);
//   endfunction
  
//   task body();
//     `uvm_info(get_type_name(), "virtual_seq: Inside Body", UVM_LOW);
//     Aseq = mySequence::type_id::create("Aseq");
//     Bseq = mySequence::type_id::create("Bseq");
//     fork
//         Aseq.start(p_sequencer.seqr_A);
//         Bseq.start(p_sequencer.seqr_B);
//     join
//   endtask
// endclass

class virtual_seq extends uvm_sequence #(myTransaction);
//   mySequence Aseq;
//   mySequence Bseq;  
  
  mySequencer seqr_A;
  mySequencer seqr_B;
  
  myTransaction vme_txn1;
  myTransaction vme_txn2;
  
  `uvm_object_utils(virtual_seq)
  `uvm_declare_p_sequencer(virtual_sequencer)
  
  function new (string name = "virtual_seq");
    super.new(name);
  endfunction
  
  task body();
`uvm_info(get_type_name(), "virtual_seq: Inside Body", UVM_LOW);
    repeat(NUM_TEST)    
      begin
    vme_txn1 = myTransaction::type_id::create( .name( "vme_txn1" ) );
    vme_txn2 = myTransaction::type_id::create( .name( "vme_txn2" ) );
    
    if (!vme_txn1.randomize())
      `uvm_error("RNDERR", "Can't randomize transaction");
    
    vme_txn2.copy(vme_txn1);

    vme_txn1.set_sequencer(p_sequencer.seqr_A);
    vme_txn2.set_sequencer(p_sequencer.seqr_B);
    

//     Aseq = mySequence::type_id::create("Aseq");
//     Bseq = mySequence::type_id::create("Bseq");
//     fork
//         Aseq.start(p_sequencer.seqr_A);
//         Bseq.start(p_sequencer.seqr_B);
//     join

        fork
          begin
            start_item(vme_txn1);
            finish_item(vme_txn1);
          end
          begin
            start_item(vme_txn2);
            finish_item(vme_txn2);
          end
        join
       
     end
  endtask
endclass



