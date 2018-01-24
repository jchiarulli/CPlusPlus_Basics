// Programming Methodologies Lab (14:332:254)
// 
// Laboratory A - Introduction to Microsoft Visual Studio C++ 2003
//
// Jason Chiarulli
//
// Section: 03
//
// 1/22/18
//

#include <iostream> // allows program to perform input and output

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
	int number1; // first integer to be read from user
	int number2; // second integer to be read from user
	int number3; // third integer to read from user
	int number4;
	int smallest; // smallest integer read from user
	int largest; // largest integer read from user

	cout << "Input four  different integers: "; // prompt
	cin >> number1 >> number2 >> number3 >> number4; // reads in three integers

	largest = number1; // assume first integer is the largest

	if(number2 > largest)
		largest = number2;
	
	if(number3 > largest)
		largest = number3;

	if(number4 > largest)
		largest = number4;

	smallest = number1;

	if(number2 < smallest)
		smallest = number2;
	
	if (number3 < smallest)
		smallest = number3;

	if(number4 < smallest)
		smallest = number4;

	cout << "Sum is " << number1 + number2 + number3 + number4 << "\nAverage is " << (number1 + number2 + number3 + number4)/4 << "\nProduct is " << number1 * number2 * number3 * number4<< "\nSmallest is " << smallest << "\nLargest is " << largest << endl;

return 0;	

}
