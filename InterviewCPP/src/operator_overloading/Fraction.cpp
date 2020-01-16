/*
 * Fraction.cpp
 *
 *  Created on: Jan 14, 2020
 *      Author: oren
 */

#include <Fraction.h>

Fraction::Fraction(int n, int d): num(n), den(d) {
	simplify();
}

Fraction Fraction::operator +(const Fraction &frac) const {
	int sumNum = this->num * frac.den + this->den * frac.num;
	int sunDen = this->den * frac.den;
	Fraction sum(sumNum, sunDen);
	sum.simplify();
	return sum;
}

Fraction Fraction::operator *(const Fraction &frac) const {
	int multNum = this->num * frac.num;
	int multDen = this->den * frac.den;
	Fraction mult(multNum, multDen);
	return mult;
}

Fraction Fraction::operator *(const int x) const {
	Fraction a(x);
	return (*this)*a;
}

Fraction& Fraction::operator +=(const Fraction &frac) {
	this->num =  this->num * frac.den + this->den * frac.num;
	this->den = this->den * frac.den;
	simplify();
	return *this;
}

bool Fraction::operator ==(const Fraction &frac) const {
	return this->num * frac.den == this->den * frac.num;
}

bool Fraction::operator !=(const Fraction &frac) const {
	return !(*this == frac);
}

bool Fraction::operator <=(const Fraction &frac) const {
	return this->num * frac.den <= this->den * frac.num;
}

//Fraction::operator double() const {
//	return (double)this->num/this->den;
//}

int Fraction::gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}

Fraction::Fraction(const Fraction &oldFrac) {
	cout << "cpy" << endl;
	this->num = oldFrac.num;
	this->den = oldFrac.den;
}

Fraction& Fraction::operator =(const Fraction &frac) {
	if (*this != frac){
		// if it is eqal when Ill do f1 = f1 it will be unpredigtible

		cout << "Assignment..." << endl;
	}
	return *this;
}

void Fraction::simplify() {
	int g = gcd(this->num, this->den);
	this->num /= g;
	this->den /= g;
}

Fraction operator *(int x, const Fraction &frac) {
	return frac * x;
}

ostream& operator <<(ostream &out, const Fraction& frac){
	out  << frac.num << "/" << frac.den;
	return out;

}
