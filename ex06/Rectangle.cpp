//Fubuki Sato s1270052
#include "Rectangle.h"

std::string Rectangle::get_name() const{
    return "Rectangle";
}

float Rectangle::compute_area() const{
    return width*height;
}

Rectangle* Rectangle::create(Point2D left_corner, float width, float height) const{
    Rectangle rectangle = Rectangle(left_corner,width,height);
    return &rectangle; 
}

Rectangle* Rectangle::clone(Rectangle rectangle) const{
    Rectangle cp_rectangle = rectangle;
    return &cp_rectangle;
}

Rectangle::Rectangle(Point2D left_corner, float width, float height):
left_corner(left_corner),width(width),height(height){printf("rectangle_cost\n");}

Rectangle::Rectangle(){}
    
Rectangle::Rectangle(const Rectangle& rectangle){
    printf("rectangle_cpcost\n");
    left_corner = rectangle.left_corner;
    width = rectangle.width;
    height = rectangle.height;
}

Rectangle::~Rectangle(){

}