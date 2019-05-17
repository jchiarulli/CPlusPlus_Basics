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

#include "gcd.h"

int main()
{
	int a;
	int b;
	
	for(int j = 1; j <= 5; j++)
	{
		cout << "Enter two integers: ";
		cin >> a >> b;

		cout << "The greatest common divisor is of " << a << " and " << b << " is ";
		cout <<	gcd(a, b) << endl;
	}

	return 0;	
}
