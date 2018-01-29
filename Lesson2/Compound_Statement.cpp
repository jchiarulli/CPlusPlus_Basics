#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int grade;
	
	cout << "Enter your grade ";
	cin >> grade;

	if(grade >= 60)
		cout << "Passed. \n";

	else {
		cout << "Failed. \n";
		cout << "You must take this course again.\n";
	
	}
	
	// Without the braces around the else statement only the first line is included in 
	// the else statement (evey other statement will be executed regardless of whether
	// the if statement is true or false)

	/*if(grade >= 60)
		cout << "Passed. \n";

	else 
		cout << "Failed. \n";
		cout << "You must take this course again.\n";
	*/

	return 0;
}
