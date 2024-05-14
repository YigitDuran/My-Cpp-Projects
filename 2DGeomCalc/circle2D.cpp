#include "circle2D.h"

circle2D::circle2D()
{
    center.setCoordinateX(0.0);
    center.setCoordinateY(0.0);
    radius = 0.0;
}

circle2D::circle2D(point2D c, double r)
{
    center = c;
    radius = r;
}

circle2D::circle2D(double centerX, double centerY, double r)
{
    center.setCoordinateX(centerX);
    center.setCoordinateY(centerY);
    radius = r;
}

double circle2D::getRadius()
{
    return radius;
}

void circle2D::setRadius(double r)
{
    radius = r;
}

void circle2D::printCenterCoordinate()
{
    std::cout << "Coordinates of the center:" << std::endl;
    std::cout << "= C(" << center.getCoordinateX() << "," << center.getCoordinateY() << ")" << std::endl;
}

double circle2D::calculateCircumference()
{
    return 6.28 * radius;
}

double circle2D::calculateArea()
{
    return 3.14 * radius * radius;
}