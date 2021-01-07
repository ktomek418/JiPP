#include <iostream>     

using namespace std;
int BMI(double wzrost, double masa)
{
    double wskaznik;
    int przelacznik;
    wskaznik = masa/(wzrost * wzrost);
   if (wskaznik < 16)
     przelacznik = 1;
   else if (wskaznik >= 16 && wskaznik < 17)
    przelacznik = 2;
   else if (wskaznik >= 17 && wskaznik < 18.5)
    przelacznik = 3;
   else if (wskaznik >= 18.5 && wskaznik < 25)
    przelacznik = 4;
   else if (wskaznik >= 25 && wskaznik < 30)
    przelacznik = 5;
   else if (wskaznik >= 30 && wskaznik < 35)
    przelacznik = 6;
   else if (wskaznik >= 35 && wskaznik < 40)
    przelacznik = 7;
   else if (wskaznik >= 40)
    przelacznik = 8;
    cout << "Twoj wskaznik BMI jest rowny: " << wskaznik << " lezy on w granicy ";
    return przelacznik;
}
int main () 
{
    double wzrost, masa; 
    int ktory;
    cout << "\nPodaj swoj wzrostw w metrach:\n ";
    cin >> wzrost;
    cout << "Podaj swoja wage w kilogramach:\n ";
    cin >> masa;
    ktory = BMI(wzrost, masa);
    switch (ktory)
    {
        case 1:
        cout << "wyglodzenia";
        break;

        case 2:
        cout << "wychudzenia";
        break;

        case 3:
        cout << "niedowagi";
        break;

        case 4:
        cout << "wartosci prawdilowej";
        break;

        case 5:
        cout << "nadwagi";
        break;

        case 6:
        cout << "otylosci stopnia I";
        break;

        case 7:
        cout << "otylosci stopnia II";
        break;

        case 8:
        cout << "otylosci skrajnej";
        break;
    }
    return 0;
}