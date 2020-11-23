#include "Macierz.h"
#include <iostream>
#include <time.h>
#include <fstream>
using  namespace std;
Macierz::Macierz(int wiersze, int kolumny )
{
    wiersze_=wiersze;
    kolumny_=kolumny;
    macierz_= new double *[wiersze];
    for (int j=0;j<wiersze;j++)
        {
            macierz_[j] = new double[kolumny];
            for (int i=0;i<kolumny;i++)  macierz_[j][i] = 0;  
        }
}
Macierz::Macierz(int wiersze)
{
    wiersze_=wiersze;
    kolumny_=wiersze;
     macierz_ = new double *[wiersze];
        for (int j = 0; j < wiersze; j++)
        {
            macierz_[j] = new double[wiersze];

            for (int i = 0; i < wiersze; i++)
            {
                macierz_[j][i] = 0;
            }
        }
}
Macierz::Macierz()
{

}

void Macierz::set(int wie,int kol,double wart)
{
    macierz_[wie][kol]=wart;
}
int Macierz::get(int wie,int kol)
{
    return macierz_[wie][kol];
}

Macierz Macierz::add(Macierz& macierz_test)
{
    if(kolumny_==macierz_test.cols() && wiersze_==macierz_test.rows())
    {
    Macierz nowa_macierz(wiersze_,kolumny_);
    for(int i=0;i<wiersze_;i++)
    for(int j=0;j<kolumny_;j++)
    nowa_macierz.macierz_[i][j]=macierz_[i][j]+macierz_test.macierz_[i][j];
    return nowa_macierz;
    }
    else
    {
        cout<<"\nMacierze maja zle wymiary\n";
    }
   
    
}
void Macierz::los()
{
    srand(time(NULL));
    for(int i=0;i<wiersze_;i++)
    for(int j=0;j<kolumny_;j++)
    macierz_[i][j]+=rand()%100;
}
Macierz Macierz::substract(Macierz& macierz_test2)
{
    if(kolumny_==macierz_test2.cols() && wiersze_==macierz_test2.rows())
    {
    Macierz nowa_macierz(wiersze_,kolumny_);
    for(int i=0;i<wiersze_;i++)
    for(int j=0;j<kolumny_;j++)
    nowa_macierz.macierz_[i][j]=macierz_[i][j]-macierz_test2.macierz_[i][j];
    return nowa_macierz;
    }
    else
    {
        cout<<"\nMacierze maja zle wymiary\n";
    }
    
}
Macierz Macierz::multiply(Macierz& macierz_test3)
{
   if(kolumny_=macierz_test3.rows())
   {
       int nowe_wiersze=wiersze_;
       int nowe_kolumny=macierz_test3.cols();
       Macierz nowa_macierz(nowe_wiersze,nowe_kolumny);
       for(int i=0;i<nowe_wiersze;i++)
        for(int j=0;j<nowe_kolumny;j++)
            {
                double suma=0;
                for(int k=0;k<kolumny_;k++)
                suma+=macierz_[i][k]*macierz_test3.macierz_[k][j];
                nowa_macierz.macierz_[i][j]=suma;
            }
        return nowa_macierz;
   }
   else
   {
       cout<< "Zle wymiary macierzy";
   }
   
    
}
int Macierz::cols()
{
    return kolumny_;
}
int Macierz::rows()
{
    return wiersze_;
}
void Macierz::print()
{
    for(int i=0;i<wiersze_;i++)
        {
            for(int j=0;j<kolumny_;j++)
            cout<< macierz_[i][j]<<", ";
            cout <<std::endl;
        }
}
void Macierz::store(string filename, string path)
{
    fstream plik;
        plik.open(path + filename, ios::out);
        if (plik.good() == false)
        {
            cout << "\n Plik ERROR \n";
            exit(0);
        }
        else
        {
            plik << kolumny_ << " " << wiersze_ << "\n";
            for (int j = 0; j < wiersze_; j++)
            {
                for (int i = 0; i < kolumny_; i++)
                {
                    plik << macierz_[j][i] << " ";
                }
                plik << "\n";
            }
        }
        plik.close();
}