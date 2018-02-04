#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int square(int);

int main()
{	
	int integer;
	
	cout << "Enter an integer: ";
	cin >> integer;

	cout << square(integer) << endl;

	return 0;
}

int square(int y)
{
	return y * y;
}
