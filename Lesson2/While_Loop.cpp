#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int product = 2;
	int count = 0;

	while(product <= 1000)
	{	product = 2 * product;
		cout << product << endl;
		count++;
	}

	cout << endl << product << endl << "Number of loops " << count << endl;

	return 0;
}
