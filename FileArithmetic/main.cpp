#include <iostream>
#include <fstream>

int main()
{
    std::string filename;
    std::getline(std::cin, filename);

    std::ifstream inFile;

    inFile.open(filename);

    while(!inFile.eof())
    {
        int num1;
        char opt;
        int num2;

        inFile >> num1;
        inFile >> opt;
        inFile >> num2;

        switch (opt)
        {
            case '+':
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
                break;
            case '-':
                std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
                break;
            case '*':
                std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
                break;
            case '/':
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
                break;
            default:
                std::cout << "error" << std::endl;
                break;
        }
    }

    inFile.close();

    return 0;
}