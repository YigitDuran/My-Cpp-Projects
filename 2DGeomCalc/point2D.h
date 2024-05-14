#ifndef UNTITLED_POINT2D_H
#define UNTITLED_POINT2D_H
#include <iostream>

class point2D
{
private:
    double coordinateX;
    double coordinateY;

public:
    point2D();
    point2D(double x, double y);

    void setCoordinateX(double x);
    void setCoordinateY(double y);

    double getCoordinateX();
    double getCoordinateY();

    void printCoord(std::string pointName); //prints pointName and coordinates of points. (useless?)
};

#endif //UNTITLED_POINT2D_H
