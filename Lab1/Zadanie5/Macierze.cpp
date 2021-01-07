#include <iostream>     

using namespace std;

int main () 
{
    const int Wiersz = 2, Kolumna = 3;
    int macierzA[Wiersz][Kolumna], macierzB[Wiersz][Kolumna];
    cout << "Uzupelnij macierz A: \n";
    for(int i = 0; i < Wiersz; i++)
    for(int j = 0; j < Kolumna; j++)
    {
        cin >> macierzA[i][j];
    }
    cout << "Uzupelnij macierz B: \n";
    for(int i = 0; i < Wiersz; i++)
    for(int j = 0; j < Kolumna; j++)
    {
        cin >> macierzB[i][j];
    }
    cout << "Wynikiem dodawiania podanych macierzy jest nowa macierz: \n";
    for(int i = 0; i < Wiersz; i++)
    {
    for(int j = 0; j < Kolumna; j++)
    {
        macierzA[i][j] += macierzB[i][j];
        cout << macierzA[i][j]<< " ";
    }
    cout << endl;
    }
    return 0;
}