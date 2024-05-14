//todo: add an overloaded assignment(=) operator for rule of 3.

#include <iostream>
#include "myArray.h"
#include "myarray.cpp"

int main()
{
    myArray<int> myArray1(2);
    myArray1.assign_value_at_index(-1, 5);
    myArray1.assign_value_at_index(2, 6);

    myArray1.assign_value_at_index(0, 2);
    myArray1.assign_value_at_index(1, 3);

    std::cout << "myArray1:\n";
    myArray1.printArray();
    std::cout << std::endl;

    myArray<int> myArray2(myArray1);
    std::cout << "myArray2:\n";
    myArray2.printArray();
    std::cout << std::endl;

    myArray1.assign_value_at_index(0, 7);
    myArray1.assign_value_at_index(1, 8);

    std::cout << "myArray1:\n";
    myArray1.printArray();
    std::cout << std::endl;

    std::cout << "myArray2:\n";
    myArray2.printArray();
    std::cout << std::endl;

    return 0;
}