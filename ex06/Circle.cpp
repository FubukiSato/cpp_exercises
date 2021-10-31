//Fubuki Sato s1270052
#include "Circle.h"
#include "math.h"

std::string Circle::get_name() const{
    return "Circle";
}

float Circle::compute_area() const{
    return M_PI*radius*radius;
}

Circle* Circle::create(Point2D center, float radius) const{
    Circle circle = Circle(center,radius);
    return &circle; //自分のクラスのコンストラクタを呼び出す練習？
}

Circle* Circle::clone(Circle circle) const{
    Circle cp_circle = circle;
    return &cp_circle;
}

Circle::Circle(Point2D center, float radius): 
center(center),radius(radius){printf("circle_cost\n");}

Circle::Circle(const Circle& circle){
    printf("circle_cpcost\n");
    center = circle.center;
    radius = circle.radius;
}
    
Circle::~Circle(){

}