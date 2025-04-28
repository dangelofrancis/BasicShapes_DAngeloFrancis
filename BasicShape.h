#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>
using namespace std;

class BasicShape {
private:
	double area;
	string name;

public:
	double getArea() const;
	string getName() const;

	void setArea(double a);
	void setName(const string& n);

	virtual void calcArea() = 0;
};

#endif