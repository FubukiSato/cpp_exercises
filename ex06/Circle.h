#ifndef Circle
#include <string>
#include "Shape2D.h"

class Circle : public Shape2D{

    public:
    std::string get_name() const;

    float compute_area() const;

    Circle* create() const;

    Circle* clone() const;

    Circle(Point2D center, float radius);

    ~Circle();
};

#endif