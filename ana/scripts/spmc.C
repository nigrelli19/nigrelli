///////////////////////////////////////////////////////////////////////////////
// 
///////////////////////////////////////////////////////////////////////////////
#include "Stntuple/ana/scripts/modules.hh"

def_name nigrelli_spmc_001("nigrelli_spmc_ana");
def_name nigrelli_spmc_002("nigrelli_spmc_g4s4_ana");
///////////////////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------------------
void  nigrelli_spmc_ana(int DebugBit = -1) {
  nigrelli::m_spmc = (nigrelli::TSpmcAnaModule*) g.x->AddModule("nigrelli::TSpmcAnaModule",0);  
  if (DebugBit >= 0) nigrelli::m_spmc->SetDebugBit(DebugBit,1);
}

//-----------------------------------------------------------------------------
void  nigrelli_spmc_g4s4_ana(int DebugBit = -1) {
  nigrelli::m_spmc = (nigrelli::TSpmcAnaModule*) g.x->AddModule("nigrelli::TSpmcAnaModule",0);  
  nigrelli::m_spmc->SetSpmcBlockName("SpmcTrackerBlock");
  nigrelli::m_spmc->SetVDetBlockName("SpmcVDetBlock");
  if (DebugBit >= 0) nigrelli::m_spmc->SetDebugBit(DebugBit,1);
}

