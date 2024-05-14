#ifndef UNTITLED_CIRCLE2D_H
#define UNTITLED_CIRCLE2D_H
#include "point2D.h"

class circle2D
{
private:
    point2D center;
    double radius;
public:
    circle2D();
    circle2D(point2D c, double r);
    circle2D(double centerX, double centerY, double r);
    double getRadius();
    void setRadius(double r);
    void printCenterCoordinate();
    double calculateCircumference();
    double calculateArea();
};


#endif //UNTITLED_CIRCLE2D_H
