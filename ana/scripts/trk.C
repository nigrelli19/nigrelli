///////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////
#include "Stntuple/scripts/global_vars.h"
#include "Stntuple/ana/scripts/modules.hh"

def_name nigrelli_trk_001("nigrelli_trk_ana");

void nigrelli_trk_ana(int PdgCode = 11, int GeneratorCode = 2) {
//-----------------------------------------------------------------------------
// configure validation module
//-----------------------------------------------------------------------------
  nigrelli::m_trk = (nigrelli::TTrackAnaModule*) g.x->AddModule("nigrelli::TTrackAnaModule",0);  
  nigrelli::m_trk->SetPdgCode      (PdgCode);
  nigrelli::m_trk->SetGeneratorCode(GeneratorCode);
}
