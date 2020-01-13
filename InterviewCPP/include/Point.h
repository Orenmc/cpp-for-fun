/*
 * Point.h
 *
 *  Created on: Jan 12, 2020
 *      Author: oren
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
public:
	Point(int a, int b);
	Point(const Point &oldP);
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);
	void mult2();

private:
	int x;
	int y;

};

#endif /* POINT_H_ */
