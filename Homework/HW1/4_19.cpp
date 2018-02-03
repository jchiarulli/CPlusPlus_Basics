// Exercise 4.19
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int counter = 0, number, largest = 0, second_largest = 0;

	while(counter < 10)
	{
		cout << "Enter the number of units you sold ";
		cin >> number;

		if(number > largest)
		{
			second_largest = largest;
			largest =  number;
		}
		else if(number > second_largest)
		{
			second_largest = number;
		}

		counter++;
	}

	cout << "The runner-up of the sales contest sold " << second_largest << " units." 
	     << endl;

	cout << "The winner of the sales contest sold " << largest << " units." << endl;
		
	return 0;
}
