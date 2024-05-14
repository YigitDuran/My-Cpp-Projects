#ifndef UNTITLED_LINE2D_H
#define UNTITLED_LINE2D_H
#include <cmath>
#include "point2D.h"

class line2D
{
private:
    point2D startingPoint;
    point2D endingPoint;
public:
    line2D();
    line2D(point2D startingP, point2D endingP);
    line2D(double startingPX, double startingPY, double endingPX, double endingPY);

    void printStartingPointCoordinates();
    void printEndingPointCoordinates();

    double calculateLength();
};

#endif //UNTITLED_LINE2D_H