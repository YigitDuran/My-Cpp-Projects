#ifndef ITP_PART10_PAGE12_EMPLOYEE_H
#define ITP_PART10_PAGE12_EMPLOYEE_H

#include <string>

class employee
{
public:
    employee();
    employee(std::string name, std::string surname, int ID, int age);

    int getAge() const;

    void printEmployee() const;

    static int count;
private:
    std::string name;
    std::string surname;
    int ID;
    int age;
};

#endif //ITP_PART10_PAGE12_EMPLOYEE_H