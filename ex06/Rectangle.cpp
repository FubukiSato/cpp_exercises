#include "Rectangle.h"

std::string Rectangle::get_name() const{
    return "Rectangle";
}

float Rectangle::compute_area() const{
    return width*height;
}

Rectangle* Rectangle::create(Rectangle rectangle) const{
    
}

Rectangle* Rectangle::clone(Rectangle rectangle) const{

}

Rectangle::Rectangle(Point2D left_corner, float width, float height):
left_corner(left_corner),width(width),height(height){}
    
Rectangle::Rectangle(const Rectangle& rectangle){
    left_corner = rectangle.left_corner;
    width = rectangle.width;
    height = rectangle.height;
}

Rectangle::~Rectangle(){

}