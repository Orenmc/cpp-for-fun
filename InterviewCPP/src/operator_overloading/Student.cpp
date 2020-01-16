/*
 * Student.cpp
 *
 *  this example for inheritance, using copy constructor,
 *  and assignment! (by operator overloading)
 *  notice:
 *  for assignment you must be aware for 2 things:
 *  1. check if you assign yourself!
 *  2. don't forget to use the Base assignment!
 *  by using (Base&)(*this) = (&Son) son;
 *  Created on: Jan 9, 2020
 *      Author: oren
 */

#include "Student.h"
#include <iostream>

using namespace std;


Student::Student() {
	name = new char[8];
	strcpy(name, "Unknown");
	cout << "Default constructor" << endl;
}

Student::Student(const char *n) {
	name = new char[strlen(n) +1];
	strcpy(name, n);
	cout << "constructor" << endl;
}

Student::Student(const Student &s) {
	name = new char[strlen(s.name) + 1];
	strcpy(name, s.name);
	cout << "Copy constructor" << endl;
}

Student::~Student() {
	cout << "deleting Student:" << endl;
	delete[] name;
}

Student& Student::operator =(const Student &s) {
	if (this != &s) {
		delete[] this->name;	// this name already allocate memory - must free before assignment
		name = new char[strlen(s.name) + 1];
		strcpy(name, s.name);
		cout << "Assignment" << endl;
	}
	return *this;

}
ostream& operator <<(ostream& out, const Student& s){
	out << s.name;
	return out;
}

char* Student::getName() const {
	return name;
}

void Student::setName(char *name) {
	this->name = name;
}
