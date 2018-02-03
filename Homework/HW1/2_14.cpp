// Exercise 2.14
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	// The following statements can be used to represent the algebraic equation 
	// y = ax^3 + 7:
	// a) y = a * x * x * x + 7
	// d) y = (a * x) * x * x + 7
	// e) y = a * ( x * x * x ) + 7 
	// The remaining statements do not represent y = ax^3 + 7
	// This can be seen when running the program

	int y, a = 2, x = 3; // Here: y = ax^3 + 7 = 2 * 3^3 + 7 = 61

	// a)
	y = a * x * x * x + 7;
	cout << "a) " << y << endl;

	// b)
	y = a * x * x * ( x + 7 );
	cout << "b) " << y << endl;

	// c)
	y = ( a * x ) * x * ( x + 7 );
	cout << "c) " << y << endl;

	// d)
	y = (a * x) * x * x + 7;
	cout << "d) " << y << endl;

	// e)
	y = a * ( x * x * x ) + 7;
	cout << "e) " << y << endl;

	// f)
	y = a * x * ( x * x + 7 );
	cout << "f) " << y << endl;
			
	return 0;
}
