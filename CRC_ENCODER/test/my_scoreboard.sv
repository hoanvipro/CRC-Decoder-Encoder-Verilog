class myScoreboard extends uvm_scoreboard;
  
  int countDUT = 0;
  int countVF = 0;
  int i  = 0;
  int j = 0;
  int k = 0;
  
  logic [CRCWIDTH - 1 : 0] crcdut_array [NUM_TEST - 1:0];
  logic [CRCWIDTH - 1 : 0] crcvf_array [NUM_TEST - 1:0];
  
  
  `uvm_analysis_imp_decl(_DUT)
  `uvm_analysis_imp_decl(_VF)
  
  //Register to factory
  `uvm_component_utils(myScoreboard)
  
  
  uvm_analysis_imp_DUT #(logic [CRCWIDTH - 1 : 0], myScoreboard) aimp_frmMonitorDUT;
  uvm_analysis_imp_VF #(logic [CRCWIDTH - 1 : 0], myScoreboard) aimp_frmMonitorVF;
  
    function new (string name = "myScoreboard", uvm_component parent = null);
		super.new(name,parent);
        aimp_frmMonitorDUT = new("aimp_frmMonitorDUT", this);
        aimp_frmMonitorVF = new("aimp_frmMonitorVF", this);
  endfunction
  
  virtual function void write_DUT (logic [CRCWIDTH - 1 : 0] crcdut);
    `uvm_info("Scoreboard", $sformatf("DUT CRC Sequence receive: %8h", crcdut),UVM_LOW);
    crcdut_array[countDUT] = crcdut;
    countDUT = countDUT + 1;
    if(countDUT == NUM_TEST) begin
      for (i = 0; i < NUM_TEST; i ++) begin
        if(crcdut_array[i] == crcvf_array[j])
          k = k;
        else
          k = k + 1;
        j = j + 1;
      end
    end
  endfunction
  
  virtual function void write_VF (logic [CRCWIDTH - 1 : 0] crcvf);
    `uvm_info("Scoreboard", $sformatf("VF CRC Sequence receive: %8h", crcvf),UVM_LOW);
    crcvf_array[countVF] = crcvf;
    countVF = countVF + 1;
  endfunction
      
      function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        //
        if (k != 0) begin
          `uvm_warning("Scoreboard", $sformatf("CRC Sequence in DUT not completely like VF, number of wrong CRC: %0d ", k));
        end
        else
          `uvm_info("Scoreboard","All CRC Sequence are corrected",UVM_LOW);
      endfunction

  
endclass
