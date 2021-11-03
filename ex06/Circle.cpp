//Fubuki Sato s1270052
#include "Circle.h"
#include "math.h"

std::string Circle::get_name() const{
    return "Circle";
}

float Circle::compute_area() const{
    return M_PI*radius*radius;
}

Circle* Circle::create() const{
    
}

Circle* Circle::clone() const{
    
}

Circle::Circle(Point2D center, float radius): 
center(center),radius(radius){printf("circle_cost\n");}

Circle::Circle(const Circle& circle){
    
}
    
Circle::~Circle(){

}