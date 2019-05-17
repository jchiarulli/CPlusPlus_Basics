#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int MAXCHARS = 8;
	char alpharray[MAXCHARS] = {'B', 'J', 'K', 'M', 'S', 'Z'};

	for(int i = 0; i < MAXCHARS; i++)
	{	if(alpharray[i] == '\0')
			alpharray[i] = 'L';

		cout << alpharray[i] << " ";
	}
	
	cout << endl << endl;

	int numofelements = MAXCHARS;

	for(int i = 0; i < numofelements; i++)
		cout << alpharray[i] << endl;

	cout << endl << endl;

	int numtoinsert = 8;
	char alpharray_insert[numtoinsert];

	for(int i = 0; i < numtoinsert; i++)
		cin >> alpharray_insert[i];

	

	/*int arraySize = 3;
	int b[arraySize] = {1, 2, 3};

	for(int i = 0; i < arraySize; i++)
	{
		b[i] = b[i - 1];
		cout << b[i] << " " << endl;
	}*/

	return 0;
}
