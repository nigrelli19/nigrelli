///////////////////////////////////////////////////////////////////////////////
// 
///////////////////////////////////////////////////////////////////////////////
#include "Stntuple/scripts/global_vars.h"
#include "Stntuple/ana/scripts/modules.hh"

def_name nigrelli_cal_001("nigrelli_cluster_ana");
///////////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------------
// configure jobs
//-----------------------------------------------------------------------------
void  nigrelli_cluster_ana(int DebugBit = -1) {
  nigrelli::m_cls = (nigrelli::TClusterAnaModule*) g.x->AddModule("nigrelli::TClusterAnaModule",0);  
  if (DebugBit >= 0) nigrelli::m_cls->SetDebugBit(DebugBit,1);
}





