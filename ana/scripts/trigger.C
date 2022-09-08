///////////////////////////////////////////////////////////////////////////////
// 
///////////////////////////////////////////////////////////////////////////////
#include "Stntuple/scripts/global_vars.h"
#include "Stntuple/ana/scripts/modules.hh"

def_name nigrelli_trigger_0010("nigrelli_trigger_ana");
///////////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------------
void  nigrelli_trigger_ana(int PdgCode = 11, int ProcessCode = 7, int DebugBit = -1) {
//-----------------------------------------------------------------------------
// configure analysis module
//-----------------------------------------------------------------------------
  nigrelli::m_trig = (nigrelli::TTriggerAnaModule*) g.x->AddModule("nigrelli::TTriggerAnaModule",0);
  nigrelli::m_trig->SetPdgCode(PdgCode);
  nigrelli::m_trig->SetProcessCode(ProcessCode);
  if (DebugBit >= 0) {
    nigrelli::m_trig->SetDebugBit(DebugBit,1);
  }
}

