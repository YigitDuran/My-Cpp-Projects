#include <iostream>
#include "person.h"
#include "family.h"

int main()
{
    person p1;
    std::cout << "p1:\n";
    p1.print();
    std::cout << std::endl;

    person father("jack", "daniels", 34);
    std::cout << "father:\n";
    father.print();
    std::cout << std::endl;

    family f1;
    std::cout << "f1:\n";
    f1.print();
    std::cout << std::endl;

    family f2(father, 5);
    std::cout << "f2:\n";
    f2.print();
    std::cout << std::endl;

    return 0;
}