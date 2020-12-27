#include <iostream>
#include <math.h>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <lab4/macierz.hpp>

using namespace std;


int main()
{
    int n=1,m=2,x=5,y=4;
    double val1 = 7, val2 = 11;

    Matrix m1(x,y); 
    Matrix m2(x,y);
    Matrix m3(x);

    cout << endl;
//test metody get()
    cout << "wartosc drugiej komorki pierwszego rzedu macierzy m1 przed wykonaniem metody set: " << m1.get(n,m) << endl; 
    cout << "wartosc drugiej komorki pierwszego rzedu macierzy m2 przed wykonaniem metody set: " << m2.get(n,m) << endl << endl;
//test metody set()
    m1.set(n,m,val1);  
    m2.set(n,m,val2); 
//test metody get()
    cout << "wartosc drugiej komorki pierwszego rzedu macierzy m1 po wykonaniu metody set: " << m1.get(n,m) << endl; 
    cout << "wartosc drugiej komorki pierwszego rzedu macierzy m2 po wykonaniu metody set: " << m2.get(n,m) << endl;
//test metody add()
    cout << endl << "macierz po dodaniu: " << endl;
    m1.add(m2).print(); 
//test metody subtract()
    cout << endl<< "macierz po odejmowaniu: " << endl;
    m1.subtract(m2).print();
//test metody multiply()
    cout << endl << "macierz po pomnozeniu: " << endl;
    m1.mutliply(m2).print(); 
//test metody cols()
    cout << endl << "liczba kolumn macierzy m1: " << m1.cols() << endl; 
//test metody rows()
    cout << endl << "liczba rzedow macierzy m1: " << m1.rows() << endl; 
//test metody print()
    cout << endl << "macierz m1: " << endl;
    m1.print(); 
    cout << endl << "macierz m2: " << endl;
    m2.print(); 
//test metody store()
    m1.store("m1.txt","./"); 
    system("pause");
    return 0;
}
