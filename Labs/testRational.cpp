// Programming Methodologies Lab (14:332:254:03)
//
// Lab Instructor: Kazem Cheshmi
//
// Date Performed: 4/09/18 
//
// Date Submitted: 4/09/18
//
// Submitted by: Jason Chiarulli, RUID: 182001459
//

#include <iostream>

using std::cout;

#include "Rational.h"

int main()
{
	// 1. & 2.
	Rational r1(1, 3);
	cout << "r1 = "; 
	r1.print();
	
	Rational r2(3, 8);
	cout << "r2 = ";
	r2.print();

	// 3.
	r1.setNumerator(4);
	r1.setDenominator(5);
	
	cout << "r1 = ";
	r1.print();

	// 4
	Rational r3;
	r3.add(r1, r2);

	// 5
	r3.subtract(r1, r2);

	// 6
	r3.multiply(r1, r2);

	return 0;
}
