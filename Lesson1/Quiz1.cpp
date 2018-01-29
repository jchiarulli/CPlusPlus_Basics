#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int j = 5;

	cout << j + 1 << endl;
	cout << j++ << endl;
	cout << ++j << endl;
	
	cout << (j = 1) + j << endl;
	cout << (j == 1) + j << endl << endl;

	j = 5;

	cout << j/2 << endl;
	cout << j/2.0 << endl;
	cout << (j%=10) << endl;

	return 0;

}
