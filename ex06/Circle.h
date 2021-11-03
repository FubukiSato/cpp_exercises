//Fubuki Sato s1270052
#ifndef Circle_h
#define Circle_h

#include "Shape2D.h"

class Circle{

    struct Point2D{
    float x;
    float y;
};

    std::string get_name() const;
    float compute_area() const;
    Circle* create() const;
    Circle* clone() const;
    Circle(Point2D center, float radius);
    Circle(const Circle& circle);
    ~Circle();

    protected:
    Point2D center;
    float radius;
};

#endif