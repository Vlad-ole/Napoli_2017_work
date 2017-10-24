
//#include "TTreeReader.h"
//#include "TTreeReaderValue.h"

#include "vinogradovpdf.h"

#include <sstream>

class ReadTree
{
public:
    ReadTree() {}
};

using namespace std;


Double_t GetBaseline(Int_t *yarray, Int_t point_from, Int_t point_to)
{
    Double_t baseline = 0;

    for (int i = point_from; i < point_to; ++i)
    {
        baseline += yarray[i];
    }

    return ( baseline / (point_to - point_from) );
}

Double_t GetIntegral(Int_t *yarray, Double_t baseline, Int_t point_from, Int_t point_to)
{
    Double_t integral = 0;

    for (int i = point_from; i < point_to; ++i)
    {
        integral += (yarray[i] - baseline);
    }

    return ( integral );
}

int main(int argc, char *argv[])
{
    TApplication theApp("App",&argc,argv);

    //======================== Test Fit
//    VinogradovPDF fnc;

//    const int n_peaks = 10;
//    const Double_t p = 0.2;
//    const Double_t L = 1;

//    std::vector<Double_t> xv(n_peaks);
//    std::vector<Double_t> yv(n_peaks);

//    Double_t integral = 0;
//    for (int i = 0; i < n_peaks; ++i)
//    {
//        xv[i] = i;
//        yv[i] = fnc.GetVinogradovPDFValue(i, p, L);
//        integral += yv[i];
//    }

//    TGraph *gr = new TGraph(n_peaks, &xv[0], &yv[0]);
//    gr->Draw("AB");
//    gr->SetFillColor(kBlue);
//    gr->SetFillStyle(3001);

//    cout << "integral = " << integral << endl;
//    //======================== end Test Fit


    //Am
//    string str_run = "/home/darkside/Vlad_Programs/vlad_rawdata_2017/data/Run006296.root";
//    const int n_points = 2748;

    //Laser
    string str_run = "/home/darkside/Vlad_Programs/vlad_rawdata_2017/data/Run006509.root";
    const int n_points = 1748;

    TFile *fileIn = new TFile(str_run.c_str());
    TTree *t1 = (TTree*)fileIn->Get("data");
    t1->Print();

    //t1->Show(1);

    //exapmle
    //double Etgenjet5[nmax];
    //T->SetBranchAddress("Etgenjet5",Etgenjet5);

    //set branches
    Int_t wf[n_points];
    ostringstream osstr;
    osstr << "wf[" << n_points << "]";
    t1->SetBranchAddress(osstr.str().c_str(), wf);


    Int_t xarray[n_points];
    for (int i = 0; i < n_points; ++i)
    {
        xarray[i] = i/* * 4*/;
    }

    const int number_of_ch = 1;

    Double_t l_limits[6];
    Double_t r_limits[6];

    l_limits[0] = -10000;
    r_limits[0] =  250E3;

    l_limits[1] = -10000;
    r_limits[1] = 80E3;

    l_limits[2] = -10000;
    r_limits[2] = 80E3;

    l_limits[3] = -10000;
    r_limits[3] = 80E3;

    l_limits[4] = -1000;
    r_limits[4] = 1000;

    l_limits[5] = -1000;
    r_limits[5] = 1000;

    TH1F *h1 = new TH1F("h1", "Spectrum", 500, l_limits[number_of_ch], r_limits[number_of_ch]);
    TH1F *h_baseline = new TH1F("h_baseline", "Spectrum beseline", 500, 4005, 4020);
    //h1->SetBit(TH1::kCanRebin);

    const int n_events =  /*t1->GetEntries()*/ 50000;
    for (int i = 0; i < n_events; i++)
    {
        //t1->GetEntry(i);
        if (i % 5000 == 0)
        {
            cout << "i = " << i << endl;
        }

        if (i % 6 == number_of_ch)
        {
            t1->GetEntry(i);
            const double baseline = GetBaseline(wf, 0, 300);
            const double integral = GetIntegral(wf, baseline, 500, 1250 );
            //cout << "integral = " << integral << endl;
            h1->Fill( -integral );
            h_baseline->Fill(baseline);
        }
    }
    h1->Draw();
    //h_baseline->Draw();




//    t1->GetEntry(0);
//    TGraph *gr = new TGraph(n_points, xarray, wf);
//    gr->Draw();


    cout << "all is ok" << endl;
    theApp.Run();
    return 0;

}
