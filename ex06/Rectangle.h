//Fubuki Sato s1270052
#ifndef Rectangle
#include <string>
#include "Shape2D.h"

class Rectangle : public Shape2D{
    
    public:
    std::string get_name() const;

    float compute_area() const;

    Rectangle* create(Point2D left_corner, float width, float height) const;

    Rectangle* clone(Rectangle) const;

    Rectangle(Point2D left_corner, float width, float height);
    
    ~Rectangle();

    protected:
    Point2D left_corner;
    float width;
    float height;
};

#endif