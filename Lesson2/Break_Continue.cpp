#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int x;

	for(x = 1; x <= 10; x++)
	{
		if(x == 5)
			break;

		cout << x << " ";
	}

	cout << "\nBrake out of loop when x became " << x << endl << endl;

	for(int y = 1; y <= 10; y++)
	{
		if(y == 5)
			continue;

		cout << y << " ";
	}

	cout << "\nUsed continue to skip printing the value 5" << endl;	
	
	return 0;
}
