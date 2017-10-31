#include "TH1.h"
#include "TCanvas.h"
#include "TThread.h"
#include "TRandom3.h"

void wait(int n_sec)
{
    for (int i = 0; i < (n_sec * 10); ++i)
    {
        gSystem->ProcessEvents();
        gSystem->Sleep(100);
    }
}

void range_limits()
{
    const n_bins_start = 100;
    Double_t x_min = -2;
    Double_t y_min = 2;

    TCanvas *c1 = new TCanvas("c1", "canvas", 500, 500);
    TH1F *h1 = new TH1F("h1", "histo from a gaussian", n_bins_start, x_min, y_min);
    h1->SetBit(TH1::kCanRebin);
    TRandom3 rnd3;
    for (int i = 0; i < 10000; ++i)
    {
        h1->Fill(rnd3.Gaus());
    }
    //h1->FillRandom("gaus", 10000);
    h1->Draw();
    c1->Update();
    cout << "bin_width = " << h1->GetBinWidth(0) << endl;
    const int n = 2;
    wait(n);


    h1->SetBit(TH1::kCanRebin, kFALSE);
    for (int i = 0; i < 10000; ++i)
    {
        h1->Fill(rnd3.Gaus(0, 10));
    }
    c1->Modified();
    c1->Update();


//    const int n_bins = h1->GetNbinsX();
//    for (int i = 0; i < (n_bins + 1); ++i)
//    {
//        h1->SetBinContent(i, 0);
//    }
//    cout << "bin_width = " << h1->GetBinWidth(0) << endl;
//    c1->Modified();
//    c1->Update();
//    wait(n);



//    const int n_bins_new = 10;
//    h1->GetXaxis()->Set(n_bins_new, x_min, y_min);
//    h1->FillRandom("gaus", 10000);
//    h1->SetEntries(0);
//    c1->Modified();
//    c1->Update();
//    cout << "bin_width = " << h1->GetBinWidth(0) << endl;


//    h1->GetXaxis()->SetRangeUser(-2.5, 2.5);
//    c1->Modified();
//    c1->Update();
//    wait(n);

//    h1->GetXaxis()->SetLimits(-2.5, 2.5);
//    const int n_bins = h1->GetNbinsX();
//    for (int j = 0; j < n_bins + 1; ++j)
//    {
//        h1->SetBinContent(j, 0);
//    }
//    h1->SetEntries(0);
//    h1->FillRandom("gaus", 10000);
//    c1->Modified();
//    c1->Update();

    //h1->Set

}

void test()
{
    TCanvas *c1 = new TCanvas("c1", "canvas", 500, 500);
    TH1F *h1 = new TH1F("h1", "histo from a gaussian", 100, -5, 5);
    h1->FillRandom("gaus", 10000);
    h1->Draw();

    c1->Update();

    for (int i = 0; i < 20; ++i)
    {
        gSystem->ProcessEvents();
        gSystem->Sleep(100);
    }

    h1->GetXaxis()->SetLimits(-2.5, 2.5);
    c1->Modified();
    c1->Update();



}
