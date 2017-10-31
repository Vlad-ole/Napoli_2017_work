#include <TApplication.h>
#include <TGClient.h>
#include <TGButton.h>
#include <TGFrame.h>
#include <TGLayout.h>
#include <TGWindow.h>
#include <TGLabel.h>
#include <TGNumberEntry.h>
#include <TString.h>

class MyMainFrame : public TGMainFrame
{
public:
   MyMainFrame(const TGWindow *p, UInt_t w, UInt_t h);
   virtual ~MyMainFrame();

   TGCheckButton *check_button;
   void ShowStates(TGCheckButton *);

   ClassDef(MyMainFrame, 0)
};

MyMainFrame::MyMainFrame(const TGWindow *p, UInt_t w, UInt_t h)
   : TGMainFrame(p, w, h)
{
   check_button = new TGCheckButton(this, "check_button");

   AddFrame(check_button, new TGLayoutHints(kLHintsCenterX | kLHintsCenterY) );


//   enum EButtonState {
//      kButtonUp,
//      kButtonDown,
//      kButtonEngaged,
//      kButtonDisabled
//   };

   //var0
   //down, disabled // does not work: IsDown() = false
   //check_button->SetState(kButtonDown);
   //check_button->SetState(kButtonDisabled);

   //up, enabled
//   check_button->SetState(kButtonUp);
//   check_button->SetState(kButtonEngaged);

   //down, enabled
   //check_button->SetState(kButtonDown);
   //check_button->SetState(kButtonEngaged);

   //up, disabled
   //check_button->SetState(kButtonUp);
   //check_button->SetState(kButtonDisabled);

   ShowStates(check_button);

   TGTextButton *fExit = new TGTextButton(this, "&Exit", "gApplication->Terminate(0)");
   AddFrame(fExit, new TGLayoutHints(kLHintsCenterX | kLHintsCenterY));

   SetCleanup(kDeepCleanup);
   SetWindowName("Test check_button");
   MapSubwindows();
   Resize(GetDefaultSize());
   MapWindow();
}

MyMainFrame::~MyMainFrame()
{
   Cleanup();
}

void MyMainFrame::ShowStates(TGCheckButton *ch_button)
{
    cout << ";IsDown() = " << ch_button->IsDown() <<
//            "; IsActive() = " << ch_button->IsActive() <<
//            "; IsOn() = " << ch_button->IsOn() <<
            "; IsEnabled() = " << ch_button->IsEnabled() <<
            "; IsDisabledAndSelected = " << ch_button->IsDisabledAndSelected() <<
            endl << endl;
}

void check_button()
{
   new MyMainFrame(gClient->GetRoot(), 500, 500);
}

