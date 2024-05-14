#include <iostream>
#include "point2D.h"
#include "line2D.h"
#include "circle2D.h"

int main()
{
    while(true)
    {
        std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
        std::cout << "Enter '1' for line2D/circle2D calculator." << std::endl;
        std::cout << "Enter '0' for terminating the program." << std::endl;
        std::cout << "Enter '*' to go back to the selection menu." << std::endl;
        std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).

        char programChooser;
        std::cin >> programChooser;

        while(programChooser == '*') //"go back to the selection menu" option.
        {
            std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
            std::cout << "Enter '1' for line2D/circle2D calculator." << std::endl;
            std::cout << "Enter '0' for terminating the program." << std::endl;
            std::cout << "Enter '*' to go back to the selection menu." << std::endl;
            std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).

            std::cin >> programChooser;
        }
        if(programChooser == '0') //"terminate the program" option. (gets out of the while loop).
        {
            break;
        }

        if(programChooser == '1') //goes to line2D/circle2D calculator program.
        {
            while(true) //(possible code change for compile speed) | change to; while(calculatorIndex != '0') and delete; if(calculatorIndex == '0')
            {
                std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                std::cout << "Enter '1' and press enter to calculate the distance between two points." << std::endl;
                std::cout << "Enter '2' and press enter to calculate the circumference of a circle2D." << std::endl;
                std::cout << "Enter '3' and press enter to calculate the area of a circle2D." << std::endl;
                std::cout << "Enter '0' and press enter to terminate the program." << std::endl;
                std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).

                char calculatorIndex; //variable to give user which calculator to choose option
                std::cin >> calculatorIndex;

                if(calculatorIndex == '0') //terminate program outputu yazilabilir
                {
                    break;
                }
                else if(calculatorIndex == '1')
                {
                    double point1X, point1Y, point2X, point2Y;
                    std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                    std::cout << "Enter x coordinate of the starting point2D and press enter." << std::endl;
                    std::cin >> point1X;
                    std::cout << "Enter y coordinate of the starting point2D and press enter." << std::endl;
                    std::cin >> point1Y;
                    std::cout << "Enter x coordinate of the ending point2D and press enter." << std::endl;
                    std::cin >> point2X;
                    std::cout << "Enter y coordinate of the ending point2D and press enter." << std::endl;
                    std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).

                    std::cin >> point2Y;
                    std::cout << std::endl;

                    point2D pointA(point1X, point1Y);
                    point2D pointB(point2X, point2Y);

                    line2D line(pointA, pointB);

                    std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                    std::cout << "The distance between points A(" << pointA.getCoordinateX() << "," << pointA.getCoordinateY() << ") and B(" << pointB.getCoordinateX() << "," << pointB.getCoordinateY() << ")" << std::endl;
                    std::cout << "= " << line.calculateLength() << std::endl;
                    std::cout << "*******************" << std::endl << std::endl; //indicates this is the program output (aesthethic).
                }
                else if(calculatorIndex == '2' || calculatorIndex == '3')
                {

                    double centerX, centerY, radius;
                    std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                    std::cout << "Enter x coordinate of center of the circle2D and press enter." << std::endl;
                    std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).

                    std::cin >> centerX;

                    std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                    std::cout << "Enter y coordinate of center of the circle2D and press entere." << std::endl;
                    std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).

                    std::cin >> centerY;

                    std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                    std::cout << "Enter radius of the circle2D and press enter." << std::endl;
                    std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).

                    std::cin >> radius;
                    std::cout << std::endl;

                    point2D center;
                    center.setCoordinateX(centerX);
                    center.setCoordinateY(centerY);

                    circle2D circle(center, radius);

                    if(calculatorIndex == '2')
                    {
                        std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                        std::cout << "Circumference of a circle2D with center; C(" << center.getCoordinateX() << "," << center.getCoordinateY() << ") and radius; " << radius << std::endl;
                        std::cout << "= " << circle.calculateCircumference() << std::endl;
                        std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                    }
                    else
                    {
                        std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                        std::cout << "Area of a circle2D with center; C(" << center.getCoordinateX() << "," << center.getCoordinateY() << ") and radius; " << radius << std::endl;
                        std::cout << "= " << circle.calculateArea() << std::endl;
                        std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                    }
                }
                else
                {
                    std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                    std::cout << "Wrong input, please try again." << std::endl << std::endl;
                    std::cout << "*******************" << std::endl; //indicates this is the program output (aesthethic).
                }
            }
        } //line2D/circle2D program ends
    }

    return 0;
}