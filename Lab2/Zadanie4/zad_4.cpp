#include <iostream>
using namespace std;

int licz(int &a,int &b,int &ref_iloczyn)
{
    //Iloczyn
    ref_iloczyn=a*b;
    //Suma
    int sum;
    sum=a+b;
    return sum;
        
    
}
int main()
{
  int liczba1, liczba2,suma=0,iloczyn=0;
  cout <<"Podaj swoja pierwsza liczbe: ";
  cin>>liczba1;
  cout<<"Podaj swoja druga liczbe: ";
  cin>>liczba2;
  cout<<"\nTwoja pierwsza liczba: "<<liczba1;
  cout<<"\nTwoja druga liczba: "<<liczba2;
    suma=licz(liczba1,liczba2,iloczyn);
    
    cout<<"\nSuma twoich dwoch liczb jest rowna: "<<suma;
    cout<<"\nIloczyn twoich dwoch liczb jest rowny: "<<iloczyn;
}