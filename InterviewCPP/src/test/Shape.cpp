/*
 * Shape.cpp
 *
 *  Created on: Jan 12, 2020
 *      Author: oren
 */

#include <Shape.h>

//Shape::Shape() :
//		name(""), location(Point(0, 0)) {
//}

Shape::Shape(const string &name, const Point &loc) :
		name(name), location(loc) {
}


const Point& Shape::getLocation() const {
	return location;
}

const string& Shape::getName() const {
	return name;
}

Shape::~Shape() {
}

