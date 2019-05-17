// Jason Chiarulli
//
// RUID: 182001459
//
// Assignment 6
//
// 2/9/18
//
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n1, n2, n3, n4, n5, max;	
	
	cout << "Enter five integers: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;

	const int arraySize = 5;
	int s[arraySize] = {n1, n2, n3, n4, n5};

	for(int i = 0; i < arraySize; i++)
	{
		max = s[n1];
		if(s[i] > max)
		{
			max = s[i];
		}
	}	

	cout << "The maximum number is " << max << endl;

	return 0;
}
