#ifndef OOP_PART2_SPHERE_H
#define OOP_PART2_SPHERE_H

#include "point3D.h"

class sphere
{
public:
    sphere();
    sphere(point3D center, double radius);
    sphere(double centerX, double centerY, double centerZ, double radius);
    ~sphere();

    static int getSphereCount();

    void print() const;
    double calculateArea() const;
    double calculateCircumference() const;
private:
    point3D center;
    double radius;
    static int sphereCount;
};

#endif //OOP_PART2_SPHERE_H