// Mainframe macro generated from application: /home/darkside/Vlad_Programs/root_roofit_fft_gsl/bin/root.exe
// By ROOT version 5.34/36 on 2017-10-05 10:56:00

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

void GIU_Builder_v5()
{

   // main frame
   TGMainFrame *fMainFrame2678 = new TGMainFrame(gClient->GetRoot(),10,10,kMainFrame | kVerticalFrame);
   fMainFrame2678->SetName("fMainFrame2678");
   fMainFrame2678->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame968 = new TGCompositeFrame(fMainFrame2678,1336,808,kVerticalFrame);
   fMainFrame968->SetName("fMainFrame968");
   fMainFrame968->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame678 = new TGCompositeFrame(fMainFrame968,1334,806,kVerticalFrame);
   fMainFrame678->SetName("fMainFrame678");
   fMainFrame678->SetLayoutBroken(kTRUE);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas_ch3 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas_ch3->SetName("fRootEmbeddedCanvas_ch3");
   Int_t wfRootEmbeddedCanvas_ch3 = fRootEmbeddedCanvas_ch3->GetCanvasWindowId();
   TCanvas *c135 = new TCanvas("c135", 10, 10, wfRootEmbeddedCanvas_ch3);
   fRootEmbeddedCanvas_ch3->AdoptCanvas(c135);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas_ch3, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas_ch3->MoveResize(320,355,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas_ch4 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas_ch4->SetName("fRootEmbeddedCanvas_ch4");
   Int_t wfRootEmbeddedCanvas_ch4 = fRootEmbeddedCanvas_ch4->GetCanvasWindowId();
   TCanvas *c136 = new TCanvas("c136", 10, 10, wfRootEmbeddedCanvas_ch4);
   fRootEmbeddedCanvas_ch4->AdoptCanvas(c136);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas_ch4, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas_ch4->MoveResize(631,352,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas_ch5 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas_ch5->SetName("fRootEmbeddedCanvas_ch5");
   Int_t wfRootEmbeddedCanvas_ch5 = fRootEmbeddedCanvas_ch5->GetCanvasWindowId();
   TCanvas *c137 = new TCanvas("c137", 10, 10, wfRootEmbeddedCanvas_ch5);
   fRootEmbeddedCanvas_ch5->AdoptCanvas(c137);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas_ch5, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas_ch5->MoveResize(940,352,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas_ch0 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas_ch0->SetName("fRootEmbeddedCanvas_ch0");
   Int_t wfRootEmbeddedCanvas_ch0 = fRootEmbeddedCanvas_ch0->GetCanvasWindowId();
   TCanvas *c138 = new TCanvas("c138", 10, 10, wfRootEmbeddedCanvas_ch0);
   fRootEmbeddedCanvas_ch0->AdoptCanvas(c138);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas_ch0, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas_ch0->MoveResize(320,40,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas_ch1 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas_ch1->SetName("fRootEmbeddedCanvas_ch1");
   Int_t wfRootEmbeddedCanvas_ch1 = fRootEmbeddedCanvas_ch1->GetCanvasWindowId();
   TCanvas *c139 = new TCanvas("c139", 10, 10, wfRootEmbeddedCanvas_ch1);
   fRootEmbeddedCanvas_ch1->AdoptCanvas(c139);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas_ch1, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas_ch1->MoveResize(632,40,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas_ch2 = new TRootEmbeddedCanvas(0,fMainFrame678,300,300,kSunkenFrame);
   fRootEmbeddedCanvas_ch2->SetName("fRootEmbeddedCanvas_ch2");
   Int_t wfRootEmbeddedCanvas_ch2 = fRootEmbeddedCanvas_ch2->GetCanvasWindowId();
   TCanvas *c140 = new TCanvas("c140", 10, 10, wfRootEmbeddedCanvas_ch2);
   fRootEmbeddedCanvas_ch2->AdoptCanvas(c140);
   fMainFrame678->AddFrame(fRootEmbeddedCanvas_ch2, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas_ch2->MoveResize(941,40,300,300);

   fMainFrame968->AddFrame(fMainFrame678, new TGLayoutHints(kLHintsNormal));
   fMainFrame678->MoveResize(0,0,1334,806);

   fMainFrame2678->AddFrame(fMainFrame968, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame968->MoveResize(0,0,1336,808);

   fMainFrame2678->SetMWMHints(kMWMDecorAll,
                        kMWMFuncAll,
                        kMWMInputModeless);
   fMainFrame2678->MapSubwindows();

   fMainFrame2678->Resize(fMainFrame2678->GetDefaultSize());
   fMainFrame2678->MapWindow();
   fMainFrame2678->Resize(1437,731);
}  
