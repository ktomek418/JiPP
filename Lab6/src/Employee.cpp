#include <hrms/Employee.hpp>

Employee::Employee(string id, string name, string surname, string department, string position)
{
    id_ = id;
    name_ = name;
    surname_ = surname;
    departmentld_ = department;
    position_ = position;
}

Employee::Employee() {};

void Employee::print() const
{
    std::cout<<"ID: " << id_<<std::endl;
    std::cout << "NAME: " << name_<<std::endl;
    std::cout << "SURNAME: " << surname_<<std::endl;
    std::cout << "DEPARTAMENT_ID: " << departmentld_<<std::endl;
    std::cout << "Position: " << position_ <<std::endl;
}