/*
  This file contains all methods for Shape, Circle and Rectangle
*/
#include <iostream>
#include <iomanip>
#include "shapes.h"
using namespace std;

// Shape - contructors and getter/setter
Shape::Shape() {}
Shape::Shape(string N, string C) {
	name = N;
	color = C;
}

string Shape::getName() { return name; }
void Shape::setName(string N) { name = N; }

string Shape::getColor() { return color; }
void Shape::setColor(string C) { color = C; }

void Shape::display() {
	cout << "This shape is named " << name << " with "
		<< color << " color." << endl << endl;
}

// Circle - contructors and getter/setter
Circle::Circle() {}
Circle::Circle(string N, string C, int R)
{
	name = N;
	color = C;
	radius = R;
}
int Circle::getRadius() { return radius; }
void Circle::setRadius(int R) { radius = R; }

// display() to override the one in Shape
void Circle::display() {
	cout << "This Circle is named " << name
		<< " with " << color << " color,\n"
		<< "and radius = " << radius << endl << endl;
}

// Rectangle - contructors and getter/setter
Rectangle::Rectangle() {}
Rectangle::Rectangle(string rName, string rColor, int rWidth, int rHeight)
	: Shape::Shape(rName, rColor)
{
	width = rWidth;
	height = rHeight;
}
int Rectangle::getWidth() { return width; }
void Rectangle::setWidth(int W) { width = W; }
int Rectangle::getHeight() { return height; }
void Rectangle::setHeight(int H) { height = H; }

// display() to override the one in Shape
void Rectangle::display() {
	Shape::display();
	cout << "It is a rectangle with width = " << width
		<< ", and height = " << height << endl << endl;
}