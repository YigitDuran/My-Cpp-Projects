//Define a class named “Employee” with four private variables:
//the name (String), surname(String), ID number (integer), and age (integer) of
//the employee.

//Write a constructor for the class that takes two Strings and two integers.
//Also write a void function named printEmployee that prints the ID, name, and
//surname of the employee.

//Define another class named “Company” with three private variables: the name of
//the company (String), the employees of the company (Employee[]), and the
//employee count (int).

//Write a constructor and two functions named addEmployee and
//findYoungestEmployee.

//Write a program that reads the information of 8 people (i.e., names, surnames,
//ID numbers, and ages), finds and prints the information of the youngest and
//oldest employees.

#include <iostream>
#include "employee.h"
#include "company.h"

int main()
{
    company c1("Evil corp");
    c1.print();

    employee e1("Clueless", "Andy", 162, 32);

    c1.addEmployee(e1);

    c1.print();

    return 0;
}