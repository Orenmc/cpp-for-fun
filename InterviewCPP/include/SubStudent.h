/*
 * SubStudent.h
 *
 *  Created on: Jan 12, 2020
 *      Author: oren
 */

#ifndef SUBSTUDENT_H_
#define SUBSTUDENT_H_

#include <Student.h>
#include <iostream>

class SubStudent: public Student {
public:
	SubStudent();
	~SubStudent();
	SubStudent(const char* name, const char* pos);
	SubStudent(const SubStudent& ss);

	SubStudent& operator =(const SubStudent& ss);
	friend ostream& operator <<(ostream& out, const SubStudent& ss);
private:
	char* position;
};

#endif /* SUBSTUDENT_H_ */
