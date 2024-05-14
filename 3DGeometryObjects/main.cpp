#include <iostream>

#include "point3D.h"
#include "lineSegment3D.h"
//#include "sphere.h"

int main()
{
    point3D p1(3.0, 4.0, 5.0);
    point3D p2(6.0, 7.0, 8.0);

    std::cout << "&p1: " << &p1 << std::endl;
    std::cout << "&p2: " << &p2 << std::endl;

    lineSegment3D l1(p1, p2);

    return 0;
}
