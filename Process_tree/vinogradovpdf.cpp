#include "vinogradovpdf.h"

VinogradovPDF::VinogradovPDF()
{

}

Double_t VinogradovPDF::GetVinogradovPDFValue(UInt_t k, Double_t p, Double_t L)
{
    Double_t f = 0;

    for (UInt_t i = 0; i <= k; ++i)
    {
        f += GetBik(i, k) * pow(L * (1-p), i) * pow(p, k-i);
    }

     return (f * TMath::Exp(-L) / TMath::Factorial(k) );
}

Double_t  VinogradovPDF::GetBik(UInt_t i, UInt_t k)
{
    Double_t Bik;

    if(i == 0 && k == 0)
    {
        Bik = 1;
    }
    else if (i == 0 && k > 0)
    {
        Bik = 0;
    }
    else
    {
       Bik = ( TMath::Factorial(k) * TMath::Factorial(k-1) ) /
               (TMath::Factorial(i) * TMath::Factorial(i-1) * TMath::Factorial(k-i) );
    }

    return Bik;
}
