/*
 * Circle.cpp
 *
 *  Created on: Jan 12, 2020
 *      Author: oren
 */

#include <Circle.h>

Circle::Circle(const string &name, const Point &location, float radius):
	Shape(name, location), radius(radius){
}

void Circle::draw() const {
	cout << "Drawing a circle..." << endl;
}
