#include <string>
class Macierz
{
    private:
    int wiersze_;
    int kolumny_;
    double **macierz_;

    public:
    Macierz();
    
    Macierz(int wier,int kol); //1 - Konstruktor macierzy prostokątnej
    Macierz(int wier); //2 - konstruktor macierzy kwadratowej
    void set(int wier,int kol,double wart); // 3 - metoda ustawiająca indeks[wier][kol] macierzy na wartosc
    int get(int wier,int kol); // 4 - Metoda pobierająca indeks[wier][kol] macierzy
    Macierz add(Macierz& macierz_test); // metoda dodajaca do macierzy podana macierz
    Macierz substract(Macierz& macierz_test); // 6 - metoda odejmujaca od macierzy podana macierz
    Macierz multiply(Macierz& macierz_test); // 7 - metoda mnozaca przez siebie dwie macierze
    int cols(); // 8 - metoda zwracajaca ilosc kolumn macierzy
    int rows(); // 9 - metoda zwracajac ilosc wierszy macierzy
    void print(); // 10 - metoda rysujaca macierz
    void store(std::string filename, std::string path);  // 11 - metoda zapisujaca macierz do pliku
    void los(); //  12 - metoda losujaca elemetny macierzy


};