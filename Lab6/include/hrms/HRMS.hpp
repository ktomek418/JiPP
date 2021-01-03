#ifndef HRMS
#define HRMS
#include "Employee.hpp"
#include <vector>
#include <map>
#include <iostream>
using std::string;

class Hrms
{
    std::vector <Employee> workers; //wszyscy pracownicy
    std::map < string, std::vector<string> > dep_workers; //ID depatramentu : Pracownicy
    std::map <string, double > salaries; // Id pracownika : Zarobki

    public:

    bool add(Employee& employee, string departament_id, double salary );
    void changeSalary(string employeeid, double new_salary) { salaries[employeeid] = new_salary; }
    void printdepartment(string department_id) ;
    void printSalaries();
    void printSalariesSorted();
};
#endif