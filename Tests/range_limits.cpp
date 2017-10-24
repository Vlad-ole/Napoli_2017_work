#include "TH1.h"
#include "TCanvas.h"
#include "TThread.h"

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
    TCanvas *c1 = new TCanvas("c1", "canvas", 500, 500);
    TH1F *h1 = new TH1F("h1", "histo from a gaussian", 100, -5, 5);
    h1->FillRandom("gaus", 10000);
    h1->Draw();
    c1->Update();
    const int n = 2;
    wait(n);

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
