/*
 * Fraction.h
 *
 *  Created on: Jan 14, 2020
 *      Author: oren
 */

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>
using namespace std;

class Fraction {
public:
	Fraction(int n, int d = 1);
	Fraction(const Fraction &oldFrac);
	Fraction operator +(const Fraction& frac) const;
	Fraction operator *(const Fraction& frac) const;
	Fraction operator *(const int x) const;
	Fraction& operator +=(const Fraction& frac);
	Fraction& operator =(const Fraction& frac);

	bool operator ==(const Fraction& frac) const;
	bool operator !=(const Fraction& frac) const;
	bool operator <=(const Fraction& frac) const;
	//operator double() const;
	friend ostream& operator <<(ostream &out, const Fraction& frac);


private:
	int num;
	int den;
	int gcd(int a, int b);
	void simplify();
};
Fraction operator *(int x, const Fraction& frac);
#endif /* FRACTION_H_ */
