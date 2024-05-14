#include "person.h"
#include <iostream>
#include <utility>

person::person() : name(), surname(), age(0) {}

person::person(std::string name, std::string surname, int age) :
        name(std::move(name)),
        surname(std::move(surname)),
        age(age)
{}

void person::print() const
{
    std::cout << "name:               " << name;
    std::cout << "\nsurname:            " << surname;
    std::cout << "\nage:                " << age << std::endl;
}