#include "line2D.h"

line2D::line2D()
{
    startingPoint.setCoordinateX(0.0);
    startingPoint.setCoordinateY(0.0);
    endingPoint.setCoordinateX(0.0);
    endingPoint.setCoordinateY(0.0);
}

line2D::line2D(point2D startingP, point2D endingP)
{
    startingPoint = startingP;
    endingPoint = endingP;
}

line2D::line2D(double startingPX, double startingPY, double endingPX, double endingPY)
{
    startingPoint.setCoordinateX(startingPX);
    startingPoint.setCoordinateY(startingPY);
    endingPoint.setCoordinateX(endingPX);
    endingPoint.setCoordinateY(endingPY);
}

void line2D::printStartingPointCoordinates()
{
    endingPoint.printCoord("StartingPoint");
}

void line2D::printEndingPointCoordinates()
{
    endingPoint.printCoord("EndingPoint");
}

double line2D::calculateLength()
{
    return sqrt((endingPoint.getCoordinateX() - startingPoint.getCoordinateX()) * (endingPoint.getCoordinateX() - startingPoint.getCoordinateX()) + (endingPoint.getCoordinateY() - startingPoint.getCoordinateY()) * (endingPoint.getCoordinateY() - startingPoint.getCoordinateY()));
}
//alternative user for constructor
//line2D::line2D(point2D startingP, point2D endingP)
//{
//    startingPoint.setCoordinateX(startingP.getCoordinateX());
//    startingPoint.setCoordinateY(startingP.getCoordinateY());
//    endingPoint.setCoordinateX(endingP.getCoordinateX());
//    endingPoint.setCoordinateY(endingP.getCoordinateY());
//}