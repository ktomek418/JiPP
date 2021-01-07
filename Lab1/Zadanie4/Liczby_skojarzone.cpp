#include <iostream>     

using namespace std;

int main () 
{
    int liczba1, liczba2, suma_liczba1 = 0, suma_liczba2 = 0;
    cout << "\n Podaj swoja pierwsza liczbe: ";
    cin >> liczba1;
    cout << "\n Podaj swoja druga liczbe: ";
    cin >> liczba2;
    for (int i = 1;i < liczba1/2+1; i++)
    {
        if (liczba1 % i == 0)
        suma_liczba1 += i;
    }
    for (int i = 1; i < liczba2/2+1; i++)
    {
        if (liczba2 % i == 0)
        suma_liczba2 += i;
    }
    cout << "\nSuma dzielnikow liczby1 jest rowna: " << suma_liczba1 << endl;
    cout << "Suma dzielnikow liczby2 jest rowna: " << suma_liczba2;
    if(liczba2 +1 == suma_liczba1 && liczba1+1 == suma_liczba2)
    cout << "\nPodane liczby sa ze soba skojarzone";
    else cout << "\n Podane liczby nie sa ze soba skojarzone";
    return 0;
}