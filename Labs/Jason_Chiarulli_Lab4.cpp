// Programming Methodoligies Lab (14:332:254)
//
// Laboratory 4
//
// Jason Chiarulli
//
// Section: 03
//
// 2/12/18
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int even(int);

int main()
{
	int integer;

	for(int i = 1; i <= 3; i++)
	{
		cout << "Enter an integer: ";
		cin >> integer;

		if(even(integer) == 1)
			cout << integer << " is an even integer" << endl << endl;
		else
			cout << integer << " is an odd integer" << endl << endl;
	}

	cout << endl;

	return 0;
}

int even(int check_even)
{
	if(check_even % 2 == 0)
		return 1;
	else
		return 0;
}

