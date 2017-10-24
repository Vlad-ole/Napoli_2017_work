#include "TGraph.h"
#include "TLine.h"
#include "TMath.h"

void line_2()
{
    TCanvas *c1 = new TCanvas("c1");

    const int n_points = 100;
    TGraph *graph = new TGraph( n_points );
    for(Int_t j = 0; j < n_points; j++)
    {
       graph->SetPoint(j, j, sqrt(j) );
    }
    graph->Draw();

    double x_pos = 20;

    //incorrect. See https://root-forum.cern.ch/t/tgraph-getmaximum-getminimum/8867/2
    //cout << graph->GetMinimum() << endl;
    //cout << graph->GetMaximum() << endl;

    //correct
    Double_t y_min = TMath::MinElement(graph->GetN(), graph->GetY());
    Double_t y_max = TMath::MaxElement(graph->GetN(), graph->GetY());
    cout << y_min << endl;
    cout << y_max << endl;

    TLine *line = new TLine(x_pos, y_min, x_pos, y_max);
    line->SetLineColor(kRed);
    line->Draw();

}
