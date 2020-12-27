#include <iostream>
#include <fstream>

using namespace std;

class Matrix
{
private:
    int X, Y;
    double** tab;

public:
Matrix(int n, int m)
{
    X = n;
    Y = m;
    tab = new double* [n];
    for(int i=0; i<n; i++)
    tab[i] = new double[m];
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<m; j++) 
        {
            tab[i][j] = 0;
        }
    }
    
}
Matrix(int n)
{
    X = n;
    Y = n;
    tab = new double* [n];
    for (int i = 0; i < n; i++)
        tab[i] = new double[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
             tab[i][j] = 0;
        }
    }
}
   
~Matrix() { };
    
void set(int n, int m, double val)
{
    tab[n - 1][m - 1] = val;
}

double get(int n, int m)
{
    return tab[n-1][m-1];     
}

Matrix add(Matrix& m2)
{
    Matrix suma(X, Y);
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            suma.tab[i][j] = tab[i][j] + m2.tab[i][j];
        }
    }
    return suma;
}
Matrix subtract(Matrix& m2)
{
    Matrix wynik(X, Y);
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            wynik.tab[i][j] = tab[i][j] - m2.tab[i][j];
        }
     }
    return wynik;
}
Matrix mutliply(Matrix& m2)
{
    Matrix wynik(X,Y);
    for (int i = 0; i < X; i++) 
    {
        for (int j = 0; j < Y; j++) 
        {
            wynik.tab[i][j] = tab[i][j] * m2.tab[i][j];
        }
    }
    return wynik;
}  

int cols()
{
    return Y;
}
int rows()
{
    return X;
}

void print()
{
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}

void store(std::string filename, std::string path) {
    std::fstream plik;
    plik.open(path + filename, std::ios::out);
    plik << "liczba wierszy: " << X << " Liczba kolumn: " << Y << "\n\n";
        for (int i = 0; i < X; i++) 
        {
            for (int j = 0; j < Y; j++) 
            {
                plik << tab[i][j] << " ";
            }
            plik << "\n";
        }
        plik.close();
   
}
};