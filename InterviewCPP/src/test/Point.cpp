/*
 * Point.cpp
 *
 *  Created on: Jan 12, 2020
 *      Author: oren
 */

#include <Point.h>
#include <iostream>

int Point::getX() const {
	return x;
}

void Point::setX(int x) {
	this->x = x;
}

int Point::getY() const {
	return y;
}

Point::Point(int a, int b) {
	this->x = a;
	this->y = b;
}

Point::Point(const Point &oldP) {
	this->x = oldP.x;
	this->y = oldP.y;

}

void Point::setY(int y) {
	this->y = y;
}

void Point::mult2() {
	this->x = this->getX() * 2;
	this->y = this->getY() * 2;
}
