#ifndef VINOGRADOVPDF_H
#define VINOGRADOVPDF_H

#include "TApplication.h"
#include "TRandom3.h"
#include "TCanvas.h"
#include "TGraph.h"
#include "TMath.h"
#include "TH1.h"
#include "TF1.h"
#include "TRandom.h"
#include "TSpectrum.h"
#include "TVirtualFitter.h"
#include "TTree.h"
#include "TChain.h"
#include "TList.h"
#include "TFile.h"


#include "Rtypes.h"

class VinogradovPDF
{
public:
    VinogradovPDF();
    Double_t GetVinogradovPDFValue(UInt_t k, Double_t p, Double_t L);
    Double_t GetBik(UInt_t i, UInt_t k);
};

#endif // VINOGRADOVPDF_H
