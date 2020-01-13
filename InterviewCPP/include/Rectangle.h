/*
 * Rectangle.h
 *
 *  Created on: Jan 12, 2020
 *      Author: oren
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <Shape.h>

class Rectangle: public Shape {
public:
	Rectangle(const string &name, const Point &location, int width, int height);
	virtual void draw() const override;
private:
	int width;
	int height;
};

#endif /* RECTANGLE_H_ */
