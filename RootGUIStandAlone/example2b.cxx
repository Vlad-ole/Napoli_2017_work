#include <TApplication.h>
#include <TGClient.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TRandom.h>
#include <TGButton.h>
#include <TRootEmbeddedCanvas.h>
#include "example2b.h"

MyMainFrame::MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h)
   : TGMainFrame(p,w,h) {

   // Creates widgets of the example
   fEcanvas = new TRootEmbeddedCanvas ("Ecanvas",this,200,200);
   AddFrame(fEcanvas, new TGLayoutHints(kLHintsExpandX |
                                    kLHintsExpandY, 10,10,10,1));
   TGHorizontalFrame *hframe=new TGHorizontalFrame(this, 200,40);
   TGTextButton *draw = new TGTextButton(hframe,"&Draw");
   draw->Connect("Clicked()","MyMainFrame",this,"DoDraw()");
   hframe->AddFrame(draw, new TGLayoutHints(kLHintsCenterX,
                                            5,5,3,4));
   TGTextButton *exit = new TGTextButton(hframe,"&Exit ",
                                "gApplication->Terminate()");
   hframe->AddFrame(exit, new TGLayoutHints(kLHintsCenterX,
                                            5,5,3,4));
   AddFrame(hframe,new TGLayoutHints(kLHintsCenterX,2,2,2,2));

   // Sets window name and shows the main frame
   SetWindowName("Simple Example");
   MapSubwindows();
   Resize(GetDefaultSize());
   MapWindow();
}
