// Jason Chiarulli
// Assignment 1

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	float integer1, integer2, avg;	
	
	cout << "Enter two integers " << endl;		
	cin >> integer1 >> integer2;

	avg = (integer1 + integer2)/2;

	cout << "The average is " << avg << endl;

	return 0;
}
