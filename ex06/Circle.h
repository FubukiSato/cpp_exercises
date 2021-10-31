#ifndef Circle
#include <string>
#include "Shape2D.h"

class Circle : public Shape2D{

    public:
    std::string get_name() const;

    float compute_area() const;

    Circle* create(Circle) const;

    Circle* clone(Circle) const;

    Circle(Point2D center, float radius);

    ~Circle();

    protected:
    Point2D center;
    float radius;
};

#endif