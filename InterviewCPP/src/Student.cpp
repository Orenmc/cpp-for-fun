/*
 * Student.cpp
 *
 *  Created on: Jan 9, 2020
 *      Author: oren
 */

#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(int id, const string &name, double avg) :
		id(id), name(name), avg(avg) {
}


double Student::getAvg() const {
	return avg;
}

void Student::setAvg(double avg) {
	this->avg = avg;
}

int Student::getId() const {
	return id;
}

void Student::setId(int id) {
	this->id = id;
}

const string& Student::getName() const {
	return name;
}

void Student::setName(const string &name) {
	this->name = name;
}


void Student::print() const {
	cout << this->name << ' ' << this->id << ' ' << this->avg << endl;
}
