/*
 * Triangle.h
 *
 *  Created on: Jan 13, 2020
 *      Author: oren
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include <Shape.h>

class Triangle: public Shape {
public:
	Triangle(const string& name, const Point& loc, float x, float y, float z);
	virtual ~Triangle();
	virtual void draw() const override;

private:
	float x;
	float y;
	float z;
};

#endif /* TRIANGLE_H_ */
