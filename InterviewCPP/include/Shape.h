/*
 * Shape.h
 *
 *  Created on: Jan 12, 2020
 *      Author: oren
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
#include <Point.h>
#include <iostream>
#include <SubStudent.h>

using namespace std;

class Shape {
public:
	Shape(const string &name, const Point &location);
	virtual ~Shape();
	virtual void draw() const =0;
	const Point& getLocation() const;
	const string& getName() const;

protected:
	string name;
	Point location;
	/* Note for myself: when creating this object, I must use constructor for Point,
	 * which? is defined by the constructor!, can use any of them - but the default is Point();
	 */
};

#endif /* SHAPE_H_ */
