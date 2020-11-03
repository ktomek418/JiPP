#include <iostream>

using namespace std;

void test(int &l1, int &l2)
{
    int temp;
    temp=l1;
    l1=l2;
    l2=temp;
}

void zamien(int &a, int &b)
{
    swap(a, b);
}

int main()
{
    int liczb1,liczb2,t_liczba1,t_liczba2;
    cout << "podaj pierwsza liczbe: ";
    cin >> liczb1;
    cout<<"Podaj swoja druga liczbe: ";
    cin >> liczb2;

    t_liczba1 = liczb1;
    t_liczba2 = liczb2;
    zamien(liczb1, liczb2);
    cout << "\nPo zamianie:" << liczb1 << " " << liczb2 << endl;
    test(t_liczba1, t_liczba2);
    cout << "test: " << t_liczba1 << " " << t_liczba2 << endl;
    return 0;
}