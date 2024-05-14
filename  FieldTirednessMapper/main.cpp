//Example input file:
//10 8
//2015 2
//0 0 5 5
//7 0 8 2
//2016 1
//0 0 5 5
//2017 2
//0 0 3 3
//7 0 8 2

//Each information will be given IN A SINGLE LINE within the file as seen in the example above.
//Using this information, your program will calculate the tiredness of each part of the 2D rectangular field as follows:
//• Each cell in the 2D int array will represent the tiredness of that part of the field.
//• The tiredness of each part starts at “0”.
//• The tiredness of each part increases by 1 every year the field has been planted.
//• The tiredness of each part decreases by 1 every year the field has NOT been planted to a minimum of 0.

//Example output tiredness map for the input given above:
//3 3 3 3 1 1 0 1 1 0
//3 3 3 3 1 1 0 1 1 0
//3 3 3 3 1 1 0 1 1 0
//3 3 3 3 1 1 0 0 0 0
//1 1 1 1 1 1 0 0 0 0
//1 1 1 1 1 1 0 0 0 0
//0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0

//Input:
//• The horizontal size of the field
//• The vertical size of the field
//• Yearly information block:
//  o Starting with year information and number of plantings in that year
//  o Then the top left and bottom right coordinates of each planting in that year

//Output:
//• The tiredness map of the whole field as a 2D int array
//NOTE: The coordinates of the top left corner part of the map is 0,0 and the maximum size of the field is 40, 40
//NOTE: No plantings given for the same year can overlap with one another.
//NOTE: You MUST use relative address for the input file and put the file in the folder where your executable is.

//HINT: You should start with a 2D array where the value of EACH cell is 0.
//HINT: While calculating the map for the next year, using a temporary second 2D array is STRONGLY
//SUGGESTED (e.g., tirednessMap, newTirednessMap).

//Sample Input/Outputs:

//Input: fieldInfo1.txt
//fieldInfo1.txt:
//5 5
//2016 2
//0 0 2 2
//1 3 4 4
//2017 2
//1 1 3 3
//3 0 4 0

//Output:
//0 0 0 1 1
//0 2 2 1 0
//0 2 2 1 0
//0 2 2 2 0
//0 0 0 0 0

//Input: fieldInfo2.txt
//fieldInfo2.txt:
//10 10
//2014 3
//2 2 2 7
//5 4 8 7
//8 1 9 3
//2015 3
//2 2 2 7
//5 4 8 7
//8 1 9 3
//2016 4
//0 0 2 2
//3 8 6 9
//5 4 8 5
//8 1 9 3
//2017 2
//8 1 9 3
//9 8 9 9

//Output:
//0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 4 4
//0 0 2 0 0 0 0 0 4 4
//0 0 0 0 0 0 0 0 4 4
//0 0 0 0 0 2 2 2 2 0
//0 0 0 0 0 2 2 2 2 0
//0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 1
//0 0 0 0 0 0 0 0 0 1

//Input: fieldInfo3.txt
//fieldInfo3.txt:
//5 5
//2014 1
//0 0 2 2
//2015 1
//0 0 2 2
//2016 0
//2017 0

//Output:
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0

//-------------------------------------------------

#include <iostream>
#include <fstream>

//todo: Error check: Check if current year has increased by 1.

//todo: Error check: Check if enough year data has been given,
//todo: has to be from first currentYear value to 2017

//todo: Error check: Make sure no more data after 2017 will be
//todo: taken by the program.

//todo: Error check: currentYear has to be lower than 2017

//todo: Error check: plant data cannot be bigger than sizeX and sizeY

int main()
{
    std::string filename;
    std::cin >> filename; //exampleInput.txt, fieldInfo1.txt, fieldInfo2.txt, fieldInfo3.txt

    std::ifstream inFile;
    inFile.open(filename);

//------------------------------------------------- taking sizes of the tirednessMap and initializing all elements of the array to 0

    int sizeX;
    int sizeY;

    inFile >> sizeX;
    inFile >> sizeY;

    int tirednessMap[sizeY][sizeX];

    for (int i = 0; i < sizeY; ++i)
    {
        for (int j = 0; j < sizeX; ++j)
        {
            tirednessMap[i][j] = 0;
        }
    }

//------------------------------------------------- test, printing out the field before any planting, all elements of the array are 0

    for (int i = 0; i < sizeY; ++i)
    {
        for (int j = 0; j < sizeX; ++j)
        {
            std::cout << tirednessMap[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "------------------------" << std::endl;

//-------------------------------------------------



    while(!inFile.eof()) //alternative: while(currentYear <= 2017) in this case need to decapsulate int currentYear read the first value from the file for currentYear before the while loop then,
    {                    //move it to the bottom of the while again.
        int currentYear;
        inFile >> currentYear;

        int plantingCount;
        inFile >> plantingCount;

        std::cout << "year: " << currentYear << ", plantingCount: " << plantingCount << std::endl; //test

//------------------------------------------------- creating a second 2D array and initializing it to the original tirednessMap (will be used for checking unchanged elements)

        int tirednessMap2[sizeY][sizeX];
        for (int i = 0; i < sizeY; ++i)
        {
            for (int j = 0; j < sizeX; ++j)
            {
                tirednessMap2[i][j] = tirednessMap[i][j];
            }
        }

//------------------------------------------------- increasing planted areas by one

        int startXCoord;
        int startYCoord;
        int endXCoord;
        int endYCoord;

        for (int i = 0; i < plantingCount; ++i)
        {
            inFile >> startXCoord;
            inFile >> startYCoord;
            inFile >> endXCoord;
            inFile >> endYCoord;

            std::cout << "start(" << startXCoord << ", " << startYCoord << ") end(" << endXCoord << ", " << endYCoord << ")" << std::endl; //test

            for (int y_i = startYCoord; y_i <= endYCoord; ++y_i)
            {
                for (int x_i = startXCoord; x_i <= endXCoord; ++x_i)
                {
                    ++tirednessMap[y_i][x_i];
                }
            }
        }

//------------------------------------------------- decreasing unplanted areas by one unless they are already 0 using tirednessMap2 (tirednessMap before planting for that year)

        for (int y_i = 0; y_i < sizeY; ++y_i)
        {
            for (int x_i = 0; x_i < sizeX; ++x_i)
            {
                if(tirednessMap[y_i][x_i] == tirednessMap2[y_i][x_i])
                {
                    if(tirednessMap[y_i][x_i] != 0)
                    {
                        --tirednessMap[y_i][x_i];
                    }
                }
            }
        }

//------------------------------------------------- printing tirednessMap to the console after that year

        for (int i = 0; i < sizeY; ++i)
        {
            for (int j = 0; j < sizeX; ++j)
            {
                std::cout << tirednessMap[i][j] << " ";
            }
            std::cout << std::endl;
        }

        std::cout << "----------------------------" << std::endl;
    }

//------------------------------------------------- test, printing out end result of tirednessMap

    std::cout << "final: " << std::endl;
    for (int i = 0; i < sizeY; ++i)
    {
        for (int j = 0; j < sizeX; ++j)
        {
            std::cout << tirednessMap[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}