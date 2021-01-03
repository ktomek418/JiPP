#include <hrms/HRMS.hpp>
#include <hrms/Employee.hpp>
bool Hrms::add( Employee& employee, string department_id, double salary )
{
    workers.push_back(employee);
    salaries[employee.get_id()] = salary;
    dep_workers[department_id].push_back(employee.get_id());
    return true;
}

void Hrms::printdepartment(string department_id)  
{
    std::cout << "Pracownicy departamentu " << department_id << ": "<<std::endl;
    for(auto const& x : dep_workers[department_id]) std::cout << x << std::endl;
}

void Hrms::printSalaries() 
{
    for(auto const &x : salaries)
    {
        std::cout<<x.first << "\t---\t" << x.second << std::endl;
    }
}