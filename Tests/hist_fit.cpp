#include "TRandom3.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TH1.h"
#include "TF1.h"
#include "TRandom.h"
#include "TSpectrum.h"
#include "TVirtualFitter.h"

#include "Rtypes.h"
#include <vector>

void hist_fit()
{
    Int_t nbins = 110;
    Double_t xmin     = -1;
    Double_t xmax     = 10;

    TRandom3 rnd;
    TH1F *h = new TH1F("h", "hist",nbins, xmin, xmax);

    Double_t val = 0;
    const double sigma = 0.6;
    for (int i = 0; i < 100000; ++i)
    {
        val = rnd.PoissonD(3) + rnd.Gaus(0, sigma);
        h->Fill(val);
    }
    h->Draw();

//    for (int i = 0; i < nbins; ++i)
//    {
//        cout << i + 1 << " " << h->GetBinContent(i + 1) << endl;
//    }

    //change if you need
    Double_t llimit = xmin;
    Double_t rlimit = xmax;

    cout << "llimit = " << llimit << endl;
    cout << "rlimit = " << rlimit << endl;
    cout << "real llimit = " << h->GetBinLowEdge(1) << endl;
    cout << "real rlimit = " << h->GetBinLowEdge(h->GetNbinsX() + 1) << endl;

    Int_t lbin = ((llimit - h->GetBinLowEdge(1)) / h->GetBinWidth(1));
    if( lbin >= 0 ) lbin++;
    else lbin = 1;
    Int_t rbin = ((rlimit - h->GetBinLowEdge(1)) / h->GetBinWidth(1));
    if( !(rbin >= h->GetNbinsX()) ) rbin++;
    else rbin = h->GetNbinsX();

    cout << "lbin =" << lbin << "; rbin = " << rbin << endl;

    nbins = (rbin - lbin + 1);
    vector<Float_t> source(nbins);
    vector<Float_t> dest(nbins);

    cout << "nbins = " << nbins << endl;

    for (int i = 0; i < nbins; i++)
    {
        source[i]=h->GetBinContent(i + lbin);
        //cout << "source[" << i << "] = " << source[i] << endl;
    }

    TSpectrum *s = new TSpectrum(20);

    Int_t nfound = s->SearchHighRes(&source[0], &dest[0], nbins, 2, 2, kFALSE, 3, kTRUE, 3);
    cout << "nfound = " << nfound << endl;
    vector<Double_t> fPositionX;
    vector<Double_t> fPositionY;
    fPositionX.resize(nfound);
    fPositionY.resize(nfound);


//    //Get peaks positions (for the whole spectrum)
//    Float_t *xpeaks = s->GetPositionX();
//    for (int i = 0; i < nfound; i++)
//    {
//       Double_t a = xpeaks[i];
//       Int_t bin = 1 + Int_t(a + 0.5);
//       fPositionX[i] = h->GetBinCenter(bin);
//       fPositionY[i] = h->GetBinContent(bin);
//       cout << i << " " << fPositionX[i] << " " << fPositionY[i] << endl;
//    }

    //Get peaks positions (for the reduced spectrum)
    Float_t *xpeaks = s->GetPositionX();
    for (int i = 0; i < nfound; i++)
    {
       Double_t a = xpeaks[i];
       Int_t bin = lbin + Int_t(a + 0.5);
       fPositionX[i] = h->GetBinCenter(bin);
       fPositionY[i] = h->GetBinContent(bin);
       cout << i << " " << fPositionX[i] << " " << fPositionY[i] << endl;
    }



    //Show peaks on the hist
    TPolyMarker * pm = (TPolyMarker*)h->GetListOfFunctions()->FindObject("TPolyMarker");
    cout << "pm = " << pm << endl;
    if (pm)
    {
       h->GetListOfFunctions()->Remove(pm);
       delete pm;
    }
    pm = new TPolyMarker(nfound, &fPositionX[0], &fPositionY[0]);
    pm->SetMarkerStyle(23);
    pm->SetMarkerColor(kRed);
    pm->SetMarkerSize(1.3);
    h->GetListOfFunctions()->Add(pm);

    TH1F *d = new TH1F("d","",nbins,llimit,rlimit);
    for (i = 0; i < nbins; i++) d->SetBinContent(i + 1,dest[i]);
    d->SetLineColor(kGreen);
    d->Draw("same");












  //  cout << h->GetBinLowEdge(1) << " " << h->GetBinLowEdge(nbins+1) << endl;

//    Double_t llimit = -9.4;
//    Double_t rlimit = 9.4;

//    Int_t lbin = ((llimit - h->GetBinLowEdge(1)) / h->GetBinWidth(1)) + 0.5;
//    if( lbin >= 0 ) lbin++;
//    else lbin = 1;
//    Int_t rbin = ((rlimit - h->GetBinLowEdge(1)) / h->GetBinWidth(1)) + 0.5;
//    if( !(rbin >= h->GetNbinsX()) ) rbin++;
//    else rbin = h->GetNbinsX();


//    cout << llimit << " " << lbin << endl;
//    cout << rlimit << " " << rbin << endl;

//    TSpectrum *s = new TSpectrum(20);

//    Int_t nfound, bin;
//    Float_t source[nbins], dest[nbins];
//    Double_t a;
//    Double_t fPositionX[100];
//    Double_t fPositionY[100];

//    for (i = 0; i < nbins; i++) source[i]=h->GetBinContent(i + 1);

//    nfound = s->SearchHighRes(source, dest, nbins, 10, 2, kTRUE, 3, kTRUE, 3);
//    cout << "nfound = " << nfound << endl;
//    Float_t *xpeaks = s->GetPositionX();
//    for (i = 0; i < nfound; i++)
//    {
//       a = xpeaks[i];
//       bin = 1 + Int_t(a + 0.5);
//       fPositionX[i] = h->GetBinCenter(bin);
//       fPositionY[i] = h->GetBinContent(bin);

//       cout << i << " " << xpeaks[i] << endl;
//       cout << i << " " << fPositionX[i] << " " << fPositionY[i] << endl << endl;
//    }

//    TPolyMarker * pm = (TPolyMarker*)h->GetListOfFunctions()->FindObject("TPolyMarker");
//    cout << "pm = " << pm << endl;

//    if (pm) {
//       h->GetListOfFunctions()->Remove(pm);
//       delete pm;
//    }

//    pm = new TPolyMarker(nfound, fPositionX, fPositionY);
//    pm->SetMarkerStyle(23);
//    pm->SetMarkerColor(kRed);
//    pm->SetMarkerSize(1.3);
//    h->GetListOfFunctions()->Add(pm);


//    TH1F *d = new TH1F("d","",nbins,xmin,xmax);
//    for (i = 0; i < nbins; i++) d->SetBinContent(i + 1,dest[i]);
//    d->SetLineColor(kGreen);
//    d->Draw("same");


}


