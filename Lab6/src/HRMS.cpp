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
    std::cout << "Identyfikatory pracownikow departamentu: " << department_id << ": "<<std::endl;
    for(auto const& x : dep_workers[department_id]) 
    {
        std::cout << x << std::endl;

    }
}

void Hrms::printSalaries() 
{
    int i = 0;
    for(auto const &x : salaries)
    {
        std::cout << x.first <<". ";
        std::cout << workers.at(i).get_name() <<"  "<< workers.at(i).get_surname();
        std::cout << "   < " << x.second <<"$ >"<< std::endl;
        i++;
    }
}