#include <iostream>
#include <cmath>

int main() {

//============================================================================= start(sizeA)

    std::cout << "Enter how many binary digits you want to enter for "
                 "binarySequenceA. " << std::endl;

    int sizeA;
    std::cin >> sizeA;

    while (sizeA < 0) {
        std::cout << "Amount of binary digits you want to enter can not be "
                     "negative. Please try again." << std::endl;

        std::cout << "Enter how many binary digits you want to enter for "
                     "binarySequenceA. " << std::endl;

        std::cin >> sizeA;
    }

//============================================================================= start(binarySequenceA), end(sizeA)

    std::cout << "Enter " << sizeA << " binary digits for binarySequenceA."
              << std::endl;

    bool binarySequenceA[sizeA];
    int numberBuffer;

    for (int i = 0; i < sizeA; ++i) {
        std::cin >> numberBuffer;
        if (!(numberBuffer == 0 || numberBuffer == 1)) {
            std::cout << "Binary digit values can only be 0 or 1, please try again." << std::endl;
            return 0;
        }

        binarySequenceA[i] = numberBuffer;
    }

    int numA = 0;
    int powerA = sizeA - 1;
    for (int i = 0; i < sizeA; ++i) {
        if (binarySequenceA[i] == 1) {
            numA += (int) pow(2, powerA - i);
        }
    }

    std::cout << "numA: " << numA << std::endl;

//============================================================================= start(sizeB), end(binarySequenceA)

    std::cout << "Enter how many binary digits you want to enter for "
                 "binarySequenceB. " << std::endl;

    int sizeB;
    std::cin >> sizeB;

    while (sizeB < 0) {
        std::cout << "Amount of binary digits you want to enter can not be "
                     "negative. Please try again." << std::endl;

        std::cout << "Enter how many binary digits you want to enter for "
                     "binarySequenceB. " << std::endl;

        std::cin >> sizeB;
    }

//============================================================================= start(binarySequenceB), end(sizeB)

    std::cout << "Enter " << sizeB << " binary digits for binarySequenceB."
              << std::endl;

    bool binarySequenceB[sizeB];

    for (int i = 0; i < sizeB; ++i) {
        std::cin >> numberBuffer;
        if (!(numberBuffer == 0 || numberBuffer == 1)) {
            std::cout << "Binary digit values can only be 0 or 1, please try again." << std::endl;
            return 0;
        }

        binarySequenceB[i] = numberBuffer;
    }

    int numB = 0;
    int powerB = sizeB - 1;
    for (int i = 0; i < sizeB; ++i) {
        if (binarySequenceB[i] == 1) {
            numB += (int) pow(2, powerB - i);
        }
    }

    std::cout << "numB: " << numB << std::endl;

//============================================================================= start(), end()

    int numSum = numA + numB;
    std::cout << "numSum: " << numSum << std::endl;

    int i = 0;
    while(numSum >= pow(2,i))
    {
        ++i;
    }
    int sizeSum = i;
    std::cout << "sizeSum: " << sizeSum << std::endl;

//============================================================================= start(), end()

    bool binarySequenceSum[sizeSum];

    for (int j = sizeSum - 1; j >= 0; --j)
    {
        if(numSum % 2 == 1)
        {
            binarySequenceSum[j] = true;
        }

        numSum /= 2;
    }

    for (int j = 0; j < sizeSum; ++j)
    {
        std::cout << binarySequenceSum[j] << " ";
    }

    return 0;
}
