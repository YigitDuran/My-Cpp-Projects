#ifndef ITP_PART10_PAGE12_COMPANY_H
#define ITP_PART10_PAGE12_COMPANY_H

#include "employee.h"
#include <string>

class company
{
public:
    company();
    explicit company(std::string name);
    ~company();

    void print() const;
    void addEmployee(employee emp);
    employee findYoungestEmployee() const;
private:
    std::string name;
    employee* employees;
    int employeeCount;
};

#endif //ITP_PART10_PAGE12_COMPANY_H