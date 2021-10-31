#ifndef Shape_2D_H
#include <string>

struct Point2D{
    float x;
    float y;
};

class Shape2D{
    public:
    virtual std::string get_name() const;
    virtual float compute_area() const;
    virtual Shape2D* create() const;
    virtual Shape2D* clone() const;
    virtual ~Shape2D();
};

#endif