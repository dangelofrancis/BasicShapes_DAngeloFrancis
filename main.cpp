#include <iostream>
#include <string>
#include "BasicShape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

int main() {
	const int SIZE = 5;
	BasicShape* shapes[SIZE];

	//filling the array w pointers
	shapes[0] = new Rectangle(5, 10, "Rectangle 1");
	shapes[1] = new Rectangle(3, 7, "Rectangle 2");
	shapes[2] = new Circle(0, 0, 4, "Circle 1");
	shapes[3] = new Circle(5, 5, 2, "Circle 2");
	shapes[4] = new Square(6, "The Square");

    // Print info
    cout << shapes[0]->getName() << " has an area of " << shapes[0]->getArea() << endl;
    cout << shapes[1]->getName() << " has an area of " << shapes[1]->getArea() << endl;
    cout << shapes[2]->getName() << " has an area of " << shapes[2]->getArea() << endl;
    cout << shapes[3]->getName() << " has an area of " << shapes[3]->getArea() << endl;
    cout << shapes[4]->getName() << " has an area of " << shapes[4]->getArea() << endl;

    // Clean up memory
    delete shapes[0];
    delete shapes[1];
    delete shapes[2];
    delete shapes[3];
    delete shapes[4];

	return 0;
}