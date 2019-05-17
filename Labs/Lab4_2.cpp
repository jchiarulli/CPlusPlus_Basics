// Programming Methodoligies Lab (14:332:254)
//
// Laboratory 4
//
// Jason Chiarulli
//
// Section: 03
//
// 2/12/18
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

int reverseDigits(int);

int main()
{
	int number;

	cout << "Enter a number between 1 and 9999: ";
	cin >> number;

	cout << "The number with its digits reversed is: ";

	cout << reverseDigits(number) << endl;

	return 0;
}

int reverseDigits(int n)
{
	int reverse = 0;
	int divisor = 1000;
	int multiplier = 1;

	while(n > 9)
	{
		if(n >= divisor)
		{
			reverse +=n/divisor*multiplier;
			n %= divisor;
			divisor = divisor/10;
			multiplier = multiplier * 10;
		}
		
		else
			divisor /= 10;
	}

	reverse += n * multiplier;
	return reverse;
}
