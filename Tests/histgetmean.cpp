#include "TH1.h"
#include "TCanvas.h"

void ShowContent(TH1F *h)
{
    //show content
    cout << "show content" << endl;
    for (int i = 0; i < h->GetNbinsX() + 1; ++i)
    {
        cout << i << "; " << h->GetBinContent(i) << endl;
    }
    cout << endl;
}

void histgetmean()
{
    TCanvas *c1 = new TCanvas();
    TH1F *h = new TH1F("h1", "My histogram", 2, 0, 10);
    h->Fill(1);

    h->Draw();
    gSystem->Sleep(2000);

    h->Fill(6);
    c1->Modified();
    c1->Update();
    gSystem->Sleep(2000);

//    //fill hist
//    cout << "fill hist" << endl;
//    for (int i = 1; i < 3; ++i)
//    {
//        h->Fill(i);
//        c1->Modified();
//        c1->Update();
//        cout << "mean =" << h->GetMean() << endl;
//        gSystem->Sleep(1000);
//    }
//    cout << endl;




//    ShowContent(h);

//    //reset hist
//    cout << "reset hist" << endl;
//    for (int i = 0; i < h->GetNbinsX() + 1; ++i)
//    {
//        h->SetBinContent(i, 0);
//    }

//    ShowContent(h);

//    cout << "mean =" << h->GetMean() << endl;

//    //fill again
//    cout << "fill again" << endl;
//    for (int i = 1; i < 3; ++i)
//    {
//        h->Fill(i);
//        cout << "mean =" << h->GetMean() << endl;
//        ShowContent(h);
//    }
//    cout << endl;

}
