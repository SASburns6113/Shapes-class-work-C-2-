/*
  Main program to test Shape, Circle and Rectange
*/
#include <iostream>
#include <iomanip>
#include "shapes.h"
using namespace std;

void main() {
	Shape shape1;  // use default constructor
	shape1.display();
	Shape shape2 = Shape("Test", "red");  // other constructor
	shape2.display();

	// Create a rectange
	Rectangle rect1 = Rectangle("Rect1", "green", 10, 20);
	rect1.display();

	// Create a circle
	Circle cir1 = Circle("Cir1", "blue", 5);
	cir1.display();

	system("pause");
}