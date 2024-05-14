#include "employee.h"

#include <iostream>
#include <utility>

employee::employee() : name(), surname(), ID(0), age(0)
{
    ++count;
}

employee::employee(std::string name, std::string surname, int ID, int age) :
        name(std::move(name)), surname(std::move(surname)), ID(ID), age(age)
{
    ++count;
}

int employee::getAge() const
{
    return age;
}

void employee::printEmployee() const
{
    std::cout << "name:          " << name    << "\n";
    std::cout << "surname:       " << surname << "\n";
    std::cout << "ID:            " << ID      << "\n";
    std::cout << "age:           " << age     << std::endl;
}

int employee::count = 0;