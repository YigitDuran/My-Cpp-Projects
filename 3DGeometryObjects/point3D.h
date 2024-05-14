#ifndef OOP_PART2_POINT3D_H
#define OOP_PART2_POINT3D_H

class point3D
{
public:
    point3D();
    point3D(double x, double y, double z);
    point3D(const point3D& that);
    ~point3D();

    point3D& setX(double newX);
    point3D& setY(double newY);
    point3D& setZ(double newZ);

    point3D* getThis();
    static int getPointCount();

    void print() const;
    double calculateDistance(const point3D& endPoint) const; //add same function that takes 3 doubles
private:
    double x;
    double y;
    double z;
    static int pointCount;
};

#endif //OOP_PART2_POINT3D_H