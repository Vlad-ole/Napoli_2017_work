/*****************************************************************************
*
*****************************************************************************/

#ifndef ADisplay_h
#define ADisplay_h

#include <TGFrame.h>
#include <TThread.h>
#include <TRootEmbeddedCanvas.h>

class TGraph;
class TCanvas;
class TMultiGraph;

class MyDisplay: public TGMainFrame
{
protected:
   Int_t aNrGraphs; 
   Int_t nPoints; 
   TGraph **mGraphs;
   TRootEmbeddedCanvas *fEcan;
   TMultiGraph *mMultiGraph;
   static void *ConsumerFunc(void*);
   TThread *aConsumer; 
   Int_t aCond;
   TGTextButton *update;
   TGTextButton *updateStop;

public:
   MyDisplay(const TGWindow *, UInt_t, UInt_t );
   virtual ~MyDisplay();
   virtual void CloseWindow();
   void  UpdateGraph();
   void  UpdateStop();
   void  InitGraph();

   ClassDef(MyDisplay, 0)
};

#endif

