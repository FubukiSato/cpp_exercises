#include "Circle.h"
#include "math.h"

std::string Circle::get_name() const{
    return "Circle";
}

float Circle::compute_area() const{
    return M_PI*radius*radius;
}

Circle* Circle::create(Circle circle) const{
    
}

Circle* Circle::clone(Circle circle) const{

}

Circle::Circle(Point2D center, float radius): 
center(center),radius(radius){}
    
Circle::~Circle(){

}