/*
   This header file provides definition of class Shape (parent)
   Circle (child) and Rectangle (child).
*/
#pragma once  // no need to use if you have ifndef protection
#ifndef SHAPES_H
#define SHAPES_H

#include <string>
using namespace std;

// Parent class with Name and Color
class Shape {
public:
	Shape();
	Shape(std::string N, string C);

	string getName();
	void setName(string);
	string getColor();
	void setColor(string);
	void display();
protected:
	string name;
	string color;
private:
};

// Child class - add Radius and override Display()
class Circle : public Shape {
public:
	Circle();
	Circle(string N, string C, int R);
	int getRadius();
	void setRadius(int);
	void display();
private:
	int radius;
};

// Child class - add Width/Height and override Display()
class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(string rName, string rColor, int rWidth, int rHeight);
	int getWidth();
	void setWidth(int rWidth);
	int getHeight();
	void setHeight(int rHeight);
	void display();
private:
	int width;
	int height;
};

#endif

