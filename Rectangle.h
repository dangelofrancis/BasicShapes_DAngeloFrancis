#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w, string n = "Rectangle");
    void calcArea() override;

    double getLength() const;
    double getWidth() const;
};

#endif
