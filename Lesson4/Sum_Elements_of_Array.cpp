// Compute the sum of the elements of the array.
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const int arraySize = 10;

	int a[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	int total = 0;

	// sum contents of array a
	for(int i = 0; i < arraySize; i++)
		total += a[i];

	cout << "Total of array element values is " << total << endl;
	
	return 0;	// indicates successful termination

} // end main
