//Fubuki Sato s1270052
#ifndef Rectangle_h
#define Rectangle_h

#include "Shape2D.h"

class Rectangle : public Shape2D{

    struct Point2D{
    float x;
    float y;
};

    public:
    std::string get_name() const;
    float compute_area() const;
    Rectangle* create() const;
    Rectangle* clone() const;
    Rectangle(Point2D left_corner, float width, float height);
    Rectangle(const Rectangle& rectangle);
    Rectangle();
    ~Rectangle();

    protected:
    Point2D left_corner;
    float width;
    float height;
   
};

#endif