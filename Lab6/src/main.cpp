#include <hrms/HRMS.hpp>
#include <hrms/Employee.hpp>

int main()
{
    Employee ep1("001", "Bartosz", "Nudziarz", "A", "Szef");
    Employee ep2("124", "Maciek", "Drugi", "A", "Prawa_reka");
    Employee ep3("003", "Katrazyna", "Konieczna", "A", "Lewa_reka");
    Employee ep4("453", "Wladyslaw", "Trzeci", "B", "Waza");
    Employee ep5("432", "Julia", "Kowalksa", "B", "Sekretarka");
    Employee ep6("523", "Marian", "Kiepski", "B", "Skarbnik");
    Employee ep7("007", "James", "Bond", "X", "Killer");
    Employee ep8("434", "Marcelina", "Nowak", "C", "Grafik");
    Employee ep9("234", "Michal", "Fryc", "C", "Developer");
    Employee ep10("124", "Ewelina", "Niemiec", "C", "Projektant");
    Hrms my;
    my.add(ep1, "A", 10000);
    my.add(ep2, "A", 7000);
    my.add(ep3, "A", 7000);
    my.add(ep4, "B", 4000);
    my.add(ep5, "B", 3500);
    my.add(ep6, "B", 3500);
    my.add(ep7, "X", 6666);
    my.add(ep8, "C", 5000);
    my.add(ep9, "C", 6000);
    my.add(ep10, "C", 5000);
    my.printdepartment("A");
    my.printSalaries();
    std::cout << "\nZmiana wartosci zarobkow metoda changesalaries()" << std::endl;
    my.changeSalary("001", 20000);
    my.changeSalary("234", 200);
    my.changeSalary("007", 667);
    my.changeSalary("523", 2137);
    my.changeSalary("432", 9999);
    std::cout <<'\n';
    my.printSalaries();
    my.printSalariesSorted();

}