///////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////
#ifndef nigrelli_ana_TGenAnaModule_hh
#define nigrelli_ana_TGenAnaModule_hh

#include "TH1.h"
#include "TH2.h"
#include "TProfile.h"

#include "Stntuple/loop/TStnModule.hh"

#include "Stntuple/obj/TGenpBlock.hh"
#include "Stntuple/obj/TSimpBlock.hh"

#include "Stntuple/base/TStnArrayI.hh"

//#include "nigrelli/ana/HistBase_t.hh"
#include "nigrelli/ana/AnaDefs.hh"

namespace nigrelli {
class TGenAnaModule: public TStnModule {
public:
//-----------------------------------------------------------------------------
//  histograms
//-----------------------------------------------------------------------------
  struct GenpHist_t {

    TH1F*    fPdgCode;		       //
    TH1F*    fGenCode;		       // generator code
    TH1F*    fMomentum;
    TH1F*    fMomProton;
  };

  struct SimpHist_t {
    TH1F*    fPdgCode;		       //
    TH1F*    fMomentum;
    TH1F*    fNStrawHits;
  };

  struct EventHist_t  {
    TH1F* fRunNumber;
    TH1F* fEventNumber;
    TH1F* fNGenp;
    TH1F* fNSimp[2];
  };

//-----------------------------------------------------------------------------
  enum { kNEventHistSets = 100 };
  enum { kNGenpHistSets  = 100 };
  enum { kNSimpHistSets  = 100 };

  struct Hist_t {
    EventHist_t* fEvent[kNEventHistSets];
    GenpHist_t*  fGenp [kNGenpHistSets];
    SimpHist_t*  fSimp [kNSimpHistSets];
  };
//-----------------------------------------------------------------------------
//  data members
//-----------------------------------------------------------------------------
public:
					// pointers to the data blocks used
  TGenpBlock*           fGenpBlock;
  TSimpBlock*           fSimpBlock;
					// histograms filled
  Hist_t                fHist;

  int                   fNGenp;
  int                   fNSimp[2];
  int                   fPdgCode;
  int                   fGeneratorCode;
//-----------------------------------------------------------------------------
//  functions
//-----------------------------------------------------------------------------
public:
  TGenAnaModule(const char* name="Stntuple_GenAna", const char* title="Stntuple_GenAna");
  ~TGenAnaModule();
//-----------------------------------------------------------------------------
// accessors
//-----------------------------------------------------------------------------
  Hist_t*            GetHist        () { return &fHist;        }
//-----------------------------------------------------------------------------
// setters
//-----------------------------------------------------------------------------
  void    SetPdgCode      (int Code) { fPdgCode       = Code; }
  void    SetGeneratorCode(int Code) { fGeneratorCode = Code; }
//-----------------------------------------------------------------------------
// overloaded methods of TStnModule
//-----------------------------------------------------------------------------
  int     BeginJob();
  int     BeginRun();
  int     Event   (int ientry);
  int     EndJob  ();
//-----------------------------------------------------------------------------
// other methods
//-----------------------------------------------------------------------------
  void    BookGenpHistograms  (GenpHist_t* Hist, const char* Folder);
  void    BookSimpHistograms  (SimpHist_t* Hist, const char* Folder);
  void    BookEventHistograms (EventHist_t* Hist, const char* Folder);

  void    FillGenpHistograms  (GenpHist_t* Hist, TGenParticle* Part);
  void    FillSimpHistograms  (SimpHist_t* Hist, TSimParticle* Part);
  void    FillEventHistograms (EventHist_t* Hist);

  void    BookHistograms();
  void    FillHistograms();


  void    Debug();
//-----------------------------------------------------------------------------
// test
//-----------------------------------------------------------------------------
  void    Test001();

  ClassDef(TGenAnaModule,0)
};
}
#endif
