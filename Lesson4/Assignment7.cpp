// Jason Chiarulli
//
// RUID: 182001459
//
// Assignment 7
//
// 2/14/18
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int arraySum(int sum[]);

int main()
{
	int size;
	
	cout << "Enter the size of the integer array ";
	cin >> size;

	int sum_Array[size] = {1, 2, 3};
	cout << arraySum(sum_Array) << endl;

	for(int i = 0; i < size; i++)
		cout << sum_Array(i) << endl;

	return 0;
}

int arraySum(int sum[])
{
	int sum1 = 0;

	for(int i = 0; i < 3; i++)
	{
		sum1 = sum1 + sum[i]*2;	
	}

	return sum1;
}
