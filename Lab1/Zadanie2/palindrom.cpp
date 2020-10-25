#include <iostream>     
#include<cstring>
#include<algorithm>
using namespace std;


int main (int argc,char* argv[]) 
{
    string wyraz,palindrom;

     if(argc>=2) // Pobranie podanego ciagu
    {  
        palindrom=argv[1];
        wyraz=argv[1];
     }
    for(int i=2;i<argc;i++)
    {   
        palindrom.append(argv[i]);
        wyraz.append(argv[i]);
     }
     reverse(palindrom.begin(),palindrom.end()); //Odwrocenie wyrazu
    int dlugosc=palindrom.length(),czy=0;
    cout<<"\nPodany wyraz: "<<wyraz<<endl;
    cout<<"Ten sam wyraz od tylu: "<< palindrom<<endl;
    
    for(int j=0;j<dlugosc;j++) // Porównanie wyrazów 
    {
        if(wyraz[j]==palindrom[j])
        continue;
        czy=1;
    }
    if(czy==0)
    cout<<"\nPodany wyraz jest palindromem";
    else
    cout<<"\nPodany wyraz nie jest palindromem";
    
    return 0;
}