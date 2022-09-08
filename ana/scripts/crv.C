///////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////
#include "Stntuple/scripts/global_vars.h"
#include "modules.hh"

def_name nigrelli_crv_001("nigrelli_crv_ana");

//-----------------------------------------------------------------------------
void  nigrelli_crv_ana(int UseAllPulses = 0, int DebugBit = -1) {
  nigrelli::m_crv = (nigrelli::TCrvAnaModule*) g.x->AddModule("nigrelli::TCrvAnaModule",0);  

  nigrelli::m_crv->SetUseAllPulses(UseAllPulses);

  if (DebugBit >= 0)nigrelli::m_crv->SetDebugBit(DebugBit,1);
}
