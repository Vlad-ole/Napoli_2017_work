#include <iostream>
#include <TApplication.h>
#include <TRint.h>
#include <TROOT.h>
#include <TSystem.h>
#include <TGTextEntry.h>
#include <TGTextView.h>
#include <TGClient.h>
#include <TGButton.h>
#include <TGFrame.h>
#include <TGLayout.h>
#include <TGWindow.h>
#include <TGLabel.h>
#include <TString.h>
#include <TGComboBox.h>
#include <Getline.h>

class MyApplication : public TGMainFrame
{
private:
   TGTextButton        *fExit;
   TGTextView          *fTextView;
public:
   MyApplication(const TGWindow *p, UInt_t w, UInt_t h);
   virtual ~MyApplication();

   void DoExit();

   ClassDef(MyApplication, 0)
};

MyApplication::MyApplication(const TGWindow *p, UInt_t w, UInt_t h)
   : TGMainFrame(p, w, h)
{
   SetCleanup(kDeepCleanup);

   Connect("CloseWindow()", "MyApplication", this, "DoExit()");
   DontCallClose();

   TGHorizontalFrame *fHL2 = new TGHorizontalFrame(this, 70, 100);
   AddFrame(fHL2, new TGLayoutHints(kLHintsNormal, 5, 5, 5, 5));
   TGLabel *fInlabel = new TGLabel(fHL2, "CINT Prompt:");
   fHL2->AddFrame(fInlabel, new TGLayoutHints(kLHintsCenterY));

   TGLabel *fOutlabel = new TGLabel(this, "Output Window:");
   AddFrame(fOutlabel);

   fCommandBuf = new TGTextBuffer(256);
   fComboCmd = new TGComboBox(fHL2, "", fIDs.GetUnID());
   fCommand = fComboCmd->GetTextEntry();
   fComboCmd->Resize(450, fCommand->GetDefaultHeight());
   fHL2->AddFrame(fComboCmd, new TGLayoutHints(kLHintsCenterY | kLHintsExpandX, 20,0,0,0));

   TString hist(Form("%s/.root_hist", gSystem->UnixPathName(gSystem->HomeDirectory())));
   FILE *fhist = fopen(hist.Data(), "rt");
   if (fhist) {
      char histline[256];
      while (fgets(histline, 256, fhist)) {
         histline[strlen(histline)-1] = 0; // remove trailing "\n"
         fComboCmd->InsertEntry(histline, 0, -1);
      }
      fclose(fhist);
   }

   Pixel_t backpxl;
   gClient->GetColorByName("#c0c0c0", backpxl);
   fTextView = new TGTextView(this, 500, 94, fIDs.GetUnID(), kFixedWidth | kFixedHeight);
   fTextView->SetBackground(backpxl);
   AddFrame(fTextView, new TGLayoutHints(kLHintsExpandX));
   TGHorizontalFrame *fHL3 = new TGHorizontalFrame(this, 70, 150, kFixedWidth);
   fExit = new TGTextButton(fHL3, "&Exit", fIDs.GetUnID());
   fExit->Connect("Clicked()", "MyApplication", this, "DoExit()");
   fHL3->AddFrame(fExit, new TGLayoutHints(kLHintsExpandX));
   AddFrame(fHL3, new TGLayoutHints(kLHintsCenterX | kLHintsCenterY, 1, 1, 1, 1));

   SetWindowName("GUI with CINT Input/Output");
   MapSubwindows();
   Resize(GetDefaultSize());
   MapWindow();
   fCommand->Connect("ReturnPressed()", "MyApplication", this, "DoEnteredCommand()");
   fName = Form("%soutput.log", gSystem->WorkingDirectory());
}

MyApplication::~MyApplication()
{
   // Destructor.

   Cleanup();
}

void MyApplication::DoExit()
{
   // Close application window.
   gApplication->Terminate();
}

void tgtextview_test()
{
    new MyApplication(gClient->GetRoot(),600,300);
}
