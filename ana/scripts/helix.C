///////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////
#include "Stntuple/scripts/global_vars.h"
#include "Stntuple/ana/scripts/modules.hh"

def_name nigrelli_helix_001("nigrelli_helix_ana");
def_name nigrelli_helix_002("nigrelli_helix_ana_old");


//-----------------------------------------------------------------------------
void  nigrelli_helix_ana(int DebugBit = -1) {
  nigrelli::m_hel = (nigrelli::THelixAnaModule*) g.x->AddModule("nigrelli::THelixAnaModule",0);  

  if (DebugBit >= 0)nigrelli::m_hel->SetDebugBit(DebugBit,1);
}
//-----------------------------------------------------------------------------
void  nigrelli_helix_ana_old(int DebugBit = -1) {
  nigrelli::m_hel = (nigrelli::THelixAnaModule*) g.x->AddModule("stntupel::THelixAnaModule",0);

  nigrelli::m_hel->SetHelixBlockName(0,"HelixBlockTpr");
  nigrelli::m_hel->SetHelixBlockName(1,"HelixBlockCpr");
  nigrelli::m_hel->SetHelixBlockName(2,"HelixBlock"   );

  if (DebugBit >= 0) nigrelli::m_hel->SetDebugBit(DebugBit,1);
}
