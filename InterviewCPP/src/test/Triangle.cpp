/*
 * Triangle.cpp
 *
 *  Created on: Jan 13, 2020
 *      Author: oren
 */

#include <Triangle.h>

Triangle::Triangle(const string &name, const Point &loc, float x, float y,
		float z): Shape(name, location), x(x), y(y),z(z) {
}

Triangle::~Triangle() {
}

void Triangle::draw() const {
	cout << "Drawing a triangle..." << endl;
}
//void Triangle::draw() const {
//	cout << "Drawing a triangle..." << endl;
//}
