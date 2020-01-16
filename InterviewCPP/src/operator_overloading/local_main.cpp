#include <iostream>
#include <Fraction.h>
#include <SubStudent.h>
using namespace std;

int local_main_operator_overloading() {

	/**
	 * operator overloading!
	 */
	// constructor
	Fraction f1(20, 100);
	Fraction f2(8, 10);

//	cout << f1 << endl;
//	cout << f2 << endl;
//
//	// * f1.*f2, f1 f2 should be not changed
//	cout << f1 << endl;
//	cout << f2 << endl;
//
//	// * f1.* int, f1 f2 should be not changed
//	cout << f1 * 5 << endl;
//	cout << f1 << endl;
//	cout << f2 << endl;
//
//	// * int * f1, f1 f2 should be not changed
//	cout << 5 * f1 << endl;
//	cout << f1 << endl;
//	cout << f2 << endl;

// bools
//
//	if (f1 <= f2)
//		cout << "f1 < f2" << endl;
//
//	if (f1 > f2)
//		cout << "f1 < f2" << endl;

// * f1 += f2
//	f1 += f2;
//	cout << f1 << endl;

// Undefined?
	Fraction f3 = f2;

	cout << f3 << endl;

	Fraction f4 = f1 * f2;
	cout << f4 << endl;

//	if (f1 > f2)
//		cout << "f1 > f2" << endl;

	/**
	 * assignment and inheritance
	 */
	//	SubStudent s1("oren","teaching");		//default constructor!
	//	SubStudent s2 = s1;		// cpy constructor
	//
	//	SubStudent s3;			//default constructor!
	//	s3 = s1;				//assignment!
	SubStudent s4("oren", "test");		// todo: how will it copy??
	cout << s4 << endl;
	SubStudent s5;
	cout << s5 << endl;
	s5 = s4;
	cout << s5 << endl;

	cout << "end" << endl;
	return 0;

}
