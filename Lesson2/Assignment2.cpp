// Jason Chiarulli
// Assignment 2

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::cerr;

int main()
{	
	char x;
	cout << "Enter your letter grade ";
	cin >> x;

	/*if(x != 'A' && x != 'B' && x != 'C')
		cerr << "Please enter either A, B, or C" << endl;*/		

	switch(x)
	{
		case 'A':
			cout << "Your grade is within 94-100%" << endl;
		break;

		case 'B':
			cout << "Your grade is within 84-86%" << endl;
		break;

		case 'C':
			cout << "Your grade is within 74-76%" << endl;
		break;
		
		default:
			cerr << "Please enter either A, B, or C" << endl;	
	}

	return 0;
}
