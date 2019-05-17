// Histogram printing program.
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
	const int arraySize = 10;
	int n[arraySize] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};

	cout << "Element" << setw(13) << "Value"
	     << setw(17) << "Histogram" << endl;

	// for each element of array n, output a bar in histogram
	for(int i = 0; i < arraySize; i++)
	{
		cout << setw(7) << i << setw(13)
		     << n[i] << setw(9);

		for(int j = 0; j < n[i]; j++)	// print one bar
			cout << '*';

		cout << endl;	// start next line output
	
	} // end outer for structure
	
	return 0;	// indicates successful termination

} // end main
