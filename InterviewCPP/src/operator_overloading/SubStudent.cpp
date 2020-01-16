/*
 * SubStudent.cpp
 *
 *  Created on: Jan 12, 2020
 *      Author: oren
 */

#include <SubStudent.h>

SubStudent::SubStudent() {
	position = new char[11];
	strcpy(position, "unknownPos");
	cout << "default constructor" << endl;
}

SubStudent::SubStudent(const char *name, const char *pos): Student(name) {
	position = new char[strlen(pos) + 1];
	strcpy(position, pos);
	cout << "SUB constructor" << endl;
}

SubStudent::SubStudent(const SubStudent &ss): Student(ss) {	//:must do: Student(ss) TODO: which constructor will operate?
	position = new char[strlen(ss.position) + 1];
	strcpy(position, ss.position);
	cout << "SUB COPY constructor" << endl;
}

SubStudent& SubStudent::operator =(const SubStudent &ss) {	// TODO: which constructor will operate?
	if (this != &ss){
		// I want to use the assignment of student also!
		(Student&)(*this) = ss;		// this invoke the assignment of Studen!
		delete[] position;
		position = new char[strlen(ss.position) + 1];
		strcpy(this->position, ss.position);
		cout << "SUB Assignment" << endl;
	}
	return *this;
}

SubStudent::~SubStudent() {
	delete[] position;
	cout << "SUB Delete..." << endl;
}

ostream& operator <<(ostream& out, const SubStudent& ss){
	out << (Student&)(ss) <<" " << ss.position;
	return out;
}
