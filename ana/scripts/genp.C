///////////////////////////////////////////////////////////////////////////////
// 
///////////////////////////////////////////////////////////////////////////////
#include "modules.hh"

def_name nigrelli_genp_001("nigrelli_genp_ana");
///////////////////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------------------
void  nigrelli_genp_ana(int DebugBit = -1) {
  nigrelli::m_gen = (nigrelli::TGenAnaModule*) g.x->AddModule("nigrelli::TGenAnaModule",0);  
  if (DebugBit >= 0) nigrelli::m_gen->SetDebugBit(DebugBit,1);
}
