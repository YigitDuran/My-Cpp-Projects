#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    int bitsRequired = 0;

    while(num != 0)
    {
        num /= 2;
        ++bitsRequired;
    }

    std::cout << bitsRequired << std::endl;

    return 0;
}