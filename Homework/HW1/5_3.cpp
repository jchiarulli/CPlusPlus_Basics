// Exercise 5.3
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	// a)
	// unsigned int x = 1;
	// while( x <= 10);
	//   ++x;
	// }

	// The error in part (a) is the use of a semicolon after the while header.
	// This error causes an infinite loop to occur.
	// The correction involves removing the semicolon and the brace or replacing the
	// semicolon with a {.
	
	// Correction:
	unsigned int x = 1;
	while(x <= 10)
	{
		++x;
	}

	// b)
	// for ( double y = 0.1; y != 1.0; y += .1 )
	//    cout << y << endl;
	
	// The error in part (b) is the use of a floating-point number to control the for 
	// loop repetition statement.
	// The correction involves using an unsigned int and performing the proper 
	// calculation by static casting y to a double and dividing y by 10.
	
	// Correction:
	for(unsigned int y = 1; y != 10; ++y)
		cout << (static_cast<double>(y)/10) << endl;

	// c)
	/*switch ( n )
	{
 	 	case 1:
		  cout << "The number is 1" << endl;
		case 2:
		  cout << "The number is 2" << endl;
		  break;
		default:
		  cout << "The number is not a 1 or 2" << endl;
		  break;
	}*/
	
	// The error in part (c) is the abscene of a break statement after case 1.
	// Note that this is not an error if the statement of case 2 is meant to execute 
	// every time the statement of case 1 executes.
	// The correction is adding a break statement to case 1.
	
	// Correction:
	int n;
	cout << "Enter an integer ";
	cin >> n;

	switch(n)
	{
		case 1:
			cout << "The number is 1" << endl;
		break;
		
		case 2:
			cout << "The number is 2" << endl;
		break;

		default:
			cout << "The number is not a 1 or 2" << endl;
		break;
	}
	
	// d)
	// The following code should print the values 1 to 10.
	// unsigned int c = 1;
	// while ( c < 10 )
	   // cout << c++ << endl;

	// The error in part (d) is the use of <. Using < causes the loop
	// to terminate once the value of c = 10, so the loop body is unable to execute
	// and print the desired values of 1 to 10.
	// The correction is to use <= instead of <, or change the 10 to 11.
	
	// Correction:
	unsigned int c = 1;
	while(c <= 10)
		cout << c++ << endl;

	return 0;
}
