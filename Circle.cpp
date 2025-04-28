#include "Circle.h"

Circle::Circle(double x, double y, double r, string n)
	: xCenter(x), yCenter(y), radius(r) {
	setName(n);
	calcArea();
}

void Circle::calcArea() {
	double a = 3.14159 * radius * radius;
	setArea(a);
}

double Circle::getXCenter() const {
	return xCenter;
}

double Circle::getYCenter() const {
	return yCenter;
}

double Circle::getRadius() const {
	return radius;
}