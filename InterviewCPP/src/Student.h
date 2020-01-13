/*
 * Student.h
 *
 *  Created on: Jan 9, 2020
 *      Author: oren
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
using namespace std;

class Student {
public:
	Student(int id, const string& name, double avg);
//	Student(const Student& oldStudent);
//	~Student();
	double getAvg() const;
	void setAvg(double avg);
	int getId() const;
	void setId(int id);
	const string& getName() const;
	void setName(const string &name);
	int getP() const;
	void setP(int p);
	void print() const;

private:
	int id;
	string name;
	double avg;
};

#endif /* STUDENT_H_ */
