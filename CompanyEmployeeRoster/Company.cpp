#include "Company.h"

Company::Company()
{
    company_name = "";
    for (int emp_i = 0; emp_i < 8; ++emp_i)
    {
        company_employees[emp_i].setName("");
        company_employees[emp_i].setSurname("");
        company_employees[emp_i].setID(0);
        company_employees[emp_i].setAge(0);
    }
    employeeCount = 0;
}

Company::Company(std::string comp_name, Employee comp_employees[], int empCount)
{
    company_name = comp_name;
    for (int emp_i = 0; emp_i < 8; ++emp_i)
    {
        company_employees[emp_i].setName(comp_employees[emp_i].getName());
        company_employees[emp_i].setSurname(comp_employees[emp_i].getSurname());
        company_employees[emp_i].setID(comp_employees[emp_i].getID());
        company_employees[emp_i].setAge(comp_employees[emp_i].getAge());
    }
    employeeCount = empCount;
}

Company::Company(std::string comp_name, int empCount)
{
    company_name = comp_name;
    employeeCount = empCount;
}

void Company::addEmployee(Employee emp, int emp_i)
{
    company_employees[emp_i] = emp;
}

Employee Company::findYoungestEmployee()
{
    int minAge = company_employees[0].getAge();
    int returnIndex = 0;
    for (int emp_i = 1; emp_i < 8; ++emp_i)
    {
        if(company_employees[emp_i].getAge() < minAge)
        {
            minAge = company_employees[emp_i].getAge();
            returnIndex = emp_i;
        }
    }

    return company_employees[returnIndex];
}