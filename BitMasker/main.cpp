//D:\School\21\CMP1001\Theoretic\Lecture Notes
//Introduction to Programming Part9.pdf, page:10/20

#include <iostream>
#include <cmath>
#include <bitset>

int main()
{
    std::cout << "Enter a number and press enter." << std::endl;

    int num;
    std::cin >> num;

    std::bitset<8> bitNum(num);                                             //for test but adds visibility

    std::cout << "Enter a mask digit count and press enter." << std::endl;

    int maskDigitCount;
    std::cin >> maskDigitCount;

    maskDigitCount = static_cast<int>(pow(2, maskDigitCount) - 1);

    std::bitset<8> bitMaskDigitCount(maskDigitCount);                       //for test but adds visibility

    int maskedNum = num & maskDigitCount;

    std::cout << "bitNum:            " << bitNum << std::endl;              //for test but adds visibility
    std::cout << "bitMaskDigitCount: " << bitMaskDigitCount << std::endl;   //for test but adds visibility
    std::cout << "Masked number:     " << maskedNum << std::endl;

    return 0;
}
