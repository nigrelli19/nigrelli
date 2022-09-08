#ifndef nigrelli_ana_scripts_modules_hh
#define nigrelli_ana_scripts_modules_hh

#include "nigrelli/ana/TClusterAnaModule.hh"
#include "nigrelli/ana/TCrvAnaModule.hh"
#include "nigrelli/ana/TGenAnaModule.hh"
#include "nigrelli/ana/THelixAnaModule.hh"
#include "nigrelli/ana/TSpmcAnaModule.hh"
#include "nigrelli/ana/TTrackAnaModule.hh"
#include "nigrelli/ana/TTrackSeedAnaModule.hh"
#include "nigrelli/ana/TTriggerAnaModule.hh"

namespace nigrelli {
  nigrelli::TClusterAnaModule*   m_cls     = nullptr;
  nigrelli::TCrvAnaModule*       m_crv     = nullptr;
  nigrelli::TGenAnaModule*       m_gen     = nullptr;
  nigrelli::THelixAnaModule*     m_hel     = nullptr;
  nigrelli::TSpmcAnaModule*      m_spmc    = nullptr;
  nigrelli::TTrackAnaModule*     m_trk     = nullptr;
  nigrelli::TTrackSeedAnaModule* m_trs     = nullptr;
  nigrelli::TTriggerAnaModule*   m_trig    = nullptr;
}
#endif
