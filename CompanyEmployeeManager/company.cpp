#include "company.h"

#include <utility>
#include <iostream>

company::company() : name(), employees(nullptr), employeeCount(0) {}

company::company(std::string name) :
        name(std::move(name)), employees(nullptr), employeeCount(0)
{}

company::~company()
{
    delete[] employees;
}

void company::print() const
{
    std::cout << "Company name:  " << name << "\n";

    for (int i = 0; i < employeeCount; ++i)
    {
        employees[i].printEmployee();
        std::cout << std::endl;
    }

    std::cout << "employeeCount: " << employeeCount << std::endl;
}

void company::addEmployee(employee emp) //make this with new
{
    *employees = (employee*)malloc(employeeCount * sizeof(employee));
}

employee company::findYoungestEmployee() const
{
    int lowestAge = employees[0].getAge();
    int return_i = 0;

    for (int i = 1; i < employeeCount; ++i)
    {
        if(employees[i].getAge() < lowestAge)
        {
            lowestAge = employees[i].getAge();
            return_i = i;
        }
    }

    return employees[return_i];
}