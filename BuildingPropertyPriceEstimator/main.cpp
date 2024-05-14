#include <iostream>
#include <ctime>
#include "building.h"
#include "shop.h"
#include "house.h"

int main()
{
    srand(time(NULL));

    building b1;
    std::cout << "b1:" << std::endl;
    b1.printInfo();
    std::cout << std::endl;

    building b2(5);
    std::cout << "b2:" << std::endl;
    b2.printInfo();
    std::cout << std::endl;

    shop s1;
    std::cout << "s1:" << std::endl;
    s1.printInfo();
    std::cout << std::endl;

    shop s2(4, "Art");
    std::cout << "s2:" << std::endl;
    s2.printInfo();
    std::cout << std::endl;

    house h1;
    std::cout << "h1:" << std::endl;
    h1.printInfo();
    std::cout << std::endl;

    int array[5] = {15, 20, 30, 52, 45};
    house h2(5, 3, array);
    std::cout << "h2:" << std::endl;
    h2.printInfo();
    std::cout << std::endl;

    return 0;
}