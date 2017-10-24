#include "TRandom3.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TH1.h"
#include "TF1.h"
#include "TRandom.h"
#include "TSpectrum.h"
#include "TVirtualFitter.h"

#include "Rtypes.h"


void hist_fit()
{
    const Int_t nbins = 1024;
    Double_t xmin     = -3;
    Double_t xmax     = 10;

    TRandom3 rnd;
    TH1F *h = new TH1F("h", "hist",nbins, xmin, xmax);

    Double_t val = 0;
    const double sigma = 0.38;
    for (int i = 0; i < 100000; ++i)
    {
        val = rnd.PoissonD(3) + rnd.Gaus(0, sigma);
        h->Fill(val);
    }

    h->Draw();



    TSpectrum *s = new TSpectrum(20);

    Int_t nfound, bin;
    Float_t source[nbins], dest[nbins];
    Double_t fPositionX[100];
    Double_t fPositionY[100];
    Double_t a;
    Double_t fPositionX[100];
    Double_t fPositionY[100];

    for (i = 0; i < nbins; i++) source[i]=h->GetBinContent(i + 1);

    nfound = s->SearchHighRes(source, dest, nbins, 10, 2, kTRUE, 3, kTRUE, 3);
    cout << "nfound = " << nfound << endl;
    Float_t *xpeaks = s->GetPositionX();
    for (i = 0; i < nfound; i++)
    {
       a = xpeaks[i];
       bin = 1 + Int_t(a + 0.5);
       fPositionX[i] = h->GetBinCenter(bin);
       fPositionY[i] = h->GetBinContent(bin);

       //cout << i << "  " << xpeaks[i] << endl;
       cout << i << "" << fPositionX[i] << " " << fPositionY[i] << endl;
    }

    TPolyMarker * pm = (TPolyMarker*)h->GetListOfFunctions()->FindObject("TPolyMarker");
    cout << "pm = " << pm << endl;

    pm = new TPolyMarker(nfound, fPositionX, fPositionY);
    pm->SetMarkerStyle(23);
    pm->SetMarkerColor(kRed);
    pm->SetMarkerSize(1.3);
    h->GetListOfFunctions()->Add(pm);


    TH1F *d = new TH1F("d","",nbins,xmin,xmax);
    for (i = 0; i < nbins; i++) d->SetBinContent(i + 1,dest[i]);
    d->SetLineColor(kGreen);
    d->Draw("same");

    //Int_t nfound = s->Search(h1, sigma, "", 0.05);
    //Int_t nfound = s->Search
}


