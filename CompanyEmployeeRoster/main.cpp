#include <iostream>
#include "Employee.h"
#include "Company.h"

int main()
{
    Company myCompany("myComp", 8);
    std::string empName;
    std::string empSurname;
    int empID;
    int empAge;

    for (int emp_i = 0; emp_i < 8; ++emp_i)
    {
        std::cout << "Enter name of the employee " << emp_i + 1 << ":" << std::endl;
        std::cin >> empName;

        std::cout << "Enter surname of the employee " << emp_i + 1 << ":" << std::endl;
        std::cin >> empSurname;

        std::cout << "Enter ID number of the employee " << emp_i + 1 << ":" << std::endl;
        std::cin >> empID;

        std::cout << "Enter age number of the employee " << emp_i + 1 << ":" << std::endl;
        std::cin >> empAge;

        Employee employee(empName, empSurname, empID, empAge);
        employee.printEmployee();
        myCompany.addEmployee(employee, emp_i);
    }
    std::cout << std::endl;

    std::cout << "***Youngest Employee***" << std::endl;
    myCompany.findYoungestEmployee().printEmployee();

    return 0;
}