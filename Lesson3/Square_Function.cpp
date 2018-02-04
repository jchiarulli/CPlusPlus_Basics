// Creating and using a programmer-defined function.
#include <iostream>

using std::cout;
using std::endl;

int square(int); // function prototype

int main()
{
	// loop 10 times and calculate and output
	// square x each time
	for(int x = 1; x <= 10; x++)
		cout << square(x) << " "; // function call

	cout << endl;

	return 0; // indicates successful termination
} // end main

// square function definition returns square of an integer
int square(int y) // y is a copy of argument to function
{
	return y * y; // returns square of y as an int
} // end function square
