// Roll a six-sided die 6000 times.
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstdlib> 	// contains function prototype for rand

int main()
{
	int frequency1 = 0, frequency2 = 0, frequency3 = 0, frequency4 = 0, frequency5 = 0,
	    frequency6 = 0;

	int face; // represents one roll of the die

	// loop 6000 times and summarize results
	for(int roll = 1; roll <= 6000; roll++)
	{
		face = 1 + rand() % 6; 	// random number from 1 to 6

		// determine face value and increment appropriate counter
		switch(face)
		{
			case 1:		// rolled 1
				++frequency1;
			break;

			case 2: 	// rolled 2
				++frequency2;
			break;

			case 3: 	// rolled 3
				++frequency3;
			break;

			case 4: 	// rolled 4
				++frequency4;
			break;

			case 5: 	// rolled 5
				++frequency5;
			break;

			case 6: 	// rolled 6
				++frequency6;
			break;

			default: 	// invalid value
				cout << "Program should never get here!";
		} // end switch
	} // end for

	// display results in tabular format
	cout << "Face" << setw(13) << "Frequency"
	     << "\n 1" << setw(13) << frequency1
	     << "\n 2" << setw(13) << frequency2
	     << "\n 3" << setw(13) << frequency3
	     << "\n 4" << setw(13) << frequency4
	     << "\n 5" << setw(13) << frequency5
	     << "\n 6" << setw(13) << frequency6 << endl;

	return 0; // indicates successful termination
} // end main
