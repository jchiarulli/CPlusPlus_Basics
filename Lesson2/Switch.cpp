#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x;

	cout << "Enter an integer " << endl;
	cin >> x;

	switch(x%6)
	{
		case 0:
			cout << "The number is a multiple of 6" << endl;
		break;

		case 3:
			cout << "The number is a multiple of 3" << endl;
		break;

		case 2:
			cout << "The number is a multiple of 2" << endl;
		break;

		case 4:
			cout << "The number is a multiple of 2" << endl;
		break;

		default:
			cout << "The number is not a multiple of 6, 3, or 2" << endl << endl;
	}
	
	char let_grd;

	cout << "Enter your grade" << endl;
	cin >> let_grd;

	switch(let_grd)
	{
		case 'A':
			cout << "Congragulations!" << endl;
		break;

		case 'B':
			cout << "Good job!" << endl;
		break;

		case 'C':
			cout << "ok, but you can do better!" << endl;
		break;

		case 'D':
			cout << "Better luck in PM11" << endl;
		break;

		case 'F':
			cout << "Have fun in summer school" << endl;
		break;

		default:
			cout << "You have entered an invalid grade." << endl;
			
	}

	cout << "Enter your grade" << endl;
	cin >> let_grd;

	switch(let_grd)
	{
		case 'A':
		case 'B':
			cout << "Good Work" << endl;
		break;

		case 'C':
			cout << "ok!" << endl;
		break;

		case 'D':
		case 'F':
			cout << "Have fun in summer school!" << endl;
		break;

		default:
			cout << "You have enetered an invalid grade." << endl;
	}

	cout << "Enter your grade" << endl;
	cin >> let_grd;

	switch(let_grd)
	{
		case 'A':
		case 'a':
		case 'B':
		case 'b':
			cout << "Good Work" << endl;
		break;

		case 'C':
		case 'c':
			cout << "ok!" << endl;
		break;

		case 'D':
		case 'd':
		case 'F':
		case 'f':
			cout << "Have fun in summer school!" << endl;
		break;

		default:
			cout << "You have enetered an invalid grade." << endl;
	}


	return 0;	
}
