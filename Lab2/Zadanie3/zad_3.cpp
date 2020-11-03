#include <iostream>
using namespace std;

void zamien(int &a,int *b)
{
    int temp;
    
    
        temp=*b;
        *b=a;
        a=temp;
        
    
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
    zamien(liczba1,&liczba2);
    cout<<"Twoja pierwsza liczba po zamianie: "<<liczba1;
    cout<<"\nTwoja druga liczba po zamianie: "<<liczba2;
    
    
    
}