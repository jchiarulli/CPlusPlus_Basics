#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a[10][6];
	int *aPtr;

	aPtr = &a[10][6];

	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			aPtr = &a[i][j];
			cout << aPtr << endl;
		}
	}
	
	return 0;
}
