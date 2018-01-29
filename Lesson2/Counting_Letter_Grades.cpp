#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
//      cout << "The character (" << 'a' << ") has a value " << static_cast<int>('a') << endl;
//	cout << "The character (a) has a value " << static_cast<int>('a') << endl;
	
	int grade, aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;

	cout << "Enter the letter grades." << endl
	     << "Enter the EOF character to end input." << endl;

	while((grade = cin.get()) != EOF)
	{
		switch(grade)
		{
			case 'A':
			case 'a':
				++aCount;
				break;

			case 'B':
			case 'b':
				++bCount;
				break;
			
			case 'C':
			case 'c':
				++cCount;
				break;

			case 'D':
			case 'd':
				++dCount;
				break;
			
			case 'F':
			case 'f':
				++fCount;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;

			default:
				cout << "Incorrect letter grade entered."
				     << " Enter a new grade." << endl;
				break;
		}
	}

	cout << "\n\nTotals for each letter grade are."
	     << "\nA: " << aCount
	     << "\nB: " << bCount
             << "\nC: " << cCount
             << "\nD: " << dCount
             << "\nF: " << fCount
             << endl;
	
	return 0;
}
