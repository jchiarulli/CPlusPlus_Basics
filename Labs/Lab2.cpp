// Programming Methodoligies Lab (14:332:254)
//
// Laboratory 2
//
// Jason Chiarulli
//
// Section: 03
//
// 1/29/18
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int year, month;

	cout << "Please enter a year" << endl;
	cin >> year;

	if((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 == 0))
	{
		cout << "The number of days in " << year << " is 366." << endl << endl;
		cout << "Please enter a month" << endl;
		cin >> month;

		if(month == 1)
			cout << "The number of days in 1 is 31." << endl;
		else if(month == 2)
			cout << "The number of days in 2 is 29." << endl;
		else if(month == 3)
			cout << "The number of days in 3 is 31." << endl;
		else if(month == 4)
			cout << "The number of days in 4 is 30." << endl;
		else if(month == 5)
			cout << "The number of days in 5 is 31." << endl;
		else if(month == 6)
			cout << "The number of days in 6 is 30." << endl;
		else if(month == 7)
			cout << "The number of days in 7 is 31." << endl;
		else if(month == 8)
			cout << "The number of days in 8 is 31." << endl;
		else if(month == 9)
			cout << "The number of days in 9 is 30." << endl;
		else if(month == 10)
			cout << "The number of days in 10 is 31." << endl;
		else if(month == 11)
			cout << "The number of days in 11 is 30." << endl;
		else if(month == 12)
			cout << "The number of days in 12 is 31." << endl;
		else
			cout << "Invalid input" << endl;
		
		cout << endl << "Using the switch." << endl << endl;

		switch(month)
		{
			case 1:
				cout << "The number of days in 1 is 31." << endl;
			break;

			case 2:
				cout << "The number of days in 2 is 29." << endl;
			break;

			case 3:
				cout << "The number of days in 3 is 31." << endl;
			break;

			case 4:
				cout << "The number of days in 4 is 30." << endl;
			break;

			case 5:
				cout << "The number of days in 5 is 31." << endl;
			break;
		
			case 6:
				cout << "The number of days in 6 is 30." << endl;
			break;

			case 7:
				cout << "The number of days in 7 is 31." << endl;
			break;

			case 8:
				cout << "The number of days in 8 is 31." << endl;
			break;

			case 9:
				cout << "The number of days in 9 is 30." << endl;
			break;

			case 10:
				cout << "The number of days in 10 is 31." << endl;
			break;

			case 11:
				cout << "The number of days in 11 is 30." << endl;
			break;

			case 12:
				cout << "The number of days in 12 is 31." << endl;
			break;

			default:
				cout << "Invalid input" << endl;
			break;
		}	
	}
	else
	{	cout << "The number of days in " << year << " is 365." << endl << endl;
		cout << "Please enter a month" << endl;
		cin >> month;

		if(month == 1)
			cout << "The number of days in 1 is 31." << endl;
		else if(month == 2)
			cout << "The number of days in 2 is 28." << endl;
		else if(month == 3)
			cout << "The number of days in 3 is 31." << endl;
		else if(month == 4)
			cout << "The number of days in 4 is 30." << endl;
		else if(month == 5)
			cout << "The number of days in 5 is 31." << endl;
		else if(month == 6)
			cout << "The number of days in 6 is 30." << endl;
		else if(month == 7)
			cout << "The number of days in 7 is 31." << endl;
		else if(month == 8)
			cout << "The number of days in 8 is 31." << endl;
		else if(month == 9)
			cout << "The number of days in 9 is 30." << endl;
		else if(month == 10)
			cout << "The number of days in 10 is 31." << endl;
		else if(month == 11)
			cout << "The number of days in 11 is 30." << endl;
		else if(month == 12)
			cout << "The number of days in 12 is 31." << endl;
		else
			cout << "Invlaid input" << endl;

		cout << endl << "Using the switch" << endl << endl;	

		switch(month)
		{
			case 1:
				cout << "The number of days in 1 is 31." << endl;
			break;

			case 2:
				cout << "The number of days in 2 is 28." << endl;
			break;

			case 3:
				cout << "The number of days in 3 is 31." << endl;
			break;

			case 4:
				cout << "The number of days in 4 is 30." << endl;
			break;

			case 5:
				cout << "The number of days in 5 is 31." << endl;
			break;
		
			case 6:
				cout << "The number of days in 6 is 30." << endl;
			break;

			case 7:
				cout << "The number of days in 7 is 31." << endl;
			break;

			case 8:
				cout << "The number of days in 8 is 31." << endl;
			break;

			case 9:
				cout << "The number of days in 9 is 30." << endl;
			break;

			case 10:
				cout << "The number of days in 10 is 31." << endl;
			break;

			case 11:
				cout << "The number of days in 11 is 30." << endl;
			break;

			case 12:
				cout << "The number of days in 12 is 31." << endl;
			break;

			default:
				cout << "Invalid input" << endl;
			break;
		}	
	}	

	return 0;
}
