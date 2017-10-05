// Mainframe macro generated from application: /home/darkside/Vlad_Programs/root_roofit_fft_gsl/bin/root.exe
// By ROOT version 5.34/36 on 2017-10-05 11:12:25

#ifndef ROOT_TGDockableFrame
#include "TGDockableFrame.h"
#endif
#ifndef ROOT_TGMenu
#include "TGMenu.h"
#endif
#ifndef ROOT_TGMdiDecorFrame
#include "TGMdiDecorFrame.h"
#endif
#ifndef ROOT_TG3DLine
#include "TG3DLine.h"
#endif
#ifndef ROOT_TGMdiFrame
#include "TGMdiFrame.h"
#endif
#ifndef ROOT_TGMdiMainFrame
#include "TGMdiMainFrame.h"
#endif
#ifndef ROOT_TGMdiMenu
#include "TGMdiMenu.h"
#endif
#ifndef ROOT_TGListBox
#include "TGListBox.h"
#endif
#ifndef ROOT_TGNumberEntry
#include "TGNumberEntry.h"
#endif
#ifndef ROOT_TGScrollBar
#include "TGScrollBar.h"
#endif
#ifndef ROOT_TGComboBox
#include "TGComboBox.h"
#endif
#ifndef ROOT_TGuiBldHintsEditor
#include "TGuiBldHintsEditor.h"
#endif
#ifndef ROOT_TGuiBldNameFrame
#include "TGuiBldNameFrame.h"
#endif
#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGFileDialog
#include "TGFileDialog.h"
#endif
#ifndef ROOT_TGShutter
#include "TGShutter.h"
#endif
#ifndef ROOT_TGButtonGroup
#include "TGButtonGroup.h"
#endif
#ifndef ROOT_TGCanvas
#include "TGCanvas.h"
#endif
#ifndef ROOT_TGFSContainer
#include "TGFSContainer.h"
#endif
#ifndef ROOT_TGFontDialog
#include "TGFontDialog.h"
#endif
#ifndef ROOT_TGuiBldEditor
#include "TGuiBldEditor.h"
#endif
#ifndef ROOT_TGColorSelect
#include "TGColorSelect.h"
#endif
#ifndef ROOT_TGButton
#include "TGButton.h"
#endif
#ifndef ROOT_TGFSComboBox
#include "TGFSComboBox.h"
#endif
#ifndef ROOT_TGLabel
#include "TGLabel.h"
#endif
#ifndef ROOT_TGMsgBox
#include "TGMsgBox.h"
#endif
#ifndef ROOT_TRootGuiBuilder
#include "TRootGuiBuilder.h"
#endif
#ifndef ROOT_TGTab
#include "TGTab.h"
#endif
#ifndef ROOT_TGListView
#include "TGListView.h"
#endif
#ifndef ROOT_TGStatusBar
#include "TGStatusBar.h"
#endif
#ifndef ROOT_TGListTree
#include "TGListTree.h"
#endif
#ifndef ROOT_TGuiBldGeometryFrame
#include "TGuiBldGeometryFrame.h"
#endif
#ifndef ROOT_TGToolBar
#include "TGToolBar.h"
#endif
#ifndef ROOT_TRootEmbeddedCanvas
#include "TRootEmbeddedCanvas.h"
#endif
#ifndef ROOT_TCanvas
#include "TCanvas.h"
#endif
#ifndef ROOT_TGuiBldDragManager
#include "TGuiBldDragManager.h"
#endif
#ifndef ROOT_TGObject
#include "TGObject.h"
#endif

#include "Riostream.h"

void GIU_Builder()
{

   // main frame
   TGMainFrame *fMainFrame959 = new TGMainFrame(gClient->GetRoot(),10,10,kMainFrame | kVerticalFrame);
   fMainFrame959->SetName("fMainFrame959");
   fMainFrame959->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1100 = new TGCompositeFrame(fMainFrame959,1323,729,kVerticalFrame);
   fMainFrame1100->SetName("fMainFrame1100");
   fMainFrame1100->SetLayoutBroken(kTRUE);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas558 = new TRootEmbeddedCanvas(0,fMainFrame1100,336,280,kSunkenFrame);
   fRootEmbeddedCanvas558->SetName("fRootEmbeddedCanvas558");
   Int_t wfRootEmbeddedCanvas558 = fRootEmbeddedCanvas558->GetCanvasWindowId();
   TCanvas *c123 = new TCanvas("c123", 10, 10, wfRootEmbeddedCanvas558);
   fRootEmbeddedCanvas558->AdoptCanvas(c123);
   fMainFrame1100->AddFrame(fRootEmbeddedCanvas558, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas558->MoveResize(224,32,336,280);

   TGFont *ufont;         // will reflect user font changes
   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   TGGC   *uGC;           // will reflect user GC changes
   // graphics context changes
   GCValues_t valButton688;
   valButton688.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valButton688.fForeground);
   gClient->GetColorByName("#e8e8e8",valButton688.fBackground);
   valButton688.fFillStyle = kFillSolid;
   valButton688.fFont = ufont->GetFontHandle();
   valButton688.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valButton688, kTRUE);
   TGTextButton *fTextButton688 = new TGTextButton(fMainFrame1100,"Start",-1,uGC->GetGC(),ufont->GetFontStruct(),kRaisedFrame);
   fTextButton688->SetTextJustify(36);
   fTextButton688->SetMargins(0,0,0,0);
   fTextButton688->SetWrapLength(-1);
   fTextButton688->Resize(184,72);
   fMainFrame1100->AddFrame(fTextButton688, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton688->MoveResize(8,32,184,72);

   fMainFrame959->AddFrame(fMainFrame1100, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1100->MoveResize(0,0,1323,729);

   fMainFrame959->SetMWMHints(kMWMDecorAll,
                        kMWMFuncAll,
                        kMWMInputModeless);
   fMainFrame959->MapSubwindows();

   fMainFrame959->Resize(fMainFrame959->GetDefaultSize());
   fMainFrame959->MapWindow();
   fMainFrame959->Resize(1062,668);
}  
