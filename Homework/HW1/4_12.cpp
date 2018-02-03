// Exercise 4.12
//
// The program first declares and initializes three unsigned integers: y = 0, x = 1, and
// total = 0.
//
// Next the program executes a while loop while x is less than or equal to ten.
// 
// Each iteration of the while loop assigns y to x * x, outputs the value of y, assigns total
// to the previous total plus the value of y, and lastly the loop increments the value of 
// x by 1.
//
// Once the condition of the while loop is longer satisfied the program will print the value
// of total.
//
// This program prints:
// 1
// 4
// 9
// 16
// 25
// 36
// 49
// 64
// 81
// 100
// Total is 385
// 
#include <iostream>

using namespace std;

int main()
{
	unsigned int y = 0; // declare and initialize y
	unsigned int x = 1; // declare and initialize x
	unsigned int total = 0; // declare and initialize total

	while(x <= 10) // loop 10 times
	{
		y = x * x; // perform calculation
		cout << y << endl; // output result
		total += y; // add y to total
		++x; // increment counter x
	} // end while
	
	cout << "Total is " << total << endl; // display result

	return 0;
} // end main
