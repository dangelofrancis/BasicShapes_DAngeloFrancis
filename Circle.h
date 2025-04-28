#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

class Circle : public BasicShape {
private:
	double xCenter;
	double yCenter;
	double radius;

public:
	Circle(double x, double y, double r, string name = "Circle");
	void calcArea() override;

	double getXCenter() const;
	double getYCenter() const;
	double getRadius() const;
};

#endif