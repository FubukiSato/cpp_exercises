#ifndef Rectangle
#include <string>
#include "Shape2D.h"

class Rectangle : public Shape2D{
    
    public:
    std::string get_name() const;

    float compute_area() const;

    Rectangle* create() const;

    Rectangle* clone() const;

    Rectangle(Point2D left_corner, float width, float height);
    
    ~Rectangle();
};

#endif