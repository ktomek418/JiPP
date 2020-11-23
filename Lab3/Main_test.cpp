#include <iostream>
#include "Macierz.h"
int main()
{
    using std::cout;
   //Tworzymy testowa macierz prostokatna
   Macierz macierz1(4,5);
   //Tworzymy testowa macierz kwadratowa
   Macierz macierz2(4,4);
   // Test modulu zwracajacego ilosc kolumn macierzy 
   int kolumny=macierz1.cols();
   cout<< "Ilosc kolumn w macierzy jest rowna: "<<kolumny<<std::endl;
   //Test modulu zwracajacego ilosc wierszy macierzy
   int wiersze=macierz1.rows();
   cout<< "Ilosc wierszy w macierzy jest rowna: "<<wiersze<<std::endl;
   //Tworzymy trzy macierze pomocnicze, ktore bedą potrzebne do pokazana metod add,substract i multipy
   Macierz macierz3(4,5);
   Macierz macierz4(4,4);
   Macierz macierz5(5,4);
   // Test modulu set ( ustawienie elementu [n][m] na wartosc val)
   macierz1.set(2,2,10);
   //Test modulu get( pobranie wartosci znajdujacej sie pod elementem[n][m])
   int wartosc=macierz1.get(2,2);
   cout << "Pobrana wartosc testowa jest rowna: "<<wartosc<<std::endl;
   // Test modulu print( rysowanie macierzy)c
   macierz1.print();
   // Uzupelniane macierzy pomocniczych o losowe elemtny
   macierz3.los();
   macierz4.los();
   macierz5.los();
   // test metody add dodajacej do siebie dwie macierz o takich samych wymiarach 
   Macierz nowa_macierz_add=macierz1.add(macierz3);
   cout<<"Wynikie dodawania macierzy: \n";
   macierz1.print();
   cout<< "Do macierzy:\n";
   macierz3.print();
   cout<<"Jest macierz: \n";
   nowa_macierz_add.print();
   // test metody odejmujacej od siebie dwie macierze
   Macierz nowa_mcierz_sub=macierz2.substract(macierz4);
   cout<<"Wynikiem odejmowania od macierzy: \n";
   macierz2.print();
   cout<< "macierzy:\n";
   macierz4.print();
   cout<<"Jest macierz: \n";
   nowa_mcierz_sub.print();
   // test metody mnozacej dwie macierze
   Macierz nowa_macierz_mul=macierz3.multiply(macierz5);
   cout<<"Wynikiem mnozenia macierzy: "<<std::endl;
   macierz3.print();
   cout<<"przez macierz: "<<std::endl;
   macierz5.print();
   cout<<"jest macierz: "<<std::endl;
   nowa_macierz_mul.print();
   //Test zapisywania macierzy do pliku
   nowa_macierz_add.store("matrix.txt", "./");
}