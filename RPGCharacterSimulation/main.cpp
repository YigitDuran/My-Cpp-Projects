#include <iostream>
#include "person.h"
#include "sultan.h"
#include "merchant.h"

int main()
{
    person p1;
    std::cout << "p1:\n";
    p1.print();

    person p2("bob", 70, "england", 400);
    std::cout << "\np2:\n";
    p2.print();

    sultan s1;
    std::cout << "\ns1:\n";
    s1.print();

    sultan s2("henry", 70, "greenland", 500, "northland");
    std::cout << "\ns2:\n";
    s2.print();

    merchant m1;
    std::cout << "\nm1:\n";
    m1.print();

    merchant m2("joe", 60, "norway", 500, "table");
    m2.eat(20);
    m2.travel("tokyo");
    m2.trade(400);

    std::cout << "\nm2:\n";
    m2.print();

    return 0;
}