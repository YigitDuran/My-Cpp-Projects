#include "Employee.h"

Employee::Employee()
{
    name = "";
    surname = "";
    ID_number = 0;
    age = 0;
}

Employee::Employee(std::string emp_name, std::string emp_surname, int emp_id, int emp_age)
{
    name = emp_name;
    surname = emp_surname;
    ID_number = emp_id;
    age = emp_age;
}

void Employee::setName(std::string emp_name)
{
    name = emp_name;
}
std::string Employee::getName()
{
    return name;
}

void Employee::setSurname(std::string emp_surname)
{
    name = emp_surname;
}
std::string Employee::getSurname()
{
    return surname;
}

void Employee::setID(int emp_id)
{
    ID_number = emp_id;
}
int Employee::getID()
{
    return ID_number;
}

void Employee::setAge(int emp_age)
{
    age = emp_age;
}
int Employee::getAge()
{
    return age;
}

void Employee::printEmployee()
{
    std::cout << "ID number: " << ID_number << std::endl;
    std::cout << "Name, surname: " << name << " " << surname << std::endl;
    std::cout << "Age: " << age << std::endl;
}