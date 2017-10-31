 #include <vector>
 #include <string>

 #include <TTimer.h>
 #include <TGFrame.h>
 #include <TGButton.h>

 namespace TestEnv {

   const unsigned short InitialMainWidth = 700;
   const unsigned short InitialMainHeight = 500;

   class TestGraphics {
   private:
     TGMainFrame * fMain;
     TGHorizontalFrame * ContainerFrame;
     TGGroupFrame * ControlButtonsGroup;
     TGCheckButton * CheckedButton;
     TGCheckButton * EnabledButton;
     TGCheckButton * DemoButton;

     string PrevLabel;
   public:
     TestGraphics ()
       : fMain (NULL),
    ControlButtonsGroup (NULL),
    CheckedButton (NULL), EnabledButton (NULL),
    DemoButton (NULL) {


       fMain = new TGMainFrame(gClient->GetRoot (),
                  InitialMainWidth, InitialMainHeight);
       ContainerFrame = new TGHorizontalFrame (fMain);
       fMain->AddFrame (ContainerFrame,
               new TGLayoutHints (kLHintsExpandX, kLHintsExpandY));

       ControlButtonsGroup =
    new TGGroupFrame (ContainerFrame, "Control", kVerticalFrame);
       CheckedButton = new TGCheckButton (ControlButtonsGroup, "Checked");
       ControlButtonsGroup->AddFrame (CheckedButton);
       CheckedButton->Connect ("Clicked()", "TestEnv::TestGraphics",
                  this, "ProcessClick()");
       EnabledButton = new TGCheckButton (ControlButtonsGroup, "Enabled");
       ControlButtonsGroup->AddFrame (EnabledButton);
       EnabledButton->Connect ("Clicked()", "TestEnv::TestGraphics",
                  this, "ProcessClick()");
       ContainerFrame->AddFrame (ControlButtonsGroup);

       DemoButton = new TGCheckButton (ContainerFrame, "???");
       ContainerFrame->AddFrame (DemoButton);

       ShowResult ();

       fMain->Layout ();
       fMain->MapSubwindows ();
       fMain->MapWindow ();
     }

     void ProcessClick () {

 // Process the result when the button has come to rest.

       TTimer::SingleShot (500, "TestEnv::TestGraphics", this, "ShowResult()");
     }

     void ShowResult () {

       string ResultString;

       if (EnabledButton->IsDown ()) {
    DemoButton->SetEnabled (true);
    ResultString += " Enabled";
       } else {
    DemoButton->SetEnabled (false);
    ResultString += " Disabled";
       }

       if (CheckedButton->IsDown ()) {
    ResultString += " Checked";
    DemoButton->SetState (kButtonDown);
       } else {
    ResultString += " UnChecked";
    DemoButton->SetState (kButtonUp);
       }

       DemoButton->SetText (ResultString.c_str ());
       if (DemoButton->IsDown () != CheckedButton->IsDown ()
      || DemoButton->IsEnabled () != EnabledButton->IsDown ()) {
    DemoButton->SetBackgroundColor (0xFF0000);
       } else {
    DemoButton->SetBackgroundColor (0x808080);
       }
       (void) printf ("Checked %i, Enabled %i, Demo %i, %i\n",
             CheckedButton->IsDown (), EnabledButton->IsDown (),
             DemoButton->IsDown (), DemoButton->IsEnabled ());
     }

     virtual ~TestGraphics () {
       fMain->Cleanup ();
       fMain->DeleteWindow ();
     }

     ClassDef(TestGraphics, 1);
   };

 }	// End of namespace

 ClassImp (TestEnv::TestGraphics);
