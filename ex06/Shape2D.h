//Fubuki Sato s1270052
#ifndef Shape_2D_H
#define Shape_2D_H

#include <string>

class Shape2D{
    public:
    virtual std::string get_name() const = 0;
    virtual float compute_area() const = 0;
    virtual Shape2D* create() const = 0;
    virtual Shape2D* clone() const = 0;
    virtual ~Shape2D() = 0;
};

#endif