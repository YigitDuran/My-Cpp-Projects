#include "point2D.h"

point2D::point2D()
{
    coordinateX = 0.0;
    coordinateY = 0.0;
}
point2D::point2D(double x, double y)
{
    coordinateX = x;
    coordinateY = y;
}

void point2D::setCoordinateX(double x)
{
    coordinateX = x;
}
void point2D::setCoordinateY(double y)
{
    coordinateY = y;
}

double point2D::getCoordinateX()
{
    return coordinateX;
}
double point2D::getCoordinateY()
{
    return coordinateY;
}

void point2D::printCoord(std::string pointName) //prints pointName and coordinates of points. (useless?)
{
    std::cout << "Coordinates of " << pointName << ":" << std::endl;
    std::cout << "coordinateX: " << coordinateX << std::endl;
    std::cout << "coordinateY: " << coordinateY << std::endl;
    std::cout << std::endl;
}

//line23:
//Method 'getCoordinateX' can be made const;
//double point2D::getCoordinateX() const
//{
//    return coordinateX;
//}