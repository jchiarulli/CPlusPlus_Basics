// Randomizing die-rolling program.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;
    
// contains prototypes for functions srand and rand
#include <cstdlib>
   
// main function begins program execution
int main()
{
	unsigned seed;    
	
	cout << "Enter seed: ";
	cin >> seed;
	srand(seed);  // seed random number generator

	// loop 10 times
	for (int counter = 1; counter <= 10; counter++) 
	{
        	// pick random number from 1 to 6 and output it
		cout << setw(10) << (1 + rand() % 6);
    
		// if counter divisible by 5, begin new line of output
		if (counter % 5 == 0)
		{
			cout << endl;
		} // end for 
	}

	return 0;  // indicates successful termination  
} // end main
