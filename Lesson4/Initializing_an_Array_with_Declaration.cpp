// Initializing an array with a declaration
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
	// use initializer list to initialize array n
	int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};

	cout << "Element" << setw(13) << "Value" << endl;

	// output contents of array n in tabular format
	for(int i = 0; i < 10; i++)
		cout << setw(7) << i << setw(13) << n[i] << endl;
	
	return 0;	// indicates successful termination
} // end main
