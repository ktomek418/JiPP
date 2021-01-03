#ifndef EMPLOYEE
#define EMPLOYEE
#include <string>
#include <iostream>
using std::string;

class Employee
{
    string id_;
    string name_;
    string surname_;
    string departmentld_;
    string position_;

    public:
    Employee(string id, string name, string surname, string depart, string position);
    void print() const;
    string get_id() const {return this -> id_;}
    string get_name() const {return this -> name_;}
    string get_surname() const {return this -> surname_;}
    string get_departmentId() const {return this -> departmentld_;}
    string get_position() const {return this-> position_;}

};
#endif