// Exercise 2.6
#include <iostream>

using std::cout;

int main()
{
	int c;

	// a)
	// if (c < 7);
	// 	cout << "c is less than 7\n";
	// 
	// The error in (a) is the use of a semicolon at the end of the condition in the if
	// statement.
	//
	// Correction: Remove the semicolon at the end of the condition in the if statement.
	
	if(c < 7)
		cout << "c is less than 7\n";

	// b)
	// if(c => 7)
	// 	cout "c is equal to or greater than 7\n";
	// The error in (b) is the use of => as a relational operator.
	//
	// Correction: Changing => to the relatioal operator >= also the convention is to say
	// "greater than or equal" to not "equal to or greater than" 
	 
	if(c >= 7)
		cout << "c is greater than or equal to 7\n";

	return 0;
}
