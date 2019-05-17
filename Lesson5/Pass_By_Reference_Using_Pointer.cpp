// Cube a variable using pass-by-reference
// with a pointer argument
#include <iostream>

using std::cout;
using std::endl;

void cubeByReference(int *);	// prototype

int main()
{
	int number = 5;

	cout << "The original value of number is " << number;

	// pass address of number to cubeByReference
	cubeByReference(&number);

	cout << "\nThe new value of number is " << number << endl;
	
	return 0; // indicates successful termination

} // end main

// calculate cube of *nPtr; modifies variable number in main
void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;	// cube *nPtr

} // end function cubeByReference
