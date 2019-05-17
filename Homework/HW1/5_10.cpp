// Exercise 5.10
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
	int factorial;

	cout << "n" << setw(13) << "n!" << endl;

	for(int i = 1; i <= 5; i++)
	{
		int k = 0;
		factorial = 1;

		for(int j = 1; j <= i; j++)
		{
			factorial = factorial * (i - k);
			k++;
		}	
		cout << i << setw(12) << factorial << endl;
	}

	cout << endl << "The size of the data type would have to be large enough to " << endl
	     << "calculate the factorial of 20. For example, the factorial of 20 " << endl
	     << "exceeds the range of the int data type, so a double data type " << endl 
	     << "could be used since it has a large enough range to store the value." << endl; 
	return 0;
}
