///////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////
#include "Stntuple/scripts/global_vars.h"
#include "Stntuple/ana/scripts/modules.hh"

def_name nigrelli_trs_001("nigrelli_trs_ana");

void nigrelli_trs_ana(int DebugBit = -1, int PdgCode = 11, int GeneratorCode = 2) {
//-----------------------------------------------------------------------------
// configure validation module
//-----------------------------------------------------------------------------
  nigrelli::m_trs = (nigrelli::TTrackSeedAnaModule*) g.x->AddModule("nigrelli::TTrackSeedAnaModule",0);  
  nigrelli::m_trs->SetPdgCode      (PdgCode);
  nigrelli::m_trs->SetGeneratorCode(GeneratorCode);

  if (DebugBit >= 0) nigrelli::m_trs->SetDebugBit(DebugBit,1);
}
