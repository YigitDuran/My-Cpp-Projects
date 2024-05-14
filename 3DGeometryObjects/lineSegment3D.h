#ifndef OOP_PART2_LINESEGMENT3D_H
#define OOP_PART2_LINESEGMENT3D_H

#include "point3D.h"

class lineSegment3D
{
public:
    lineSegment3D();
    lineSegment3D(const point3D& startPoint, const point3D& endPoint);
    lineSegment3D(double startPx, double startPy, double startPz, double endPx,
                  double endPy, double endPz);
    ~lineSegment3D();

    lineSegment3D* getThis();
    static int getLineSegmentCount();

    void print() const;
    double calculateLength() const;
private:
    point3D startPoint;
    point3D endPoint;
    static int lineSegmentCount;
};

#endif //OOP_PART2_LINESEGMENT3D_H