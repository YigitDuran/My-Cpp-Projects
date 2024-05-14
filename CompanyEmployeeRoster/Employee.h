#ifndef UNTITLED_EMPLOYEE_H
#define UNTITLED_EMPLOYEE_H
#include <iostream>

class Employee
{
private:
    std::string name;
    std::string surname;
    int ID_number;
    int age;
public:
    Employee();
    Employee(std::string emp_name, std::string emp_surname, int emp_id, int emp_age);

    void setName(std::string emp_name);
    std::string getName();

    void setSurname(std::string emp_surname);
    std::string getSurname();

    void setID(int emp_id);
    int getID();

    void setAge(int emp_age);
    int getAge();

    void printEmployee();
};

#endif //UNTITLED_EMPLOYEE_H
