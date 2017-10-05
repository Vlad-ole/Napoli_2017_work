// Mainframe macro generated from application: /home/darkside/Vlad_Programs/root_roofit_fft_gsl/bin/root.exe
// By ROOT version 5.34/36 on 2017-10-05 10:07:14

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

void GIU_Builder()
{

   // main frame
   TGMainFrame *fRootGuiBuilder2 = new TGMainFrame(gClient->GetRoot(),10,10,kMainFrame | kVerticalFrame);
   fRootGuiBuilder2->SetName("fRootGuiBuilder2");

   // MDI menu bar
   TGMdiMenuBar *fMdiMenuBar16 = new TGMdiMenuBar(fRootGuiBuilder2,1920,25);
   fMdiMenuBar16->SetName("fMdiMenuBar16");
   TGMenuBar *fMenuBar18 = fMdiMenuBar16->GetMenuBar();

   // "File" menu
   TGPopupMenu *fPopupMenu21 = new TGPopupMenu(gClient->GetDefaultRoot(),180,182,kOwnBackground);
   fPopupMenu21->AddEntry("&Edit (Ctrl+double-click)",3,gClient->GetPicture("bld_edit.png"));
   fPopupMenu21->AddEntry("&Stop (Ctrl+double-click)",4,gClient->GetPicture("bld_stop.png"));
   fPopupMenu21->DisableEntry(4);
   fPopupMenu21->AddSeparator();
   fPopupMenu21->AddEntry("&New Project",0,gClient->GetPicture("bld_new.png"));
   fPopupMenu21->AddEntry("&Open",15,gClient->GetPicture("bld_open.png"));
   fPopupMenu21->AddEntry("&Close",1,gClient->GetPicture("bld_delete.png"));
   fPopupMenu21->AddEntry("&Save project as",5,gClient->GetPicture("bld_save.png"));
   fPopupMenu21->AddSeparator();
   fPopupMenu21->AddEntry("E&xit",2,gClient->GetPicture("bld_exit.png"));
   fMenuBar18->AddPopup("&File",fPopupMenu21, new TGLayoutHints(kLHintsLeft | kLHintsTop,0,4,0,0));

   // "Windows" menu
   TGPopupMenu *fPopupMenu22 = new TGPopupMenu(gClient->GetDefaultRoot(),121,134,kOwnBackground);
   fPopupMenu22->AddEntry("Tile &Horizontally",7);
   fPopupMenu22->AddEntry("Tile &Vertically",8);
   fPopupMenu22->AddEntry("&Cascade",9);
   fPopupMenu22->AddSeparator();
   fPopupMenu22->AddEntry("&Arrange icons",11);
   fPopupMenu22->AddSeparator();
   fPopupMenu22->AddEntry("&Opaque resize",10);
   fPopupMenu22->CheckEntry(10);
   fMenuBar18->AddPopup("&Windows",fPopupMenu22, new TGLayoutHints(kLHintsLeft | kLHintsTop,0,4,0,0));

   // "Help" menu
   TGPopupMenu *fPopupMenu23 = new TGPopupMenu(gClient->GetDefaultRoot(),82,58,kOwnBackground);
   fPopupMenu23->AddEntry("&Contents",12);
   fPopupMenu23->AddSeparator();
   fPopupMenu23->AddEntry("&About",13);
   fMenuBar18->AddPopup("&Help",fPopupMenu23, new TGLayoutHints(kLHintsRight | kLHintsTop,4,4,0,0));
   fRootGuiBuilder2->AddFrame(fMdiMenuBar16, new TGLayoutHints(kLHintsTop | kLHintsExpandX));
   TGHorizontal3DLine *fHorizontal3DLine27 = new TGHorizontal3DLine(fRootGuiBuilder2,1920,2);
   fHorizontal3DLine27->SetName("fHorizontal3DLine27");
   fRootGuiBuilder2->AddFrame(fHorizontal3DLine27, new TGLayoutHints(kLHintsTop | kLHintsExpandX,0,0,2,2));

   // dockable frame
   TGDockableFrame *fDockableFrame28 = new TGDockableFrame(fRootGuiBuilder2);
   fDockableFrame28->SetName("fDockableFrame28");
   TGCompositeFrame *fCompositeFrame32 = fDockableFrame28->GetContainer();

   // tool bar
   TGToolBar *fToolBar33 = new TGToolBar(fCompositeFrame32,1908,23,kHorizontalFrame);
   fToolBar33->SetName("fToolBar33");

   ToolBarData_t t;
   t.fPixmap = "bld_edit.png";
   t.fTipText = "Start Edit (Ctrl-Dbl-Click)";
   t.fStayDown = kFALSE;
   t.fId = 1;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,8);
   t.fPixmap = "bld_new.png";
   t.fTipText = "New (Ctrl-N)";
   t.fStayDown = kFALSE;
   t.fId = 2;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,8);
   t.fPixmap = "bld_open.png";
   t.fTipText = "Open (Ctrl-O)";
   t.fStayDown = kFALSE;
   t.fId = 3;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   t.fPixmap = "bld_save.png";
   t.fTipText = "Save As (Ctrl-S)";
   t.fStayDown = kFALSE;
   t.fId = 4;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   t.fPixmap = "bld_compact.png";
   t.fTipText = "Compact selected frame (Ctrl-L)";
   t.fStayDown = kFALSE;
   t.fId = 5;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,8);
   TGButton *fPictureButton46 = t.fButton;
   fPictureButton46->SetState(kButtonDisabled);
   t.fPixmap = "bld_break.png";
   t.fTipText = "Disable/Enable layout (Ctrl-B)";
   t.fStayDown = kFALSE;
   t.fId = 6;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   TGButton *fPictureButton49 = t.fButton;
   fPictureButton49->SetState(kButtonDisabled);
   t.fPixmap = "bld_hbox.png";
   t.fTipText = "Layout selected frame horizontally (Ctrl-H)";
   t.fStayDown = kFALSE;
   t.fId = 7;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   TGButton *fPictureButton52 = t.fButton;
   fPictureButton52->SetState(kButtonDisabled);
   t.fPixmap = "bld_vbox.png";
   t.fTipText = "Layout selected frame vertically (Ctrl-H)";
   t.fStayDown = kFALSE;
   t.fId = 8;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   TGButton *fPictureButton55 = t.fButton;
   fPictureButton55->SetState(kButtonDisabled);
   t.fPixmap = "bld_grid.png";
   t.fTipText = "On/Off grid (Ctrl+G)";
   t.fStayDown = kFALSE;
   t.fId = 9;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   t.fPixmap = "bld_AlignTop.png";
   t.fTipText = "Align selected frames to the top line of lasso (Up  Arrow)";
   t.fStayDown = kFALSE;
   t.fId = 10;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,8);
   TGButton *fPictureButton61 = t.fButton;
   fPictureButton61->SetState(kButtonDisabled);
   t.fPixmap = "bld_AlignBtm.png";
   t.fTipText = "Align selected frames to the down line of lasso (Down Arrow)";
   t.fStayDown = kFALSE;
   t.fId = 11;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   TGButton *fPictureButton64 = t.fButton;
   fPictureButton64->SetState(kButtonDisabled);
   t.fPixmap = "bld_AlignLeft.png";
   t.fTipText = "Align selected frames to the left line of lasso (Left  Arrow)";
   t.fStayDown = kFALSE;
   t.fId = 12;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   TGButton *fPictureButton67 = t.fButton;
   fPictureButton67->SetState(kButtonDisabled);
   t.fPixmap = "bld_AlignRight.png";
   t.fTipText = "Align selected frames to the right line of lasso (Right  Arrow)";
   t.fStayDown = kFALSE;
   t.fId = 13;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   TGButton *fPictureButton70 = t.fButton;
   fPictureButton70->SetState(kButtonDisabled);
   t.fPixmap = "bld_cut.png";
   t.fTipText = "Cut (Ctrl-X)";
   t.fStayDown = kFALSE;
   t.fId = 14;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,8);
   TGButton *fPictureButton73 = t.fButton;
   fPictureButton73->SetState(kButtonDisabled);
   t.fPixmap = "bld_copy.png";
   t.fTipText = "Copy (Ctrl-C)";
   t.fStayDown = kFALSE;
   t.fId = 15;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   TGButton *fPictureButton76 = t.fButton;
   fPictureButton76->SetState(kButtonDisabled);
   t.fPixmap = "bld_paste.png";
   t.fTipText = "Paste frame into the last clicked position (Ctrl-V)";
   t.fStayDown = kFALSE;
   t.fId = 16;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   TGButton *fPictureButton79 = t.fButton;
   fPictureButton79->SetState(kButtonDisabled);
   t.fPixmap = "bld_delete.png";
   t.fTipText = "Delete (Del/Backspace)";
   t.fStayDown = kFALSE;
   t.fId = 17;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   TGButton *fPictureButton82 = t.fButton;
   fPictureButton82->SetState(kButtonDisabled);
   t.fPixmap = "bld_crop.png";
   t.fTipText = "Crop (Shift-Del)";
   t.fStayDown = kFALSE;
   t.fId = 18;
   t.fButton = 0;
   fToolBar33->AddButton(fCompositeFrame32,&t,0);
   TGButton *fPictureButton85 = t.fButton;
   fPictureButton85->SetState(kButtonDisabled);
   fDockableFrame28->AddFrame(fToolBar33, new TGLayoutHints(kLHintsTop | kLHintsExpandX));

   // next lines belong to the dockable frame widget
   fDockableFrame28->EnableUndock(kTRUE);
   fDockableFrame28->EnableHide(kTRUE);
   fDockableFrame28->SetWindowName("GuiBuilder ToolBar");
   fDockableFrame28->DockContainer();

   fRootGuiBuilder2->AddFrame(fDockableFrame28, new TGLayoutHints(kLHintsExpandX,0,0,1,0));
   TGHorizontal3DLine *fHorizontal3DLine88 = new TGHorizontal3DLine(fRootGuiBuilder2,1920,2);
   fHorizontal3DLine88->SetName("fHorizontal3DLine88");
   fRootGuiBuilder2->AddFrame(fHorizontal3DLine88, new TGLayoutHints(kLHintsTop | kLHintsExpandX,0,0,2,5));

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame89 = new TGHorizontalFrame(fRootGuiBuilder2,1920,894,kHorizontalFrame);
   fHorizontalFrame89->SetName("fHorizontalFrame89");

   // shutter
   TGShutter *fShutter90 = new TGShutter(fHorizontalFrame89,kSunkenFrame | kFixedWidth);
   fShutter90->SetName("fShutter90");

   // "Projects" shutter item 
   TGShutterItem *fShutterItem244 = new TGShutterItem(fShutter90, new TGHotString("Projects"),10000,kVerticalFrame);
   fShutterItem244->SetName("fShutterItem244");
   TGCompositeFrame *fVerticalFrame256 = (TGCompositeFrame *)fShutterItem244->GetContainer();

   ULong_t ucolor;        // will reflect user color changes
   gClient->GetColorByName("#e6e6e6",ucolor);

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame361 = new TGHorizontalFrame(fVerticalFrame256,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame361->SetName("fHorizontalFrame361");
   TGPictureButton *fPictureButton362 = new TGPictureButton(fHorizontalFrame361,gClient->GetPicture("bld_mainframe.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton362->SetToolTipText("Empty Frame");
   fHorizontalFrame361->AddFrame(fPictureButton362, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton362->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel365 = new TGLabel(fHorizontalFrame361,"Empty Frame",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel365->SetTextJustify(36);
   fLabel365->SetMargins(0,0,0,0);
   fLabel365->SetWrapLength(-1);
   fHorizontalFrame361->AddFrame(fLabel365, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame256->AddFrame(fHorizontalFrame361, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame366 = new TGHorizontalFrame(fVerticalFrame256,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame366->SetName("fHorizontalFrame366");
   TGPictureButton *fPictureButton367 = new TGPictureButton(fHorizontalFrame366,gClient->GetPicture("bld_mainframe.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton367->SetToolTipText("Horizontal Frame");
   fHorizontalFrame366->AddFrame(fPictureButton367, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton367->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel370 = new TGLabel(fHorizontalFrame366,"Horizontal Frame",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel370->SetTextJustify(36);
   fLabel370->SetMargins(0,0,0,0);
   fLabel370->SetWrapLength(-1);
   fHorizontalFrame366->AddFrame(fLabel370, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame256->AddFrame(fHorizontalFrame366, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame371 = new TGHorizontalFrame(fVerticalFrame256,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame371->SetName("fHorizontalFrame371");
   TGPictureButton *fPictureButton372 = new TGPictureButton(fHorizontalFrame371,gClient->GetPicture("bld_mainframe.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton372->SetToolTipText("Vertical Frame");
   fHorizontalFrame371->AddFrame(fPictureButton372, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton372->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel375 = new TGLabel(fHorizontalFrame371,"Vertical Frame",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel375->SetTextJustify(36);
   fLabel375->SetMargins(0,0,0,0);
   fLabel375->SetWrapLength(-1);
   fHorizontalFrame371->AddFrame(fLabel375, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame256->AddFrame(fHorizontalFrame371, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));
   fShutter90->AddItem(fShutterItem244);

   // "Buttons" shutter item 
   TGShutterItem *fShutterItem257 = new TGShutterItem(fShutter90, new TGHotString("Buttons"),10001,kVerticalFrame);
   fShutterItem257->SetName("fShutterItem257");
   TGCompositeFrame *fVerticalFrame269 = (TGCompositeFrame *)fShutterItem257->GetContainer();


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame376 = new TGHorizontalFrame(fVerticalFrame269,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame376->SetName("fHorizontalFrame376");
   TGPictureButton *fPictureButton377 = new TGPictureButton(fHorizontalFrame376,gClient->GetPicture("bld_textbutton.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton377->SetToolTipText("Text Button");
   fHorizontalFrame376->AddFrame(fPictureButton377, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton377->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel380 = new TGLabel(fHorizontalFrame376,"Text Button",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel380->SetTextJustify(36);
   fLabel380->SetMargins(0,0,0,0);
   fLabel380->SetWrapLength(-1);
   fHorizontalFrame376->AddFrame(fLabel380, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame269->AddFrame(fHorizontalFrame376, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame381 = new TGHorizontalFrame(fVerticalFrame269,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame381->SetName("fHorizontalFrame381");
   TGPictureButton *fPictureButton382 = new TGPictureButton(fHorizontalFrame381,gClient->GetPicture("bld_checkbutton.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton382->SetToolTipText("Check Button");
   fHorizontalFrame381->AddFrame(fPictureButton382, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton382->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel385 = new TGLabel(fHorizontalFrame381,"Check Button",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel385->SetTextJustify(36);
   fLabel385->SetMargins(0,0,0,0);
   fLabel385->SetWrapLength(-1);
   fHorizontalFrame381->AddFrame(fLabel385, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame269->AddFrame(fHorizontalFrame381, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame386 = new TGHorizontalFrame(fVerticalFrame269,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame386->SetName("fHorizontalFrame386");
   TGPictureButton *fPictureButton387 = new TGPictureButton(fHorizontalFrame386,gClient->GetPicture("bld_radiobutton.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton387->SetToolTipText("Radio Button");
   fHorizontalFrame386->AddFrame(fPictureButton387, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton387->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel390 = new TGLabel(fHorizontalFrame386,"Radio Button",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel390->SetTextJustify(36);
   fLabel390->SetMargins(0,0,0,0);
   fLabel390->SetWrapLength(-1);
   fHorizontalFrame386->AddFrame(fLabel390, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame269->AddFrame(fHorizontalFrame386, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame391 = new TGHorizontalFrame(fVerticalFrame269,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame391->SetName("fHorizontalFrame391");
   TGPictureButton *fPictureButton392 = new TGPictureButton(fHorizontalFrame391,gClient->GetPicture("bld_image.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton392->SetToolTipText("Picture Button");
   fHorizontalFrame391->AddFrame(fPictureButton392, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton392->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel395 = new TGLabel(fHorizontalFrame391,"Picture Button",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel395->SetTextJustify(36);
   fLabel395->SetMargins(0,0,0,0);
   fLabel395->SetWrapLength(-1);
   fHorizontalFrame391->AddFrame(fLabel395, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame269->AddFrame(fHorizontalFrame391, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));
   fShutter90->AddItem(fShutterItem257);

   // "Containers" shutter item 
   TGShutterItem *fShutterItem270 = new TGShutterItem(fShutter90, new TGHotString("Containers"),10002,kVerticalFrame);
   fShutterItem270->SetName("fShutterItem270");
   TGCompositeFrame *fVerticalFrame282 = (TGCompositeFrame *)fShutterItem270->GetContainer();


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame486 = new TGHorizontalFrame(fVerticalFrame282,131,30,kHorizontalFrame,ucolor);
   fHorizontalFrame486->SetName("fHorizontalFrame486");
   TGPictureButton *fPictureButton487 = new TGPictureButton(fHorizontalFrame486,gClient->GetPicture("bld_hbox.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton487->SetToolTipText("Horizontal Frame");
   fHorizontalFrame486->AddFrame(fPictureButton487, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton487->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel490 = new TGLabel(fHorizontalFrame486,"Horizontal Frame",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel490->SetTextJustify(36);
   fLabel490->SetMargins(0,0,0,0);
   fLabel490->SetWrapLength(-1);
   fHorizontalFrame486->AddFrame(fLabel490, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame282->AddFrame(fHorizontalFrame486, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame491 = new TGHorizontalFrame(fVerticalFrame282,131,30,kHorizontalFrame,ucolor);
   fHorizontalFrame491->SetName("fHorizontalFrame491");
   TGPictureButton *fPictureButton492 = new TGPictureButton(fHorizontalFrame491,gClient->GetPicture("bld_vbox.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton492->SetToolTipText("Vertical Frame");
   fHorizontalFrame491->AddFrame(fPictureButton492, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton492->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel495 = new TGLabel(fHorizontalFrame491,"Vertical Frame",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel495->SetTextJustify(36);
   fLabel495->SetMargins(0,0,0,0);
   fLabel495->SetWrapLength(-1);
   fHorizontalFrame491->AddFrame(fLabel495, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame282->AddFrame(fHorizontalFrame491, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame496 = new TGHorizontalFrame(fVerticalFrame282,131,30,kHorizontalFrame,ucolor);
   fHorizontalFrame496->SetName("fHorizontalFrame496");
   TGPictureButton *fPictureButton497 = new TGPictureButton(fHorizontalFrame496,gClient->GetPicture("bld_groupframe.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton497->SetToolTipText("Group Frame");
   fHorizontalFrame496->AddFrame(fPictureButton497, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton497->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel500 = new TGLabel(fHorizontalFrame496,"Group Frame",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel500->SetTextJustify(36);
   fLabel500->SetMargins(0,0,0,0);
   fLabel500->SetWrapLength(-1);
   fHorizontalFrame496->AddFrame(fLabel500, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame282->AddFrame(fHorizontalFrame496, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame501 = new TGHorizontalFrame(fVerticalFrame282,131,30,kHorizontalFrame,ucolor);
   fHorizontalFrame501->SetName("fHorizontalFrame501");
   TGPictureButton *fPictureButton502 = new TGPictureButton(fHorizontalFrame501,gClient->GetPicture("bld_tab.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton502->SetToolTipText("Tabbed Frame");
   fHorizontalFrame501->AddFrame(fPictureButton502, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton502->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel505 = new TGLabel(fHorizontalFrame501,"Tabbed Frame",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel505->SetTextJustify(36);
   fLabel505->SetMargins(0,0,0,0);
   fLabel505->SetWrapLength(-1);
   fHorizontalFrame501->AddFrame(fLabel505, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame282->AddFrame(fHorizontalFrame501, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame506 = new TGHorizontalFrame(fVerticalFrame282,131,30,kHorizontalFrame,ucolor);
   fHorizontalFrame506->SetName("fHorizontalFrame506");
   TGPictureButton *fPictureButton507 = new TGPictureButton(fHorizontalFrame506,gClient->GetPicture("bld_shutter.png"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton507->SetToolTipText("Shutter");
   fHorizontalFrame506->AddFrame(fPictureButton507, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton507->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel510 = new TGLabel(fHorizontalFrame506,"Shutter",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel510->SetTextJustify(36);
   fLabel510->SetMargins(0,0,0,0);
   fLabel510->SetWrapLength(-1);
   fHorizontalFrame506->AddFrame(fLabel510, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame282->AddFrame(fHorizontalFrame506, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame511 = new TGHorizontalFrame(fVerticalFrame282,131,30,kHorizontalFrame,ucolor);
   fHorizontalFrame511->SetName("fHorizontalFrame511");
   TGPictureButton *fPictureButton512 = new TGPictureButton(fHorizontalFrame511,gClient->GetPicture("bld_canvas.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton512->SetToolTipText("Scrolled Canvas");
   fHorizontalFrame511->AddFrame(fPictureButton512, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton512->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel515 = new TGLabel(fHorizontalFrame511,"Scrolled Canvas",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel515->SetTextJustify(36);
   fLabel515->SetMargins(0,0,0,0);
   fLabel515->SetWrapLength(-1);
   fHorizontalFrame511->AddFrame(fLabel515, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame282->AddFrame(fHorizontalFrame511, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));
   fShutter90->AddItem(fShutterItem270);

   // "Bars" shutter item 
   TGShutterItem *fShutterItem283 = new TGShutterItem(fShutter90, new TGHotString("Bars"),10003,kVerticalFrame);
   fShutterItem283->SetName("fShutterItem283");
   TGCompositeFrame *fVerticalFrame295 = (TGCompositeFrame *)fShutterItem283->GetContainer();


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame466 = new TGHorizontalFrame(fVerticalFrame295,118,30,kHorizontalFrame,ucolor);
   fHorizontalFrame466->SetName("fHorizontalFrame466");
   TGPictureButton *fPictureButton467 = new TGPictureButton(fHorizontalFrame466,gClient->GetPicture("bld_statusbar.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton467->SetToolTipText("Status Bar");
   fHorizontalFrame466->AddFrame(fPictureButton467, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton467->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel470 = new TGLabel(fHorizontalFrame466,"Status Bar",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel470->SetTextJustify(36);
   fLabel470->SetMargins(0,0,0,0);
   fLabel470->SetWrapLength(-1);
   fHorizontalFrame466->AddFrame(fLabel470, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame295->AddFrame(fHorizontalFrame466, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));
   fShutter90->AddItem(fShutterItem283);

   // "Input" shutter item 
   TGShutterItem *fShutterItem296 = new TGShutterItem(fShutter90, new TGHotString("Input"),10004,kVerticalFrame);
   fShutterItem296->SetName("fShutterItem296");
   TGCompositeFrame *fVerticalFrame308 = (TGCompositeFrame *)fShutterItem296->GetContainer();


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame396 = new TGHorizontalFrame(fVerticalFrame308,128,30,kHorizontalFrame,ucolor);
   fHorizontalFrame396->SetName("fHorizontalFrame396");
   TGPictureButton *fPictureButton397 = new TGPictureButton(fHorizontalFrame396,gClient->GetPicture("bld_entry.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton397->SetToolTipText("Text Entry");
   fHorizontalFrame396->AddFrame(fPictureButton397, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton397->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel400 = new TGLabel(fHorizontalFrame396,"Text Entry",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel400->SetTextJustify(36);
   fLabel400->SetMargins(0,0,0,0);
   fLabel400->SetWrapLength(-1);
   fHorizontalFrame396->AddFrame(fLabel400, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame308->AddFrame(fHorizontalFrame396, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame401 = new TGHorizontalFrame(fVerticalFrame308,128,30,kHorizontalFrame,ucolor);
   fHorizontalFrame401->SetName("fHorizontalFrame401");
   TGPictureButton *fPictureButton402 = new TGPictureButton(fHorizontalFrame401,gClient->GetPicture("bld_text.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton402->SetToolTipText("Text Edit");
   fHorizontalFrame401->AddFrame(fPictureButton402, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton402->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel405 = new TGLabel(fHorizontalFrame401,"Text Edit",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel405->SetTextJustify(36);
   fLabel405->SetMargins(0,0,0,0);
   fLabel405->SetWrapLength(-1);
   fHorizontalFrame401->AddFrame(fLabel405, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame308->AddFrame(fHorizontalFrame401, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame406 = new TGHorizontalFrame(fVerticalFrame308,128,30,kHorizontalFrame,ucolor);
   fHorizontalFrame406->SetName("fHorizontalFrame406");
   TGPictureButton *fPictureButton407 = new TGPictureButton(fHorizontalFrame406,gClient->GetPicture("bld_numberentry.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton407->SetToolTipText("Number Entry");
   fHorizontalFrame406->AddFrame(fPictureButton407, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton407->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel410 = new TGLabel(fHorizontalFrame406,"Number Entry",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel410->SetTextJustify(36);
   fLabel410->SetMargins(0,0,0,0);
   fLabel410->SetWrapLength(-1);
   fHorizontalFrame406->AddFrame(fLabel410, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame308->AddFrame(fHorizontalFrame406, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame411 = new TGHorizontalFrame(fVerticalFrame308,128,30,kHorizontalFrame,ucolor);
   fHorizontalFrame411->SetName("fHorizontalFrame411");
   TGPictureButton *fPictureButton412 = new TGPictureButton(fHorizontalFrame411,gClient->GetPicture("bld_combobox.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton412->SetToolTipText("Combo Box");
   fHorizontalFrame411->AddFrame(fPictureButton412, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton412->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel415 = new TGLabel(fHorizontalFrame411,"Combo Box",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel415->SetTextJustify(36);
   fLabel415->SetMargins(0,0,0,0);
   fLabel415->SetWrapLength(-1);
   fHorizontalFrame411->AddFrame(fLabel415, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame308->AddFrame(fHorizontalFrame411, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame416 = new TGHorizontalFrame(fVerticalFrame308,128,30,kHorizontalFrame,ucolor);
   fHorizontalFrame416->SetName("fHorizontalFrame416");
   TGPictureButton *fPictureButton417 = new TGPictureButton(fHorizontalFrame416,gClient->GetPicture("bld_listbox.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton417->SetToolTipText("List Box");
   fHorizontalFrame416->AddFrame(fPictureButton417, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton417->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel420 = new TGLabel(fHorizontalFrame416,"List Box",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel420->SetTextJustify(36);
   fLabel420->SetMargins(0,0,0,0);
   fLabel420->SetWrapLength(-1);
   fHorizontalFrame416->AddFrame(fLabel420, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame308->AddFrame(fHorizontalFrame416, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame421 = new TGHorizontalFrame(fVerticalFrame308,128,30,kHorizontalFrame,ucolor);
   fHorizontalFrame421->SetName("fHorizontalFrame421");
   TGPictureButton *fPictureButton422 = new TGPictureButton(fHorizontalFrame421,gClient->GetPicture("bld_hslider.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton422->SetToolTipText("Horizontal Slider");
   fHorizontalFrame421->AddFrame(fPictureButton422, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton422->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel425 = new TGLabel(fHorizontalFrame421,"Horizontal Slider",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel425->SetTextJustify(36);
   fLabel425->SetMargins(0,0,0,0);
   fLabel425->SetWrapLength(-1);
   fHorizontalFrame421->AddFrame(fLabel425, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame308->AddFrame(fHorizontalFrame421, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame426 = new TGHorizontalFrame(fVerticalFrame308,128,30,kHorizontalFrame,ucolor);
   fHorizontalFrame426->SetName("fHorizontalFrame426");
   TGPictureButton *fPictureButton427 = new TGPictureButton(fHorizontalFrame426,gClient->GetPicture("bld_vslider.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton427->SetToolTipText("Vertical Slider");
   fHorizontalFrame426->AddFrame(fPictureButton427, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton427->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel430 = new TGLabel(fHorizontalFrame426,"Vertical Slider",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel430->SetTextJustify(36);
   fLabel430->SetMargins(0,0,0,0);
   fLabel430->SetWrapLength(-1);
   fHorizontalFrame426->AddFrame(fLabel430, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame308->AddFrame(fHorizontalFrame426, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame431 = new TGHorizontalFrame(fVerticalFrame308,128,30,kHorizontalFrame,ucolor);
   fHorizontalFrame431->SetName("fHorizontalFrame431");
   TGPictureButton *fPictureButton432 = new TGPictureButton(fHorizontalFrame431,gClient->GetPicture("bld_hscrollbar.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton432->SetToolTipText("HScrollbar");
   fHorizontalFrame431->AddFrame(fPictureButton432, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton432->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel435 = new TGLabel(fHorizontalFrame431,"HScrollbar",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel435->SetTextJustify(36);
   fLabel435->SetMargins(0,0,0,0);
   fLabel435->SetWrapLength(-1);
   fHorizontalFrame431->AddFrame(fLabel435, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame308->AddFrame(fHorizontalFrame431, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame436 = new TGHorizontalFrame(fVerticalFrame308,128,30,kHorizontalFrame,ucolor);
   fHorizontalFrame436->SetName("fHorizontalFrame436");
   TGPictureButton *fPictureButton437 = new TGPictureButton(fHorizontalFrame436,gClient->GetPicture("bld_vscrollbar.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton437->SetToolTipText("VScrollbar");
   fHorizontalFrame436->AddFrame(fPictureButton437, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton437->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel440 = new TGLabel(fHorizontalFrame436,"VScrollbar",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel440->SetTextJustify(36);
   fLabel440->SetMargins(0,0,0,0);
   fLabel440->SetWrapLength(-1);
   fHorizontalFrame436->AddFrame(fLabel440, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame308->AddFrame(fHorizontalFrame436, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));
   fShutter90->AddItem(fShutterItem296);

   // "Complex Input" shutter item 
   TGShutterItem *fShutterItem309 = new TGShutterItem(fShutter90, new TGHotString("Complex Input"),10005,kVerticalFrame);
   fShutterItem309->SetName("fShutterItem309");
   TGCompositeFrame *fVerticalFrame321 = (TGCompositeFrame *)fShutterItem309->GetContainer();


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame441 = new TGHorizontalFrame(fVerticalFrame321,118,30,kHorizontalFrame,ucolor);
   fHorizontalFrame441->SetName("fHorizontalFrame441");
   TGPictureButton *fPictureButton442 = new TGPictureButton(fHorizontalFrame441,gClient->GetPicture("bld_listtree.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton442->SetToolTipText("List Tree");
   fHorizontalFrame441->AddFrame(fPictureButton442, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton442->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel445 = new TGLabel(fHorizontalFrame441,"List Tree",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel445->SetTextJustify(36);
   fLabel445->SetMargins(0,0,0,0);
   fLabel445->SetWrapLength(-1);
   fHorizontalFrame441->AddFrame(fLabel445, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame321->AddFrame(fHorizontalFrame441, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));
   fShutter90->AddItem(fShutterItem309);

   // "Display" shutter item 
   TGShutterItem *fShutterItem322 = new TGShutterItem(fShutter90, new TGHotString("Display"),10006,kVerticalFrame);
   fShutterItem322->SetName("fShutterItem322");
   TGCompositeFrame *fVerticalFrame334 = (TGCompositeFrame *)fShutterItem322->GetContainer();


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame446 = new TGHorizontalFrame(fVerticalFrame334,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame446->SetName("fHorizontalFrame446");
   TGPictureButton *fPictureButton447 = new TGPictureButton(fHorizontalFrame446,gClient->GetPicture("bld_label.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton447->SetToolTipText("Text Label");
   fHorizontalFrame446->AddFrame(fPictureButton447, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton447->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel450 = new TGLabel(fHorizontalFrame446,"Text Label",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel450->SetTextJustify(36);
   fLabel450->SetMargins(0,0,0,0);
   fLabel450->SetWrapLength(-1);
   fHorizontalFrame446->AddFrame(fLabel450, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame334->AddFrame(fHorizontalFrame446, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame451 = new TGHorizontalFrame(fVerticalFrame334,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame451->SetName("fHorizontalFrame451");
   TGPictureButton *fPictureButton452 = new TGPictureButton(fHorizontalFrame451,gClient->GetPicture("bld_image.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton452->SetToolTipText("Icon");
   fHorizontalFrame451->AddFrame(fPictureButton452, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton452->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel455 = new TGLabel(fHorizontalFrame451,"Icon",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel455->SetTextJustify(36);
   fLabel455->SetMargins(0,0,0,0);
   fLabel455->SetWrapLength(-1);
   fHorizontalFrame451->AddFrame(fLabel455, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame334->AddFrame(fHorizontalFrame451, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame456 = new TGHorizontalFrame(fVerticalFrame334,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame456->SetName("fHorizontalFrame456");
   TGPictureButton *fPictureButton457 = new TGPictureButton(fHorizontalFrame456,gClient->GetPicture("bld_hseparator.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton457->SetToolTipText("Horizontal Line");
   fHorizontalFrame456->AddFrame(fPictureButton457, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton457->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel460 = new TGLabel(fHorizontalFrame456,"Horizontal Line",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel460->SetTextJustify(36);
   fLabel460->SetMargins(0,0,0,0);
   fLabel460->SetWrapLength(-1);
   fHorizontalFrame456->AddFrame(fLabel460, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame334->AddFrame(fHorizontalFrame456, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame461 = new TGHorizontalFrame(fVerticalFrame334,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame461->SetName("fHorizontalFrame461");
   TGPictureButton *fPictureButton462 = new TGPictureButton(fHorizontalFrame461,gClient->GetPicture("bld_vseparator.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton462->SetToolTipText("Vertical Line");
   fHorizontalFrame461->AddFrame(fPictureButton462, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton462->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel465 = new TGLabel(fHorizontalFrame461,"Vertical Line",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel465->SetTextJustify(36);
   fLabel465->SetMargins(0,0,0,0);
   fLabel465->SetWrapLength(-1);
   fHorizontalFrame461->AddFrame(fLabel465, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame334->AddFrame(fHorizontalFrame461, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame471 = new TGHorizontalFrame(fVerticalFrame334,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame471->SetName("fHorizontalFrame471");
   TGPictureButton *fPictureButton472 = new TGPictureButton(fHorizontalFrame471,gClient->GetPicture("bld_hprogressbar.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton472->SetToolTipText("HProgress Bar");
   fHorizontalFrame471->AddFrame(fPictureButton472, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton472->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel475 = new TGLabel(fHorizontalFrame471,"HProgress Bar",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel475->SetTextJustify(36);
   fLabel475->SetMargins(0,0,0,0);
   fLabel475->SetWrapLength(-1);
   fHorizontalFrame471->AddFrame(fLabel475, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame334->AddFrame(fHorizontalFrame471, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame476 = new TGHorizontalFrame(fVerticalFrame334,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame476->SetName("fHorizontalFrame476");
   TGPictureButton *fPictureButton477 = new TGPictureButton(fHorizontalFrame476,gClient->GetPicture("bld_vprogressbar.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton477->SetToolTipText("VProgress Bar");
   fHorizontalFrame476->AddFrame(fPictureButton477, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton477->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel480 = new TGLabel(fHorizontalFrame476,"VProgress Bar",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel480->SetTextJustify(36);
   fLabel480->SetMargins(0,0,0,0);
   fLabel480->SetWrapLength(-1);
   fHorizontalFrame476->AddFrame(fLabel480, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame334->AddFrame(fHorizontalFrame476, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame481 = new TGHorizontalFrame(fVerticalFrame334,134,30,kHorizontalFrame,ucolor);
   fHorizontalFrame481->SetName("fHorizontalFrame481");
   TGPictureButton *fPictureButton482 = new TGPictureButton(fHorizontalFrame481,gClient->GetPicture("bld_embedcanvas.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton482->SetToolTipText("Embed Canvas");
   fHorizontalFrame481->AddFrame(fPictureButton482, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton482->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel485 = new TGLabel(fHorizontalFrame481,"Embed Canvas",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel485->SetTextJustify(36);
   fLabel485->SetMargins(0,0,0,0);
   fLabel485->SetWrapLength(-1);
   fHorizontalFrame481->AddFrame(fLabel485, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame334->AddFrame(fHorizontalFrame481, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));
   fShutter90->AddItem(fShutterItem322);

   // "Dialogs" shutter item 
   TGShutterItem *fShutterItem335 = new TGShutterItem(fShutter90, new TGHotString("Dialogs"),10007,kVerticalFrame);
   fShutterItem335->SetName("fShutterItem335");
   TGCompositeFrame *fVerticalFrame347 = (TGCompositeFrame *)fShutterItem335->GetContainer();


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame516 = new TGHorizontalFrame(fVerticalFrame347,118,30,kHorizontalFrame,ucolor);
   fHorizontalFrame516->SetName("fHorizontalFrame516");
   TGPictureButton *fPictureButton517 = new TGPictureButton(fHorizontalFrame516,gClient->GetPicture("bld_colorselect.xpm"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton517->SetToolTipText("Color Selector");
   fHorizontalFrame516->AddFrame(fPictureButton517, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton517->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel520 = new TGLabel(fHorizontalFrame516,"Color Selector",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel520->SetTextJustify(36);
   fLabel520->SetMargins(0,0,0,0);
   fLabel520->SetWrapLength(-1);
   fHorizontalFrame516->AddFrame(fLabel520, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame347->AddFrame(fHorizontalFrame516, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));
   fShutter90->AddItem(fShutterItem335);

   // "User's Macros" shutter item 
   TGShutterItem *fShutterItem348 = new TGShutterItem(fShutter90, new TGHotString("User's Macros"),10008,kVerticalFrame);
   fShutterItem348->SetName("fShutterItem348");
   TGCompositeFrame *fVerticalFrame360 = (TGCompositeFrame *)fShutterItem348->GetContainer();


   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame805 = new TGHorizontalFrame(fVerticalFrame360,195,62,kHorizontalFrame,ucolor);
   fHorizontalFrame805->SetName("fHorizontalFrame805");
   TGPictureButton *fPictureButton806 = new TGPictureButton(fHorizontalFrame805,gClient->GetPicture("/home/darkside/Vlad_Programs/git_repositories/Napoli_2017_work/Main_project/GIU_Builder.C;0__100x53"),-1,TGPictureButton::GetDefaultGC()(),kRaisedFrame);
   fPictureButton806->SetToolTipText("/home/darkside/Vlad_Programs/git_repositories/Napoli_2017_work/Main_project/GIU_Builder.C");
   fHorizontalFrame805->AddFrame(fPictureButton806, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));
   fPictureButton806->Connect("Clicked()", 0, 0, "HandleButtons()");

   TGLabel *fLabel809 = new TGLabel(fHorizontalFrame805,"GIU_Builder.C",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel809->SetTextJustify(36);
   fLabel809->SetMargins(0,0,0,0);
   fLabel809->SetWrapLength(-1);
   fHorizontalFrame805->AddFrame(fLabel809, new TGLayoutHints(kLHintsTop | kLHintsCenterY,3,3,3,3));

   fVerticalFrame360->AddFrame(fHorizontalFrame805, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,0));
   fShutter90->AddItem(fShutterItem348);
   fShutter90->SetSelectedItem(fShutterItem322);
   fShutter90->Resize(140,894);
   fHorizontalFrame89->AddFrame(fShutter90, new TGLayoutHints(kLHintsLeft | kLHintsTop | kLHintsExpandY));
   TGVSplitter *fVSplitter91 = new TGVSplitter(fHorizontalFrame89,4,894);
   fVSplitter91->SetName("fVSplitter91");
   fVSplitter91->SetFrame(fShutter90,kTRUE);
   fHorizontalFrame89->AddFrame(fVSplitter91, new TGLayoutHints(kLHintsLeft | kLHintsExpandY));

   // MDI main frame
   TGMdiMainFrame *fMdiMainFrame92 = new TGMdiMainFrame(fHorizontalFrame89,fMdiMenuBar16,1533,894,kSunkenFrame);
   fMdiMainFrame92->SetName("fMdiMainFrame92");

   // MDI frame "/home/darkside/Vlad_Programs/git_repositories/Napoli_2017_work/Main_project/GIU_Builder.C"
   TGMdiFrame *fMdiFrame523 = new TGMdiFrame(fMdiMainFrame92,1332,830,kOwnBackground);
   fMdiFrame523->SetName("fMdiFrame523");
   fMdiFrame523->SetLayoutBroken(kTRUE);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas931 = new TRootEmbeddedCanvas(0,fMdiFrame523,300,300,kSunkenFrame);
   fRootEmbeddedCanvas931->SetName("fRootEmbeddedCanvas931");
   Int_t wfRootEmbeddedCanvas931 = fRootEmbeddedCanvas931->GetCanvasWindowId();
   TCanvas *c126 = new TCanvas("c126", 10, 10, wfRootEmbeddedCanvas931);
   fRootEmbeddedCanvas931->AdoptCanvas(c126);
   fMdiFrame523->AddFrame(fRootEmbeddedCanvas931, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas931->MoveResize(984,16,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas1014 = new TRootEmbeddedCanvas(0,fMdiFrame523,300,300,kSunkenFrame);
   fRootEmbeddedCanvas1014->SetName("fRootEmbeddedCanvas1014");
   Int_t wfRootEmbeddedCanvas1014 = fRootEmbeddedCanvas1014->GetCanvasWindowId();
   TCanvas *c127 = new TCanvas("c127", 10, 10, wfRootEmbeddedCanvas1014);
   fRootEmbeddedCanvas1014->AdoptCanvas(c127);
   fMdiFrame523->AddFrame(fRootEmbeddedCanvas1014, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas1014->MoveResize(336,16,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas572 = new TRootEmbeddedCanvas(0,fMdiFrame523,300,300,kSunkenFrame);
   fRootEmbeddedCanvas572->SetName("fRootEmbeddedCanvas572");
   Int_t wfRootEmbeddedCanvas572 = fRootEmbeddedCanvas572->GetCanvasWindowId();
   TCanvas *c128 = new TCanvas("c128", 10, 10, wfRootEmbeddedCanvas572);
   fRootEmbeddedCanvas572->AdoptCanvas(c128);
   fMdiFrame523->AddFrame(fRootEmbeddedCanvas572, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas572->MoveResize(664,16,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas1058 = new TRootEmbeddedCanvas(0,fMdiFrame523,300,300,kSunkenFrame);
   fRootEmbeddedCanvas1058->SetName("fRootEmbeddedCanvas1058");
   Int_t wfRootEmbeddedCanvas1058 = fRootEmbeddedCanvas1058->GetCanvasWindowId();
   TCanvas *c129 = new TCanvas("c129", 10, 10, wfRootEmbeddedCanvas1058);
   fRootEmbeddedCanvas1058->AdoptCanvas(c129);
   fMdiFrame523->AddFrame(fRootEmbeddedCanvas1058, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas1058->MoveResize(336,336,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas1074 = new TRootEmbeddedCanvas(0,fMdiFrame523,300,300,kSunkenFrame);
   fRootEmbeddedCanvas1074->SetName("fRootEmbeddedCanvas1074");
   Int_t wfRootEmbeddedCanvas1074 = fRootEmbeddedCanvas1074->GetCanvasWindowId();
   TCanvas *c130 = new TCanvas("c130", 10, 10, wfRootEmbeddedCanvas1074);
   fRootEmbeddedCanvas1074->AdoptCanvas(c130);
   fMdiFrame523->AddFrame(fRootEmbeddedCanvas1074, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas1074->MoveResize(664,336,300,300);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas1090 = new TRootEmbeddedCanvas(0,fMdiFrame523,300,300,kSunkenFrame);
   fRootEmbeddedCanvas1090->SetName("fRootEmbeddedCanvas1090");
   Int_t wfRootEmbeddedCanvas1090 = fRootEmbeddedCanvas1090->GetCanvasWindowId();
   TCanvas *c131 = new TCanvas("c131", 10, 10, wfRootEmbeddedCanvas1090);
   fRootEmbeddedCanvas1090->AdoptCanvas(c131);
   fMdiFrame523->AddFrame(fRootEmbeddedCanvas1090, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas1090->MoveResize(992,336,300,300);

   fMdiFrame523->SetWindowName("/home/darkside/Vlad_Programs/git_repositories/Napoli_2017_work/Main_project/GIU_Builder.C");
   fMdiFrame523->SetMdiHints(kMdiDefaultHints);
   fMdiFrame523->MapSubwindows();
   fMdiFrame523->Layout();
   fMdiMainFrame92->SetCurrent(fMdiFrame523);
   fHorizontalFrame89->AddFrame(fMdiMainFrame92, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMdiMainFrame92->Connect("FrameClosed(int)", 0, 0, "HandleWindowClosed(int)");

   // vertical frame
   TGVerticalFrame *fuiBldEditor104 = new TGVerticalFrame(fHorizontalFrame89,243,894,kVerticalFrame);
   fuiBldEditor104->SetName("fuiBldEditor104");

   // composite frame
   TGCompositeFrame *fuiBldNameFrame105 = new TGCompositeFrame(fuiBldEditor104,233,184);
   fuiBldNameFrame105->SetName("fuiBldNameFrame105");
   fuiBldNameFrame105->SetLayoutManager(new TGVerticalLayout(fuiBldNameFrame105));

   // vertical frame
   TGVerticalFrame *fVerticalFrame106 = new TGVerticalFrame(fuiBldNameFrame105,233,184,kVerticalFrame);
   fVerticalFrame106->SetName("fVerticalFrame106");

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame107 = new TGHorizontalFrame(fVerticalFrame106,233,17,kHorizontalFrame);
   fHorizontalFrame107->SetName("fHorizontalFrame107");
   TGLabel *fLabel108 = new TGLabel(fHorizontalFrame107,"MDI Frame content");
   fLabel108->SetTextJustify(36);
   fLabel108->SetMargins(0,0,0,0);
   fLabel108->SetWrapLength(-1);
   fHorizontalFrame107->AddFrame(fLabel108, new TGLayoutHints(kLHintsLeft,0,1,0,0));
   TGHorizontal3DLine *fHorizontal3DLine109 = new TGHorizontal3DLine(fHorizontalFrame107,119,2);
   fHorizontal3DLine109->SetName("fHorizontal3DLine109");
   fHorizontalFrame107->AddFrame(fHorizontal3DLine109, new TGLayoutHints(kLHintsExpandX,5,5,7,7));

   fVerticalFrame106->AddFrame(fHorizontalFrame107, new TGLayoutHints(kLHintsTop | kLHintsExpandX));

   // canvas widget
   TGCanvas *fCanvas110 = new TGCanvas(fVerticalFrame106,233,110,kSunkenFrame);
   fCanvas110->SetName("fCanvas110");

   // canvas viewport
   TGViewPort *fViewPort111 = fCanvas110->GetViewPort();

   // list tree
   TGListTree *fListTree120 = new TGListTree(fCanvas110,kChildFrame);
   fListTree120->SetName("fListTree120");

   const TGPicture *popen;       //used for list tree items
   const TGPicture *pclose;      //used for list tree items

   TGListTreeItem *item0 = fListTree120->AddItem(NULL,"fMdiFrame523");
   popen = gClient->GetPicture("ofolder_t.xpm");
   pclose = gClient->GetPicture("folder_t.xpm");
   item0->SetPictures(popen, pclose);
   fListTree120->OpenItem(item0);
   TGListTreeItem *item1 = fListTree120->AddItem(item0,"fRootEmbeddedCanvas572");
   item1->SetPictures(popen, pclose);
   TGListTreeItem *item2 = fListTree120->AddItem(item0,"fRootEmbeddedCanvas931");
   item2->SetPictures(popen, pclose);
   TGListTreeItem *item3 = fListTree120->AddItem(item0,"fRootEmbeddedCanvas1014");
   item3->SetPictures(popen, pclose);
   TGListTreeItem *item4 = fListTree120->AddItem(item0,"fRootEmbeddedCanvas1058");
   item4->SetPictures(popen, pclose);
   TGListTreeItem *item5 = fListTree120->AddItem(item0,"fRootEmbeddedCanvas1074");
   item5->SetPictures(popen, pclose);
   TGListTreeItem *item6 = fListTree120->AddItem(item0,"fRootEmbeddedCanvas1090");
   item6->SetPictures(popen, pclose);

   fViewPort111->AddFrame(fListTree120);
   fListTree120->SetLayoutManager(new TGVerticalLayout(fListTree120));
   fListTree120->MapSubwindows();
   fCanvas110->SetContainer(fListTree120);
   fCanvas110->MapSubwindows();
   fCanvas110->SetVsbPosition(22);
   fVerticalFrame106->AddFrame(fCanvas110, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame121 = new TGHorizontalFrame(fVerticalFrame106,233,17,kHorizontalFrame);
   fHorizontalFrame121->SetName("fHorizontalFrame121");
   TGLabel *fLabel122 = new TGLabel(fHorizontalFrame121,"Variable name");
   fLabel122->SetTextJustify(36);
   fLabel122->SetMargins(0,0,0,0);
   fLabel122->SetWrapLength(-1);
   fHorizontalFrame121->AddFrame(fLabel122, new TGLayoutHints(kLHintsLeft | kLHintsCenterY,0,1,0,0));
   TGHorizontal3DLine *fHorizontal3DLine123 = new TGHorizontal3DLine(fHorizontalFrame121,150,2);
   fHorizontal3DLine123->SetName("fHorizontal3DLine123");
   fHorizontalFrame121->AddFrame(fHorizontal3DLine123, new TGLayoutHints(kLHintsCenterY | kLHintsExpandX,1,1,1,1));

   fVerticalFrame106->AddFrame(fHorizontalFrame121, new TGLayoutHints(kLHintsTop | kLHintsExpandX));
   TGLabel *fLabel124 = new TGLabel(fVerticalFrame106,"TRootEmbeddedCanvas");
   fLabel124->SetTextJustify(36);
   fLabel124->SetMargins(0,0,0,0);
   fLabel124->SetWrapLength(-1);
   fVerticalFrame106->AddFrame(fLabel124, new TGLayoutHints(kLHintsCenterX,1,1,0,0));

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame125 = new TGHorizontalFrame(fVerticalFrame106,204,23,kHorizontalFrame);
   fHorizontalFrame125->SetName("fHorizontalFrame125");

   TGFont *ufont;         // will reflect user font changes
   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   TGGC   *uGC;           // will reflect user GC changes
   // graphics context changes
   GCValues_t valEntry126;
   valEntry126.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry126.fForeground);
   gClient->GetColorByName("#e8e8e8",valEntry126.fBackground);
   valEntry126.fFillStyle = kFillSolid;
   valEntry126.fFont = ufont->GetFontHandle();
   valEntry126.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry126, kTRUE);
   TGTextEntry *fTextEntry126 = new TGTextEntry(fHorizontalFrame125, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kOwnBackground);
   fTextEntry126->SetMaxLength(4096);
   fTextEntry126->SetAlignment(kTextLeft);
   fTextEntry126->SetText("fRootEmbeddedCanvas1090");
   fTextEntry126->Resize(120,fTextEntry126->GetDefaultHeight());
   fHorizontalFrame125->AddFrame(fTextEntry126, new TGLayoutHints(kLHintsCenterX | kLHintsTop,2,2,0,0));
   TGTextButton *fTextButton127 = new TGTextButton(fHorizontalFrame125,"   Set Name   ",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame);
   fTextButton127->SetTextJustify(36);
   fTextButton127->SetMargins(0,0,0,0);
   fTextButton127->SetWrapLength(-1);
   fTextButton127->Resize(80,23);
   fTextButton127->SetToolTipText("Set variable name");
   fHorizontalFrame125->AddFrame(fTextButton127, new TGLayoutHints(kLHintsTop));
   fTextButton127->Connect("Clicked()", 0, 0, "UpdateName()");

   fVerticalFrame106->AddFrame(fHorizontalFrame125, new TGLayoutHints(kLHintsCenterX | kLHintsTop,2,2,0,0));

   fuiBldNameFrame105->AddFrame(fVerticalFrame106, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));

   fuiBldEditor104->AddFrame(fuiBldNameFrame105, new TGLayoutHints(kLHintsLeft | kLHintsTop | kLHintsExpandX,5,5,2,2));
   TGHSplitter *fHSplitter130 = new TGHSplitter(fuiBldEditor104,243,5);
   fHSplitter130->SetName("fHSplitter130");
   fHSplitter130->SetFrame(fuiBldNameFrame105,kTRUE);
   fuiBldEditor104->AddFrame(fHSplitter130, new TGLayoutHints(kLHintsTop | kLHintsExpandX,0,0,5,5));

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame131 = new TGHorizontalFrame(fuiBldEditor104,239,21,kHorizontalFrame);
   fHorizontalFrame131->SetName("fHorizontalFrame131");
   TGLabel *fLabel132 = new TGLabel(fHorizontalFrame131,"Composite Frame Layout");
   fLabel132->SetTextJustify(36);
   fLabel132->SetMargins(0,0,0,0);
   fLabel132->SetWrapLength(-1);
   fHorizontalFrame131->AddFrame(fLabel132, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   TGHorizontal3DLine *fHorizontal3DLine133 = new TGHorizontal3DLine(fHorizontalFrame131,94,2);
   fHorizontal3DLine133->SetName("fHorizontal3DLine133");
   fHorizontalFrame131->AddFrame(fHorizontal3DLine133, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,2));

   fuiBldEditor104->AddFrame(fHorizontalFrame131, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,2));

   // vertical frame
   TGVerticalFrame *fVerticalFrame134 = new TGVerticalFrame(fuiBldEditor104,239,48,kVerticalFrame);
   fVerticalFrame134->SetName("fVerticalFrame134");
   TGLabel *fLabel135 = new TGLabel(fVerticalFrame134,"Automatic layout disabled");
   fLabel135->SetTextJustify(36);
   fLabel135->SetMargins(0,0,0,0);
   fLabel135->SetWrapLength(-1);
   fVerticalFrame134->AddFrame(fLabel135, new TGLayoutHints(kLHintsCenterX | kLHintsTop,2,2,2,2));
   TGTextButton *fTextButton136 = new TGTextButton(fVerticalFrame134,"    Enable layout    ",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame);
   fTextButton136->SetTextJustify(36);
   fTextButton136->SetMargins(0,0,0,0);
   fTextButton136->SetWrapLength(-1);
   fTextButton136->Resize(107,23);
   fTextButton136->SetState(kButtonDisabled);
   fTextButton136->SetToolTipText("If layout is on, all the frame \nelements get layouted automatically.");
   fVerticalFrame134->AddFrame(fTextButton136, new TGLayoutHints(kLHintsCenterX | kLHintsTop,2,2,2,2));
   fTextButton136->Connect("Clicked()", 0, 0, "SwitchLayout()");

   fuiBldEditor104->AddFrame(fVerticalFrame134, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,2));
   TGHorizontal3DLine *fHorizontal3DLine137 = new TGHorizontal3DLine(fuiBldEditor104,239,2);
   fHorizontal3DLine137->SetName("fHorizontal3DLine137");
   fuiBldEditor104->AddFrame(fHorizontal3DLine137, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,2));

   // tab widget
   TGTab *fTab140 = new TGTab(fuiBldEditor104,239,604);

   // container of "Layout"
   TGCompositeFrame *fCompositeFrame143;
   fCompositeFrame143 = fTab140->AddTab("Layout");
   fCompositeFrame143->SetLayoutManager(new TGVerticalLayout(fCompositeFrame143));

   // vertical frame
   TGVerticalFrame *fuiBldHintsEditor146 = new TGVerticalFrame(fCompositeFrame143,231,305,kVerticalFrame);

   // vertical frame
   TGVerticalFrame *fVerticalFrame147 = new TGVerticalFrame(fuiBldHintsEditor146,228,338,kVerticalFrame);

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame148 = new TGHorizontalFrame(fVerticalFrame147,116,22,kHorizontalFrame);
   TGCheckButton *fCheckButton149 = new TGCheckButton(fHorizontalFrame148,"");
   fCheckButton149->SetState(kButtonDisabled);
   fCheckButton149->SetDisabledAndSelected(kFALSE);
   fCheckButton149->SetTextJustify(36);
   fCheckButton149->SetMargins(0,0,0,0);
   fCheckButton149->SetWrapLength(-1);
   fHorizontalFrame148->AddFrame(fCheckButton149, new TGLayoutHints(kLHintsLeft | kLHintsTop,0,1,2,2));
   fCheckButton149->Connect("Toggled(bool)", 0, 0, "LayoutSubframes(bool)");
   TGLabel *fLabel150 = new TGLabel(fHorizontalFrame148,"Layout subframes");
   fLabel150->SetTextJustify(36);
   fLabel150->SetMargins(0,0,0,0);
   fLabel150->SetWrapLength(-1);
   fHorizontalFrame148->AddFrame(fLabel150, new TGLayoutHints(kLHintsLeft | kLHintsCenterX | kLHintsTop,1,1,2,2));

   fVerticalFrame147->AddFrame(fHorizontalFrame148, new TGLayoutHints(kLHintsLeft | kLHintsCenterX | kLHintsTop,1,1,1,1));

   // "Padding" group frame
   TGGroupFrame *fGroupFrame151 = new TGGroupFrame(fVerticalFrame147,"Padding");
   TGLabel *fLabel152 = new TGLabel(fGroupFrame151,"Top ");
   fLabel152->SetTextJustify(36);
   fLabel152->SetMargins(0,0,0,0);
   fLabel152->SetWrapLength(-1);
   fGroupFrame151->AddFrame(fLabel152, new TGTableLayoutHints(0,1,0,1,kLHintsRight | kLHintsCenterY,0,2,2,2));
   TGNumberEntry *fNumberEntry153 = new TGNumberEntry(fGroupFrame151, (Double_t) 2,4,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame151->AddFrame(fNumberEntry153, new TGTableLayoutHints(1,2,0,1,kLHintsLeft | kLHintsCenterY,0,0,2,2));
   fNumberEntry153->Connect("ValueSet(long)", 0, 0, "UpdateState()");
   TGLabel *fLabel157 = new TGLabel(fGroupFrame151," Left ");
   fLabel157->SetTextJustify(36);
   fLabel157->SetMargins(0,0,0,0);
   fLabel157->SetWrapLength(-1);
   fGroupFrame151->AddFrame(fLabel157, new TGTableLayoutHints(2,3,0,1,kLHintsRight | kLHintsCenterY,2,2,2,2));
   TGNumberEntry *fNumberEntry158 = new TGNumberEntry(fGroupFrame151, (Double_t) 2,4,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame151->AddFrame(fNumberEntry158, new TGTableLayoutHints(3,4,0,1,kLHintsLeft | kLHintsCenterY,0,0,2,2));
   fNumberEntry158->Connect("ValueSet(long)", 0, 0, "UpdateState()");
   TGLabel *fLabel162 = new TGLabel(fGroupFrame151,"Bottom ");
   fLabel162->SetTextJustify(36);
   fLabel162->SetMargins(0,0,0,0);
   fLabel162->SetWrapLength(-1);
   fGroupFrame151->AddFrame(fLabel162, new TGTableLayoutHints(0,1,1,2,kLHintsRight | kLHintsCenterY,0,2,2,2));
   TGNumberEntry *fNumberEntry163 = new TGNumberEntry(fGroupFrame151, (Double_t) 2,4,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame151->AddFrame(fNumberEntry163, new TGTableLayoutHints(1,2,1,2,kLHintsLeft | kLHintsCenterY,0,0,2,2));
   fNumberEntry163->Connect("ValueSet(long)", 0, 0, "UpdateState()");
   TGLabel *fLabel167 = new TGLabel(fGroupFrame151," Right ");
   fLabel167->SetTextJustify(36);
   fLabel167->SetMargins(0,0,0,0);
   fLabel167->SetWrapLength(-1);
   fGroupFrame151->AddFrame(fLabel167, new TGTableLayoutHints(2,3,1,2,kLHintsRight | kLHintsCenterY,2,2,2,2));
   TGNumberEntry *fNumberEntry168 = new TGNumberEntry(fGroupFrame151, (Double_t) 2,4,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame151->AddFrame(fNumberEntry168, new TGTableLayoutHints(3,4,1,2,kLHintsLeft | kLHintsCenterY,0,0,2,2));
   fNumberEntry168->Connect("ValueSet(long)", 0, 0, "UpdateState()");

   fGroupFrame151->SetLayoutManager( new TGTableLayout(fGroupFrame151,2,4));
   fGroupFrame151->Resize(224,88);
   fVerticalFrame147->AddFrame(fGroupFrame151, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,2));

   // "Layout" group frame
   TGGroupFrame *fGroupFrame172 = new TGGroupFrame(fVerticalFrame147,"Layout");
   TGCheckButton *fCheckButton173 = new TGCheckButton(fGroupFrame172,"Top");
   fCheckButton173->SetState(kButtonDown);
   fCheckButton173->SetTextJustify(36);
   fCheckButton173->SetMargins(0,0,0,0);
   fCheckButton173->SetWrapLength(-1);
   fGroupFrame172->AddFrame(fCheckButton173, new TGTableLayoutHints(0,1,0,1,kLHintsLeft | kLHintsCenterY,5,2,2,2));
   fCheckButton173->Connect("Clicked()", 0, 0, "UpdateState()");
   TGCheckButton *fCheckButton174 = new TGCheckButton(fGroupFrame172,"Bottom");
   fCheckButton174->SetTextJustify(36);
   fCheckButton174->SetMargins(0,0,0,0);
   fCheckButton174->SetWrapLength(-1);
   fGroupFrame172->AddFrame(fCheckButton174, new TGTableLayoutHints(0,1,1,2,kLHintsLeft | kLHintsCenterY,5,2,2,2));
   fCheckButton174->Connect("Clicked()", 0, 0, "UpdateState()");
   TGCheckButton *fCheckButton175 = new TGCheckButton(fGroupFrame172,"Left");
   fCheckButton175->SetState(kButtonDown);
   fCheckButton175->SetTextJustify(36);
   fCheckButton175->SetMargins(0,0,0,0);
   fCheckButton175->SetWrapLength(-1);
   fGroupFrame172->AddFrame(fCheckButton175, new TGTableLayoutHints(0,1,2,3,kLHintsLeft | kLHintsCenterY,5,2,2,2));
   fCheckButton175->Connect("Clicked()", 0, 0, "UpdateState()");
   TGCheckButton *fCheckButton176 = new TGCheckButton(fGroupFrame172,"Right");
   fCheckButton176->SetTextJustify(36);
   fCheckButton176->SetMargins(0,0,0,0);
   fCheckButton176->SetWrapLength(-1);
   fGroupFrame172->AddFrame(fCheckButton176, new TGTableLayoutHints(0,1,3,4,kLHintsLeft | kLHintsCenterY,5,2,2,2));
   fCheckButton176->Connect("Clicked()", 0, 0, "UpdateState()");
   TGCheckButton *fCheckButton177 = new TGCheckButton(fGroupFrame172,"Center in X");
   fCheckButton177->SetTextJustify(36);
   fCheckButton177->SetMargins(0,0,0,0);
   fCheckButton177->SetWrapLength(-1);
   fGroupFrame172->AddFrame(fCheckButton177, new TGTableLayoutHints(1,2,0,1,kLHintsLeft | kLHintsCenterY,9,2,2,2));
   fCheckButton177->Connect("Clicked()", 0, 0, "UpdateState()");
   TGCheckButton *fCheckButton178 = new TGCheckButton(fGroupFrame172,"Center in Y");
   fCheckButton178->SetTextJustify(36);
   fCheckButton178->SetMargins(0,0,0,0);
   fCheckButton178->SetWrapLength(-1);
   fGroupFrame172->AddFrame(fCheckButton178, new TGTableLayoutHints(1,2,1,2,kLHintsLeft | kLHintsCenterY,9,2,2,2));
   fCheckButton178->Connect("Clicked()", 0, 0, "UpdateState()");
   TGCheckButton *fCheckButton179 = new TGCheckButton(fGroupFrame172,"Expand in X");
   fCheckButton179->SetTextJustify(36);
   fCheckButton179->SetMargins(0,0,0,0);
   fCheckButton179->SetWrapLength(-1);
   fGroupFrame172->AddFrame(fCheckButton179, new TGTableLayoutHints(1,2,2,3,kLHintsLeft | kLHintsCenterY,9,2,2,2));
   fCheckButton179->Connect("Clicked()", 0, 0, "UpdateState()");
   TGCheckButton *fCheckButton180 = new TGCheckButton(fGroupFrame172,"Expand in Y");
   fCheckButton180->SetTextJustify(36);
   fCheckButton180->SetMargins(0,0,0,0);
   fCheckButton180->SetWrapLength(-1);
   fGroupFrame172->AddFrame(fCheckButton180, new TGTableLayoutHints(1,2,3,4,kLHintsLeft | kLHintsCenterY,9,2,2,2));
   fCheckButton180->Connect("Clicked()", 0, 0, "UpdateState()");

   fGroupFrame172->SetLayoutManager( new TGTableLayout(fGroupFrame172,4,2));
   fGroupFrame172->Resize(224,122);
   fVerticalFrame147->AddFrame(fGroupFrame172, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,2));

   // vertical frame
   TGVerticalFrame *fVerticalFrame181 = new TGVerticalFrame(fVerticalFrame147,224,92,kVerticalFrame);

   // "Matrix layout" group frame
   TGGroupFrame *fGroupFrame182 = new TGGroupFrame(fVerticalFrame181,"Matrix layout");

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame183 = new TGHorizontalFrame(fGroupFrame182,186,27,kHorizontalFrame);
   TGLabel *fLabel184 = new TGLabel(fHorizontalFrame183," Cols ");
   fLabel184->SetTextJustify(36);
   fLabel184->SetMargins(0,0,0,0);
   fLabel184->SetWrapLength(-1);
   fHorizontalFrame183->AddFrame(fLabel184, new TGLayoutHints(kLHintsLeft | kLHintsCenterY,2,2,2,2));
   TGNumberEntry *fNumberEntry185 = new TGNumberEntry(fHorizontalFrame183, (Double_t) 0,4,-1,(TGNumberFormat::EStyle) 5,(TGNumberFormat::EAttribute) 0,(TGNumberFormat::ELimit) 1,1);
   fHorizontalFrame183->AddFrame(fNumberEntry185, new TGLayoutHints(kLHintsLeft | kLHintsCenterY,2,2,2,2));
   TGLabel *fLabel189 = new TGLabel(fHorizontalFrame183," Rows ");
   fLabel189->SetTextJustify(36);
   fLabel189->SetMargins(0,0,0,0);
   fLabel189->SetWrapLength(-1);
   fHorizontalFrame183->AddFrame(fLabel189, new TGLayoutHints(kLHintsLeft | kLHintsCenterY,2,2,2,2));
   TGNumberEntry *fNumberEntry190 = new TGNumberEntry(fHorizontalFrame183, (Double_t) 0,4,-1,(TGNumberFormat::EStyle) 5,(TGNumberFormat::EAttribute) 0,(TGNumberFormat::ELimit) 1,1);
   fHorizontalFrame183->AddFrame(fNumberEntry190, new TGLayoutHints(kLHintsLeft | kLHintsCenterY,2,2,2,2));

   fGroupFrame182->AddFrame(fHorizontalFrame183, new TGLayoutHints(kLHintsCenterY | kLHintsExpandX,2,2,2,2));
   TGTextButton *fTextButton194 = new TGTextButton(fGroupFrame182," Apply ",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame);
   fTextButton194->SetTextJustify(36);
   fTextButton194->SetMargins(0,0,0,0);
   fTextButton194->SetWrapLength(-1);
   fTextButton194->Resize(180,23);
   fGroupFrame182->AddFrame(fTextButton194, new TGLayoutHints(kLHintsCenterY | kLHintsExpandX,5,5,2,2));
   fTextButton194->Connect("Clicked()", 0, 0, "MatrixLayout()");

   fGroupFrame182->SetLayoutManager(new TGVerticalLayout(fGroupFrame182));
   fGroupFrame182->Resize(224,92);
   fVerticalFrame181->AddFrame(fGroupFrame182, new TGLayoutHints(kLHintsTop | kLHintsExpandX));

   fVerticalFrame147->AddFrame(fVerticalFrame181, new TGLayoutHints(kLHintsBottom | kLHintsExpandX,2,2,2,2));

   fuiBldHintsEditor146->AddFrame(fVerticalFrame147, new TGLayoutHints(kLHintsNormal));

   fCompositeFrame143->AddFrame(fuiBldHintsEditor146, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY,2,2,2,2));

   // vertical frame
   TGVerticalFrame *fuiBldGeometryFrame195 = new TGVerticalFrame(fCompositeFrame143,231,66,kVerticalFrame);

   // "Size" group frame
   TGGroupFrame *fGroupFrame196 = new TGGroupFrame(fuiBldGeometryFrame195,"Size");

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame197 = new TGHorizontalFrame(fGroupFrame196,197,27,kHorizontalFrame);
   TGLabel *fLabel198 = new TGLabel(fHorizontalFrame197," Width ");
   fLabel198->SetTextJustify(36);
   fLabel198->SetMargins(0,0,0,0);
   fLabel198->SetWrapLength(-1);
   fHorizontalFrame197->AddFrame(fLabel198, new TGLayoutHints(kLHintsLeft | kLHintsCenterY,2,2,2,2));
   TGNumberEntry *fNumberEntry199 = new TGNumberEntry(fHorizontalFrame197, (Double_t) 300,4,-1,(TGNumberFormat::EStyle) 5);
   fHorizontalFrame197->AddFrame(fNumberEntry199, new TGLayoutHints(kLHintsLeft | kLHintsCenterY,2,2,2,2));
   fNumberEntry199->Connect("ValueSet(long)", 0, 0, "ResizeSelected()");
   TGLabel *fLabel203 = new TGLabel(fHorizontalFrame197," Height ");
   fLabel203->SetTextJustify(36);
   fLabel203->SetMargins(0,0,0,0);
   fLabel203->SetWrapLength(-1);
   fHorizontalFrame197->AddFrame(fLabel203, new TGLayoutHints(kLHintsLeft | kLHintsCenterY,2,2,2,2));
   TGNumberEntry *fNumberEntry204 = new TGNumberEntry(fHorizontalFrame197, (Double_t) 300,4,-1,(TGNumberFormat::EStyle) 5);
   fHorizontalFrame197->AddFrame(fNumberEntry204, new TGLayoutHints(kLHintsLeft | kLHintsCenterY,2,2,2,2));
   fNumberEntry204->Connect("ValueSet(long)", 0, 0, "ResizeSelected()");

   fGroupFrame196->AddFrame(fHorizontalFrame197, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY,0,0,5,0));

   fGroupFrame196->SetLayoutManager(new TGVerticalLayout(fGroupFrame196));
   fGroupFrame196->Resize(231,66);
   fuiBldGeometryFrame195->AddFrame(fGroupFrame196, new TGLayoutHints(kLHintsTop | kLHintsExpandX));

   fCompositeFrame143->AddFrame(fuiBldGeometryFrame195, new TGLayoutHints(kLHintsTop | kLHintsExpandX,2,2,2,2));

   // "Position" group frame
   TGGroupFrame *fGroupFrame208 = new TGGroupFrame(fCompositeFrame143,"Position");

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame209 = new TGHorizontalFrame(fGroupFrame208,201,66,kHorizontalFrame);

   // vertical frame
   TGVerticalFrame *fVerticalFrame210 = new TGVerticalFrame(fHorizontalFrame209,73,54,kVerticalFrame);
   fVerticalFrame210->SetLayoutManager( new TGTableLayout(fVerticalFrame210,2,2));
   TGLabel *fLabel211 = new TGLabel(fVerticalFrame210," X ");
   fLabel211->SetTextJustify(36);
   fLabel211->SetMargins(0,0,0,0);
   fLabel211->SetWrapLength(-1);
   fVerticalFrame210->AddFrame(fLabel211, new TGTableLayoutHints(0,1,0,1,kLHintsLeft | kLHintsCenterY,2,2,2,2));
   TGNumberEntry *fNumberEntry212 = new TGNumberEntry(fVerticalFrame210, (Double_t) 992,4,-1,(TGNumberFormat::EStyle) 5);
   fVerticalFrame210->AddFrame(fNumberEntry212, new TGTableLayoutHints(1,2,0,1,kLHintsLeft | kLHintsCenterY,2,2,2,2));
   fNumberEntry212->Connect("ValueSet(long)", 0, 0, "SetPosition()");
   TGLabel *fLabel216 = new TGLabel(fVerticalFrame210," Y ");
   fLabel216->SetTextJustify(36);
   fLabel216->SetMargins(0,0,0,0);
   fLabel216->SetWrapLength(-1);
   fVerticalFrame210->AddFrame(fLabel216, new TGTableLayoutHints(0,1,1,2,kLHintsLeft | kLHintsCenterY,2,2,2,2));
   TGNumberEntry *fNumberEntry217 = new TGNumberEntry(fVerticalFrame210, (Double_t) 336,4,-1,(TGNumberFormat::EStyle) 5);
   fVerticalFrame210->AddFrame(fNumberEntry217, new TGTableLayoutHints(1,2,1,2,kLHintsLeft | kLHintsCenterY,2,2,2,2));
   fNumberEntry217->Connect("ValueSet(long)", 0, 0, "SetPosition()");

   fHorizontalFrame209->AddFrame(fVerticalFrame210, new TGLayoutHints(kLHintsCenterX | kLHintsCenterY));

   // vertical frame
   TGVerticalFrame *fVerticalFrame221 = new TGVerticalFrame(fHorizontalFrame209,66,66,kVerticalFrame);
   fVerticalFrame221->SetLayoutManager( new TGTableLayout(fVerticalFrame221,3,3));
   TGTextButton *fTextButton222 = new TGTextButton(fVerticalFrame221,"^",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame | kFixedWidth | kFixedHeight);
   fTextButton222->SetTextJustify(36);
   fTextButton222->SetMargins(0,0,0,0);
   fTextButton222->SetWrapLength(-1);
   fTextButton222->Resize(20,20);
   fVerticalFrame221->AddFrame(fTextButton222, new TGTableLayoutHints(1,2,0,1,kLHintsLeft | kLHintsTop,1,1,1,1));
   fTextButton222->Connect("Clicked()", 0, 0, "SetPosition()");
   TGTextButton *fTextButton223 = new TGTextButton(fVerticalFrame221,"v",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame | kFixedWidth | kFixedHeight);
   fTextButton223->SetTextJustify(36);
   fTextButton223->SetMargins(0,0,0,0);
   fTextButton223->SetWrapLength(-1);
   fTextButton223->Resize(20,20);
   fVerticalFrame221->AddFrame(fTextButton223, new TGTableLayoutHints(1,2,2,3,kLHintsLeft | kLHintsTop,1,1,1,1));
   fTextButton223->Connect("Clicked()", 0, 0, "SetPosition()");
   TGTextButton *fTextButton224 = new TGTextButton(fVerticalFrame221,"<",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame | kFixedWidth | kFixedHeight);
   fTextButton224->SetTextJustify(36);
   fTextButton224->SetMargins(0,0,0,0);
   fTextButton224->SetWrapLength(-1);
   fTextButton224->Resize(20,20);
   fVerticalFrame221->AddFrame(fTextButton224, new TGTableLayoutHints(0,1,1,2,kLHintsLeft | kLHintsTop,1,1,1,1));
   fTextButton224->Connect("Clicked()", 0, 0, "SetPosition()");
   TGTextButton *fTextButton225 = new TGTextButton(fVerticalFrame221,">",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame | kFixedWidth | kFixedHeight);
   fTextButton225->SetTextJustify(36);
   fTextButton225->SetMargins(0,0,0,0);
   fTextButton225->SetWrapLength(-1);
   fTextButton225->Resize(20,20);
   fVerticalFrame221->AddFrame(fTextButton225, new TGTableLayoutHints(2,3,1,2,kLHintsLeft | kLHintsTop,1,1,1,1));
   fTextButton225->Connect("Clicked()", 0, 0, "SetPosition()");

   fHorizontalFrame209->AddFrame(fVerticalFrame221, new TGLayoutHints(kLHintsCenterX | kLHintsCenterY));

   fGroupFrame208->AddFrame(fHorizontalFrame209, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));

   fGroupFrame208->SetLayoutManager(new TGVerticalLayout(fGroupFrame208));
   fGroupFrame208->Resize(235,100);
   fCompositeFrame143->AddFrame(fGroupFrame208, new TGLayoutHints(kLHintsTop | kLHintsExpandX));


   // container of "Style"
   TGCompositeFrame *fCompositeFrame145;
   fCompositeFrame145 = fTab140->AddTab("Style");
   fCompositeFrame145->SetLayoutManager(new TGVerticalLayout(fCompositeFrame145));

   // vertical frame
   TGVerticalFrame *fVerticalFrame226 = new TGVerticalFrame(fCompositeFrame145,231,169,kVerticalFrame);

   // buttongroup frame
   TGButtonGroup *fButtonGroup227 = new TGButtonGroup(fVerticalFrame226,"Border Mode",kVerticalFrame);
   fButtonGroup227->SetLayoutManager(new TGVerticalLayout(fButtonGroup227));
   TGRadioButton *fRadioButton228 = new TGRadioButton(fButtonGroup227," Sunken",1);
   fRadioButton228->SetState(kButtonDown);
   fRadioButton228->SetToolTipText("Set a sunken border of the frame");
   fRadioButton228->SetTextJustify(36);
   fRadioButton228->SetMargins(0,0,0,0);
   fRadioButton228->SetWrapLength(-1);
   TGRadioButton *fRadioButton231 = new TGRadioButton(fButtonGroup227," None",2);
   fRadioButton231->SetToolTipText("Set no border of the frame");
   fRadioButton231->SetTextJustify(36);
   fRadioButton231->SetMargins(0,0,0,0);
   fRadioButton231->SetWrapLength(-1);
   TGRadioButton *fRadioButton234 = new TGRadioButton(fButtonGroup227," Raised",3);
   fRadioButton234->SetToolTipText("Set a raised border of the frame");
   fRadioButton234->SetTextJustify(36);
   fRadioButton234->SetMargins(0,0,0,0);
   fRadioButton234->SetWrapLength(-1);
   TGCheckButton *fCheckButton237 = new TGCheckButton(fButtonGroup227," Double",4);
   fCheckButton237->SetToolTipText("Set double border of the frame");
   fCheckButton237->SetTextJustify(36);
   fCheckButton237->SetMargins(0,0,0,0);
   fCheckButton237->SetWrapLength(-1);
   fButtonGroup227->SetRadioButtonExclusive(kTRUE);
   fButtonGroup227->Resize(102,106);
   fButtonGroup227->Show();
   fVerticalFrame226->AddFrame(fButtonGroup227, new TGLayoutHints(kLHintsCenterX | kLHintsTop));
   fButtonGroup227->Connect("Pressed(int)", 0, 0, "UpdateBorder(int)");

   // "Palette" group frame
   TGGroupFrame *fGroupFrame240 = new TGGroupFrame(fVerticalFrame226,"Palette");

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame241 = new TGHorizontalFrame(fGroupFrame240,103,25,kHorizontalFrame);

   // color select widget
   ULong_t ColPar1;
   gClient->GetColorByName("#e8e8e8", ColPar1);
   TGColorSelect *fColorSelect242 = new TGColorSelect(fHorizontalFrame241, ColPar1, 1);

   fHorizontalFrame241->AddFrame(fColorSelect242, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fColorSelect242->Connect("ColorSelected(unsigned long)", 0, 0, "UpdateBackground(unsigned long)");
   TGLabel *fLabel243 = new TGLabel(fHorizontalFrame241,"Backgrnd");
   fLabel243->SetTextJustify(36);
   fLabel243->SetMargins(0,0,0,0);
   fLabel243->SetWrapLength(-1);
   fHorizontalFrame241->AddFrame(fLabel243, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   fGroupFrame240->AddFrame(fHorizontalFrame241, new TGLayoutHints(kLHintsCenterX | kLHintsTop,2,2,2,2));

   fGroupFrame240->SetLayoutManager(new TGVerticalLayout(fGroupFrame240));
   fGroupFrame240->Resize(141,63);
   fVerticalFrame226->AddFrame(fGroupFrame240, new TGLayoutHints(kLHintsCenterX | kLHintsTop));

   fCompositeFrame145->AddFrame(fVerticalFrame226, new TGLayoutHints(kLHintsExpandX,2,2,2,2));


   fTab140->SetTab(0);

   fTab140->Resize(fTab140->GetDefaultSize());
   fuiBldEditor104->AddFrame(fTab140, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY,2,2,2,2));
   fTab140->Connect("Selected(int)", 0, 0, "TabSelected(int)");

   fHorizontalFrame89->AddFrame(fuiBldEditor104, new TGLayoutHints(kLHintsLeft | kLHintsTop | kLHintsExpandY));
   fuiBldEditor104->Connect("UpdateSelected(TGFrame*)", 0, 0, "HandleUpdateSelected(TGFrame*)");

   fRootGuiBuilder2->AddFrame(fHorizontalFrame89, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));

   // status bar
   TGStatusBar *fStatusBar521 = new TGStatusBar(fRootGuiBuilder2,1920,18);
   fStatusBar521->SetName("fStatusBar521");
   fStatusBar521->SetText("",0);
   fRootGuiBuilder2->AddFrame(fStatusBar521, new TGLayoutHints(kLHintsBottom | kLHintsExpandX,0,0,3,0));

   fRootGuiBuilder2->SetWindowName("GIU_Builder.C");
   fRootGuiBuilder2->SetIconName("GIU_Builder.C");
   fRootGuiBuilder2->SetIconPixmap("bld_rgb.xpm");
   fRootGuiBuilder2->SetClassHints("GIU_Builder.C","GIU_Builder.C");
   fRootGuiBuilder2->SetMWMHints(kMWMDecorAll,
                        kMWMFuncAll,
                        kMWMInputFullApplicationModal);
   fRootGuiBuilder2->SetWMSize(1920,979);
   fRootGuiBuilder2->SetWMSizeHints(1920,979,10000,10000,0,0);
   fRootGuiBuilder2->MapSubwindows();
   fVerticalFrame181->UnmapWindow();
   fuiBldHintsEditor146->UnmapWindow();

   fRootGuiBuilder2->Resize(fRootGuiBuilder2->GetDefaultSize());
   fRootGuiBuilder2->MapWindow();
   fRootGuiBuilder2->Move(100,100);
   fRootGuiBuilder2->Resize(1920,979);
}  

void HandleButtons()
{
   cout << "Slot HandleButtons()" << endl; 
}

void HandleWindowClosed(int par1)
{
   cout << "Slot HandleWindowClosed(int " << par1 << ")" << endl; 
}

void UpdateName()
{
   cout << "Slot UpdateName()" << endl; 
}

void SwitchLayout()
{
   cout << "Slot SwitchLayout()" << endl; 
}

void LayoutSubframes(bool par2)
{
   cout << "Slot LayoutSubframes(bool " << par2 << ")" << endl; 
}

void UpdateState()
{
   cout << "Slot UpdateState()" << endl; 
}

void MatrixLayout()
{
   cout << "Slot MatrixLayout()" << endl; 
}

void ResizeSelected()
{
   cout << "Slot ResizeSelected()" << endl; 
}

void SetPosition()
{
   cout << "Slot SetPosition()" << endl; 
}

void UpdateBorder(int par3)
{
   cout << "Slot UpdateBorder(int " << par3 << ")" << endl; 
}

void UpdateBackground(unsigned long par4)
{
   cout << "Slot UpdateBackground(unsigned long " << par4 << ")" << endl; 
}

void TabSelected(int par5)
{
   cout << "Slot TabSelected(int " << par5 << ")" << endl; 
}

void HandleUpdateSelected(TGFrame* par6)
{
   cout << "Slot HandleUpdateSelected(TGFrame* " << par6 << ")" << endl; 
}
