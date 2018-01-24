#include <iostream>

using std::cout;

int main()
{
	int sum;
	sum = 0;

	cout << "\nThe value of sum is initially set to " << sum;
	sum = sum + 96;
	cout << "\nsum is now " << sum;
	sum = sum + 70;
	cout << "\nsum is now " << sum;
	sum = sum + 85;
	cout << "\nsum is now " << sum;
	sum = sum + 60;
	cout << "\nThe final sum is " << sum << "\n";

	return 0;
}
