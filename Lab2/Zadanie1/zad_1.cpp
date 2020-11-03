#include <iostream>
using namespace std;

int zamien(int *licz_1,int *licz_2)
{
    int temp,czy;
    if (*licz_1>*licz_2)
    {
        temp=*licz_2;
        *licz_2=*licz_1;
        *licz_1=temp;
        czy=1;
    }
    else
        czy=0;
    return czy;
}
int main()
{
  int liczba1, liczba2;
  cout <<"Podaj swoja pierwsza liczbe: ";
  cin>>liczba1;
  cout<<"Podaj swoja druga liczbe: ";
  cin>>liczba2;
    cout<<"\nTwoja pierwsza liczba przed zamiana: "<<liczba1;
    cout<<"\nTwoja druga liczba przed zamiana: "<<liczba2;
    cout<<"\n\nZamiana\n\n";
    if(zamien(&liczba1,&liczba2)==1)
    {
    cout<<"Twoja pierwsza liczba po zamianie: "<<liczba1;
    cout<<"\nTwoja druga liczba po zamianie: "<<liczba2;
    }
    else
    cout<<"Wartosci nie zostaly zamienione miejscami";
    
    
}