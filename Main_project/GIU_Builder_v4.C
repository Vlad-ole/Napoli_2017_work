// Mainframe macro generated from application: /home/darkside/Vlad_Programs/root_roofit_fft_gsl/bin/root.exe
// By ROOT version 5.34/36 on 2017-10-05 10:39:34

#ifndef ROOT_TGDockableFrame
#include "TGDockableFrame.h"
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
#ifndef ROOT_TGMenu
#include "TGMenu.h"
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
#ifndef ROOT_TGuiBldEditor
#include "TGuiBldEditor.h"
#endif
#ifndef ROOT_TGColorSelect
#include "TGColorSelect.h"
#endif
#ifndef ROOT_TGButton
#include "TGButton.h"
#endif
#ifndef ROOT_TRootContextMenu
#include "TRootContextMenu.h"
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
#ifndef ROOT_TGSplitter
#include "TGSplitter.h"
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
#ifndef ROOT_TGToolTip
#include "TGToolTip.h"
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

#include "Riostream.h"

void GIU_Builder_v4()
{

   // main frame
   TGMainFrame *fMainFrame2326 = new TGMainFrame(gClient->GetRoot(),10,10,kMainFrame | kVerticalFrame);
   fMainFrame2326->SetName("fMainFrame2326");
   fMainFrame2326->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame968 = new TGCompositeFrame(fMainFrame2326,1336,808,kVerticalFrame);
   fMainFrame968->SetName("fMainFrame968");
   fMainFrame968->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame678 = new TGCompositeFrame(fMainFrame968,1334,806,kVerticalFrame);
   fMainFrame678->SetName("fMainFrame678");
   fMainFrame678->SetLayoutBroken(kTRUE);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas1800 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas1800->SetName("fRootEmbeddedCanvas1800");
   Int_t wfRootEmbeddedCanvas1800 = fRootEmbeddedCanvas1800->GetCanvasWindowId();
   TCanvas *c129 = new TCanvas("c129", 10, 10, wfRootEmbeddedCanvas1800);
   fRootEmbeddedCanvas1800->AdoptCanvas(c129);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas1800, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas1800->MoveResize(320,355,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas1816 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas1816->SetName("fRootEmbeddedCanvas1816");
   Int_t wfRootEmbeddedCanvas1816 = fRootEmbeddedCanvas1816->GetCanvasWindowId();
   TCanvas *c130 = new TCanvas("c130", 10, 10, wfRootEmbeddedCanvas1816);
   fRootEmbeddedCanvas1816->AdoptCanvas(c130);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas1816, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas1816->MoveResize(631,352,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas1832 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas1832->SetName("fRootEmbeddedCanvas1832");
   Int_t wfRootEmbeddedCanvas1832 = fRootEmbeddedCanvas1832->GetCanvasWindowId();
   TCanvas *c131 = new TCanvas("c131", 10, 10, wfRootEmbeddedCanvas1832);
   fRootEmbeddedCanvas1832->AdoptCanvas(c131);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas1832, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas1832->MoveResize(940,352,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas1752 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas1752->SetName("fRootEmbeddedCanvas1752");
   Int_t wfRootEmbeddedCanvas1752 = fRootEmbeddedCanvas1752->GetCanvasWindowId();
   TCanvas *c132 = new TCanvas("c132", 10, 10, wfRootEmbeddedCanvas1752);
   fRootEmbeddedCanvas1752->AdoptCanvas(c132);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas1752, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas1752->MoveResize(320,40,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas1768 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas1768->SetName("fRootEmbeddedCanvas1768");
   Int_t wfRootEmbeddedCanvas1768 = fRootEmbeddedCanvas1768->GetCanvasWindowId();
   TCanvas *c133 = new TCanvas("c133", 10, 10, wfRootEmbeddedCanvas1768);
   fRootEmbeddedCanvas1768->AdoptCanvas(c133);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas1768, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas1768->MoveResize(632,40,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas1784 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas1784->SetName("fRootEmbeddedCanvas1784");
   Int_t wfRootEmbeddedCanvas1784 = fRootEmbeddedCanvas1784->GetCanvasWindowId();
   TCanvas *c134 = new TCanvas("c134", 10, 10, wfRootEmbeddedCanvas1784);
   fRootEmbeddedCanvas1784->AdoptCanvas(c134);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas1784, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas1784->MoveResize(941,40,300,300);

   fMainFrame968->AddFrame(fMainFrame678, new TGLayoutHints(kLHintsNormal));
   fMainFrame678->MoveResize(0,0,1334,806);

   fMainFrame2326->AddFrame(fMainFrame968, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame968->MoveResize(0,0,1336,808);

   fMainFrame2326->SetMWMHints(kMWMDecorAll,
                        kMWMFuncAll,
                        kMWMInputModeless);
   fMainFrame2326->MapSubwindows();

   fMainFrame2326->Resize(fMainFrame2326->GetDefaultSize());
   fMainFrame2326->MapWindow();
   fMainFrame2326->Resize(1437,731);
}  
