#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstdlib>	// contains function prototype for rand

int main()
{
	/*int i;

	i = rand() % 6;		// generates a number between 0 and 5 (scaling)
	cout << i << endl;
	
	i = rand() % 6 + 1;	// "+ 1" makes the range 1 to 6 (shift)
	cout << i << endl;*/

	// loop 20 times
	for(int counter = 1; counter <= 20; counter++)
	{
		// pick random number from 1 to 6 and output it
		cout << setw(10) << (1 + rand() % 6);

		// if counter divisible by 5, begin new line of output
		if(counter % 5 == 0)
			cout << endl;
	} // end for structure

	return 0; // indicates successful termination
} // end main
