// Finding the maximum of three floating-point numbers.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double maximum(double, double, double); // function prototype

int main()
{
	double number1, number2, number3;

	cout << "Enter three floating-point numbers: ";
	cin >> number1 >> number2 >> number3;

	// number1, number2, and number3 are arguments to 
	// the maximum function call
	cout << "Maximum is: "
	     << maximum(number1, number2, number3) << endl;

	return 0; // indicates successful termination
} // end main

// function maximum definition;
// x, y, and z are parameters
double maximum(double x, double y, double z)
{
	double max = x;		// assume x is largest

	if(y > max) 		// if y is larger,
		max = y; 	// assign y to max

	if(z > max) 		// if z is larger,
		max = z;	// assign z to max

	return max; 		// max is largest value
} // end function maximum
