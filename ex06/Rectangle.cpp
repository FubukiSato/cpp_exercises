#include "Rectangle.h"

std::string Rectangle::get_name() const{
    return "Rectangle";
}

float Rectangle::compute_area() const{
    return width*height;
}

Rectangle* Rectangle::create() const{
    
}

Rectangle* Rectangle::clone() const{

}

Rectangle::Rectangle(Point2D left_corner, float width, float height): left_corner(left_corner),width(width),height(height){}
    
Rectangle::~Rectangle(){

}