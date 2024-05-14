#include <iostream>
#include "sphere.h"

int sphere::sphereCount = 0;

sphere::sphere() : center(), radius(0.0)
{
    ++sphereCount;
    std::cout << "***sphere default constructor***" << std::endl;
}

sphere::sphere(point3D center, double radius) : center(center), radius(radius)
{
    ++sphereCount;
    std::cout << "***sphere parameterized constructor1***" << std::endl;
}

sphere::sphere(double centerX, double centerY, double centerZ, double radius)
        : center(centerX, centerY, centerZ), radius(radius)
{
    ++sphereCount;
    std::cout << "***sphere parameterized constructor2***" << std::endl;
}

sphere::~sphere()
{
    std::cout << "***sphere destructor***" << std::endl;
}

int sphere::getSphereCount()
{
    return sphereCount;
}

void sphere::print() const
{
    std::cout << "center";
    center.print();
    std::cout << "radius: " << radius << std::endl;
}

double sphere::calculateArea() const
{
    return 4 * 3.14 * radius * radius;
}

double sphere::calculateCircumference() const
{
    return 4.0/3 * 3.14 * radius * radius * radius;
}