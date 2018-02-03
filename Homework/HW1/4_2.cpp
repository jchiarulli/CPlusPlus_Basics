// Exercise 4.2
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x = 0;
	
	cout << "x = " << x << endl;

	x = x + 1;
	cout << "x = x + 1 = " << x << endl << endl;

	cout << "x = " << x << endl;
	
	x++;
	cout << "x++ = " << x << endl << endl;

	cout << "x = " << x << endl;
	
	++x;
	cout << "++x = " << x << endl << endl;

	cout << "x = " << x << endl;
	
	x += 1;
	cout << "x += 1 = " << x << endl;
	
	return 0;
}
