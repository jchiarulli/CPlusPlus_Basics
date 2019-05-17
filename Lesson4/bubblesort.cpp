// Programming Methodologies Lab (14:332:254)
//
// Laboratory 6
//
// Jason Chiarulli
//
// Section: 03
//
// 2/26/18
//


#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
	const int arraySize = 10;
	int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int hold;

	cout << "Data itmes in original order\n";

	for(int i = 0; i < arraySize; i++)
		cout << setw(4) << a[i];

	for(int k = 0; k < arraySize; k++)
	{
		for(int j = 0; j < arraySize - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				hold = a[j + 1];
				a[j + 1] = a[j];
				a[j] = hold;
			}
		}
	}

	cout << "\nData items in ascending order\n";

	for(int k = 0; k < arraySize; k++)
		cout << setw(4) << a[k];
	
	cout << endl;
	
	return 0;
}
