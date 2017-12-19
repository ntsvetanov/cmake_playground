#include <iostream>

#include "triangle.h"
#include "rectangle.h"

using namespace std;

int main()
{
	cout << "----------------------------------------------------\n\n"<< endl;
	Triangle triangle(3, 4, 5);
	cout << "check triangle perimeter: " << triangle.getPerimeter() << endl;
	cout << "check triangle area: " << triangle.getArea() << endl;
	Rectangle rect(3, 4);
	cout << "check rectangle perimeter: " << rect.getPerimeter() << endl;
	cout << "check rectangle area: " << rect.getArea() << endl;
	cout << "----------------------------------------------------\n\n"<< endl;
	
	Polygon* poly = new Rectangle(5,5);
	cout << "check poly as rect perimeter: " << poly->getPerimeter() << endl;
	cout << "check poly as rect area: " << poly->getArea() << endl;
	poly = &triangle;
	cout << "check poly as triangle perimeter: " << poly->getPerimeter() << endl;
	cout << "check poly as triangle area: " << poly->getArea() << endl;
	cout << "----------------------------------------------------\n\n"<< endl;
	
	//delete poly;
	
	return 0;
}