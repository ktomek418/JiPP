#include <iostream>     

using namespace std;


int main (int argc,char* argv[]) 
{
    double tab[argc-1];
    int i,j;
    int temp;
    //Zamiana char* na int
    for(i=1;i<argc;i++)
    {
        string a=argv[i]; //konwersja na stringa
        tab[i-1]=atoi(a.c_str()); // konwersja ze stringa do wartosci liczbowej
    }
    //Sortowanie
    for(i=0;i<argc-1;i++)
    for(j=i+1;j<argc-1;j++)
    {
        if (tab[j]<tab[i])
        {
            temp=tab[j];
            tab[j]=tab[i];
            tab[i]=temp;
        }
    }
    cout<<"Podane elementy po posortowaniu: ";
    for(i=0;i<argc-1;i++)
    {
        cout<<tab[i]<<" ";
    }
    return 0;
}