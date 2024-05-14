#ifndef UNTITLED_COMPANY_H
#define UNTITLED_COMPANY_H
#include <iostream>
#include "Employee.h"

class Company
{
private:
    std::string company_name;
    Employee company_employees[8];
    int employeeCount;
public:
    Company();
    Company(std::string comp_name, Employee comp_employees[], int empCount);
    Company(std::string comp_name, int empCount);

    void addEmployee(Employee emp, int emp_i);

    Employee findYoungestEmployee();
};

#endif //UNTITLED_COMPANY_H