/*
 * Student.h
 *
 *  Created on: Jan 9, 2020
 *      Author: oren
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <cstring>
#include <iostream>

using namespace std;

class Student {
public:
	Student();
	Student(const char* n);
	Student(const Student& s);
	virtual ~Student();

	Student& operator =(const Student& s);
	friend ostream& operator <<(ostream& out, const Student& s);
	char* getName() const;
	void setName(char *name);

private:
	char* name;
};

#endif /* STUDENT_H_ */
