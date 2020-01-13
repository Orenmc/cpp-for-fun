/*
 * main.cpp
 *
 *  Created on: Jan 9, 2020
 *      Author: oren
 */

#include <iostream>
#include <Shape.h>
#include <Circle.h>
#include <Rectangle.h>
#include <Triangle.h>

using namespace std;

int main() {

	Shape *shapes[5];

	shapes[0] = new Triangle("Tri1", Point(-1, -1), 12, 1.1, 15.2);
	shapes[1] = new Rectangle("Rect1", Point(1, 2), 5, 12);
	shapes[2] = new Circle("Circle1", Point(2, 2), 3.5);
	shapes[3] = new Rectangle("Rect2", Point(0, 0), 4, 2);
	shapes[4] = new Circle("Circle2", Point(4, 4), 2.222);

	for (int i = 0; i < 5; i++) {
		shapes[i]->draw();
	}

	for (int i = 0; i < 5; i++) {
		delete shapes[i];
	}
	return 0;

}

