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
   void FindState(TGCheckButton *ch_button);
   void ChangeEnableState(TGCheckButton *ch_button);
   void ChangeEnableState(TGCheckButton *ch_button, bool is_enable);

   ClassDef(MyMainFrame, 0)
};

MyMainFrame::MyMainFrame(const TGWindow *p, UInt_t w, UInt_t h)
   : TGMainFrame(p, w, h)
{
   check_button = new TGCheckButton(this, "check_button");

   AddFrame(check_button, new TGLayoutHints(kLHintsCenterX | kLHintsCenterY) );

   //var1
   //down, disabled
   //check_button->SetDisabledAndSelected(kTRUE);

   //up, enabled
   check_button->SetDisabledAndSelected(kFALSE);
   check_button->SetState(kButtonUp);

   //down, enabled
   //check_button->SetState(kButtonDown);

   //up, disabled
   //check_button->SetDisabledAndSelected(kFALSE);
   //check_button->SetState(kButtonDisabled);

   //ShowStates(check_button);
   FindState(check_button);
   ChangeEnableState(check_button, false);
   FindState(check_button);

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

void MyMainFrame::ChangeEnableState(TGCheckButton *ch_button)
{
    bool is_d = ch_button->IsDown();
    bool is_e = ch_button->IsEnabled();
    bool is_das = ch_button->IsDisabledAndSelected();

    if(is_das)
    {
        //cout << "down, disabled" << endl;
        ch_button->SetState(kButtonDown);
    }
    else
    {
        if( is_d && is_e)
        {
            //cout << "down, enabled" << endl;
            ch_button->SetDisabledAndSelected(kTRUE);
        }
        else if( !is_d && is_e )
        {
            //cout << "up, enabled" << endl;
            ch_button->SetDisabledAndSelected(kFALSE);
            ch_button->SetState(kButtonDisabled);
        }
        else if( !is_d && !is_e )
        {
            //cout << "up, disabled" << endl;
            ch_button->SetDisabledAndSelected(kFALSE);
            ch_button->SetState(kButtonUp);
        }

    }
}

void MyMainFrame::ChangeEnableState(TGCheckButton *ch_button, bool is_enable)
{
    bool is_d = ch_button->IsDown();
    bool is_e = ch_button->IsEnabled();
    bool is_das = ch_button->IsDisabledAndSelected();

    if(is_das)
    {
        //cout << "down, disabled" << endl;
        if(is_enable) ch_button->SetState(kButtonDown);
    }
    else
    {
        if( is_d && is_e)
        {
            //cout << "down, enabled" << endl;
            if(!is_enable) ch_button->SetDisabledAndSelected(kTRUE);
        }
        else if( !is_d && is_e )
        {
            //cout << "up, enabled" << endl;
            if(!is_enable)
            {
                ch_button->SetDisabledAndSelected(kFALSE);
                ch_button->SetState(kButtonDisabled);
            }
        }
        else if( !is_d && !is_e )
        {
            //cout << "up, disabled" << endl;
            if(is_enable)
            {
                ch_button->SetDisabledAndSelected(kFALSE);
                ch_button->SetState(kButtonUp);
            }
        }
    }
}

void FindState(TGCheckButton *ch_button)
{
    bool is_d = ch_button->IsDown();
    bool is_e = ch_button->IsEnabled();
    bool is_das = ch_button->IsDisabledAndSelected();

    if(is_das)
    {
        cout << "down, disabled" << endl;
    }
    else
    {
        if( is_d && is_e)
        {
            cout << "down, enabled" << endl;
        }
        else if( !is_d && is_e )
        {
            cout << "up, enabled" << endl;
        }
        else if( !is_d && !is_e )
        {
            cout << "up, disabled" << endl;
        }

    }
}

void check_button()
{
   new MyMainFrame(gClient->GetRoot(), 500, 500);
}
