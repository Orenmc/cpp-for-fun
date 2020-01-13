/*
 * Rectangle.cpp
 *
 *  Created on: Jan 12, 2020
 *      Author: oren
 */

#include <Rectangle.h>


Rectangle::Rectangle(const string &name, const Point &location, int width,
		int height): Shape(name, location), width(width), height(height) {
}

void Rectangle::draw() const {
	cout << "Drawing a rectangle..." << endl;
}
