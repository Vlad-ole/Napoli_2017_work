#include "TGraph.h"
#include "TLine.h"
#include "TMath.h"

void generate_signal()
{
    TCanvas *c1 = new TCanvas("c1");

    const int n_points = 1000;
    TGraph *graph = new TGraph( n_points );

    const double tau_slow = 1700;
    const double t0 = 1500;
    const double time_step = 10;

    for(Int_t j = 0; j < n_points; j++)
    {
       Double_t val = 0;
       Double_t tmp_time = j * time_step;
       if(tmp_time > 1500 && tmp_time < 10000)
       {
           //cout << "tmp_time = " << tmp_time << endl;
           //val -= 1000 * ( TMath::Gaus(tmp_time, 2000, 100, kTRUE) ) ;
           val -= TMath::Exp( - (tmp_time - t0) / tau_slow) /  tau_slow;
       }

//       if(j > 15 && j < 25)
//       {
//            //val -= ( TMath::Gaus(j, 20, 1, kTRUE) ) ;
//           //
//       }

       graph->SetPoint(j, tmp_time, val );
    }


    graph->Draw();
}
