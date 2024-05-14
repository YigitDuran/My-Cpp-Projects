#include <iostream>
#include "lineSegment3D.h"

int lineSegment3D::lineSegmentCount = 0;

lineSegment3D::lineSegment3D() : startPoint(), endPoint()
{
    ++lineSegmentCount;
    std::cout << "*lineSegment3D 3 default constructor: " << getThis() << "*" << std::endl;
}

lineSegment3D::lineSegment3D(const point3D& startPoint, const point3D& endPoint) :
        startPoint(startPoint), endPoint(endPoint)
{
    ++lineSegmentCount;
    std::cout << "*lineSegment3D 3 parameterized constructor: " << getThis() << "*" << std::endl;
}

lineSegment3D::lineSegment3D(double startPx, double startPy, double startPz,
                             double endPx, double endPy, double endPz) :
        startPoint(startPx, startPy, startPz),
        endPoint(endPx, endPy, endPz)
{
    ++lineSegmentCount;
    std::cout << "*lineSegment3D 6 parameterized constructor: " << getThis() << "*" << std::endl;
}

lineSegment3D::~lineSegment3D()
{
    std::cout << "*lineSegment3D destructor: " << getThis() << "*" << std::endl;
}

lineSegment3D* lineSegment3D::getThis() { return this; }

int lineSegment3D::getLineSegmentCount() { return lineSegmentCount; }

void lineSegment3D::print() const
{
    std::cout << "startPoint";
    startPoint.print();
    std::cout << "endPoint";
    endPoint.print();
}

double lineSegment3D::calculateLength() const
{
    return startPoint.calculateDistance(endPoint);
}