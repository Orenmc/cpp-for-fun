/*
 * Circle.h
 *
 *  Created on: Jan 12, 2020
 *      Author: oren
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <Shape.h>

class Circle: public Shape {
public:
	Circle(const string &name, const Point &location, float radius);
	virtual void draw() const override;

//	void draw() const;

private:
	float radius;
};

#endif /* CIRCLE_H_ */
