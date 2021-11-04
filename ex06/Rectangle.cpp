//Fubuki Sato s1270052
#include "Rectangle.h"

std::string Rectangle::get_name() const{
    return "Rectangle";
}

float Rectangle::compute_area() const{
    return width*height;
}

Rectangle* Rectangle::create() const{
    Point2D point2d;
    point2d.x = 3.0; point2d.y = 5.0;
    Rectangle* rec = new Rectangle(point2d,3.0,2.0);
    return rec;
}

Rectangle* Rectangle::clone() const{
    
}

Rectangle::Rectangle(Point2D a, float b, float c){
    left_corner = a;
    width = b;
    height = c;
}
    

Rectangle::Rectangle(const Rectangle& rectangle){

}

Rectangle::~Rectangle(){

}