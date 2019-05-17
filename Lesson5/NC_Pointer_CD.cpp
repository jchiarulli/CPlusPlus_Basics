// Printing a string one character at a time using 
// a non-constant pointer to constant data.
#include <iostream>

using std::cout;
using std::endl;

void printCharacters(const char *);

int main()
{
	char phrase[] = "print characters of a string";

	cout << "The string is:\n";
	printCharacters(phrase);
	cout << endl;

	return 0;	// indicates successful termination

} // end main

// sPtr cannot modify the character to which it points,
// i.e., sPtr is a "read-only" pointer
void printCharacters(const char *sPtr)
{
	for(; *sPtr != '\0'; *sPtr++)	// no initialization
		cout << *sPtr;

} // end function printCharacters
