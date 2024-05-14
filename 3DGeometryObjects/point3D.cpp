#include "point3D.h"

#include <iostream>
#include <cmath>

point3D::point3D() : x(0.0), y(0.0), z(0.0)
{
    ++pointCount;
    std::cout << "*point3D default constructor: " << getThis() << "*" << std::endl;
}

point3D::point3D(double x, double y, double z) : x(x), y(y), z(z)
{
    ++pointCount;
    std::cout << "*point3D parameterized constructor: " << getThis() << "*" << std::endl;
}

point3D::point3D(const point3D& that) : x(that.x), y(that.y), z(that.z)
{
    std::cout << "*point3D copy constructor: " << getThis() << "*" << std::endl;
}

point3D::~point3D()
{
    std::cout << "*point3D destructor: " << getThis() << "*" << std::endl;
}

point3D& point3D::setX(double newX)
{
    x = newX;
    return *this;
}
point3D& point3D::setY(double newY)
{
    y = newY;
    return *this;
}
point3D& point3D::setZ(double newZ)
{
    z = newZ;
    return *this;
}

point3D* point3D::getThis() { return this; }

int point3D::getPointCount() { return pointCount; }

void point3D::print() const
{
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}

double point3D::calculateDistance(const point3D& endPoint) const
{
    return sqrt(pow(endPoint.x - x, 2) + pow(endPoint.y - y, 2) +
                pow(endPoint.z - z, 2));
}

int point3D::pointCount = 0;