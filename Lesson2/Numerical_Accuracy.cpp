#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x = 17, y = 1;
	
	// x/y == 17;

	cout << (abs(x/y - 17) < 0.000001) << endl;


	return 0;
}
