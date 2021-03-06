// Exercise 5.10
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
	int factorial5 = 1, factorial4 = 1, factorial3 = 1, factorial2 = 1, factorial1;

	for(int i = 0; i < 4; i++)
	{
		factorial5 = factorial5*(5 - i);
		factorial4 = factorial4*(4 - i);
		if(i < 3)
			factorial3 = factorial3*(3 - i);
		if(i < 2)
			factorial2 = factorial2*(2 - i);
		if(i == 1)
			factorial1 = i;		
	}

	cout << "n" << setw(13) << "n!" << endl
             << "1" << setw(13) << factorial1 << endl 
	     << "2" << setw(13) << factorial2 << endl  
	     << "3" << setw(13) << factorial3 << endl 
	     << "4" << setw(13) << factorial4 << endl
	     << "5" << setw(13) << factorial5 << endl << endl;

	cout << "The size of the data type would have to be large enough to " << endl
	     << "calculate the factorial of 20. For example the factorial of 20 " << endl
	     << "exceeds the range of the int data type, so a double data type " << endl 
	     << "could be used since it has a large enough range to store the value." << endl; 

	return 0;
}
