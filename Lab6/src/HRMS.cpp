#include <hrms/HRMS.hpp>
#include <hrms/Employee.hpp>
#include <algorithm>
void Hrms::add( Employee& employee, string department_id, double salary )
{
    workers[employee.get_id()] = employee;
    salaries[employee.get_id()] = salary;
    dep_workers[department_id].push_back(employee.get_id());
}

void Hrms::changeSalary(string employeeid, double salary)
{
    if (salary < 0 ) salary = 0;
    salaries[employeeid] = salary;
}

void Hrms::printdepartment(string department_id)  
{
    std::cout << "Identyfikatory pracownikow departamentu: " << department_id << ": "<<std::endl;
    for(auto const& x : dep_workers[department_id]) 
    {
        std::cout << x << std::endl;

    }
    std::cout << std::endl;
}

void Hrms::printSalaries() 
{
    std::cout<< "Informacje o zarobkach" << std::endl;
    for(auto const &x : salaries)
    {
        std::cout << "Id: " <<x.first << "  " << workers.at(x.first).get_name() << "  " << workers.at(x.first).get_surname();
        std::cout << "< " << x.second << "$ >"<<std::endl;    
    }
    std::cout << std::endl;
}

void Hrms::printSalariesSorted()
{
    std::cout<< "Posortowane informacje o zarobkach" << std::endl;
    std::vector <std::pair <Employee, double>> a_sort;
    for(auto const &x : workers) a_sort.push_back( std::make_pair(x.second, salaries[ x.second.get_id() ] ) );
    std::sort(a_sort.begin(), a_sort.end(), [](std::pair <Employee, double>& a, std::pair <Employee, double>& b) {return (a.second > b.second);});
    
    for(auto const &x : a_sort)
    {
        std::cout << "Id: " <<x.first.get_id() << "  " << x.first.get_name() << "  " << x.first.get_surname();
        std::cout << "< " << x.second << "$ >"<<std::endl;    
    }
    std::cout << std::endl;
}