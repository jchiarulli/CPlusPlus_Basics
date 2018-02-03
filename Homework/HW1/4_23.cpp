//Exercise 4.23
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	// a)
	cout << "Part (a) without applying indentation conventions" << endl << endl;

	// Case 1
	cout << "Case 1" << endl << endl;

	int x = 9, y = 11;
	
	// Here the output will be:
	// ***** 
	// $$$$$
	//
	// Since the first if statement is true and the nested if statement is true the
	// program will execute, cout << "*****" << endl;
	// The program will also execute cout << "$$$$$" << endl; since the statement does 
	// not belong to any of the if or else statements
	//
	if ( x < 10 )
	if ( y > 10 )
	cout << "*****" << endl;
	else
	cout << "#####" << endl;
	cout << "$$$$$" << endl;

	cout << endl;

	// Case 2
	cout << "Case 2" << endl << endl;
	x = 11;
	y = 9;

	// Here the output will be:
	// $$$$$
	//
	// Since the first if statement is not true, it will not execute the nested
	// if statement. Since the nested if statement is not executed, its else statement
	// will also not be executed, so only the statement cout << "$$$$$" << endl; 
	// will be executed for the same reason as Case 1.
	// 
	if ( x < 10 )
	if ( y > 10 )
	cout << "*****" << endl;
	else
	cout << "#####" << endl;
	cout << "$$$$$" << endl;

	cout << endl;

	// The output is much more clear after applying the indentation conventions
	
	cout << "After applying the indentation conventions" << endl << endl;

	// Case 1
	cout << "Case 1" << endl << endl;
	x = 9;
	y = 11;

	if ( x < 10 )
		if ( y > 10 )
			cout << "*****" << endl;
	else
		cout << "#####" << endl;
	
	cout << "$$$$$" << endl;

	cout << endl;

	// Case 2
	cout << "Case 2" << endl << endl;
	x = 11;
	y = 9;

	if ( x < 10 )
		if ( y > 10 )
			cout << "*****" << endl;
	else
		cout << "#####" << endl;
	
	cout << "$$$$$" << endl;

	cout << endl;

	// b)
	cout << "Part (b) without applying the indentation conventions" << endl << endl;

	// Case 1
	cout << "Case 1" << endl << endl;
	x = 9;
	y = 11;

	// Here the output will be:
	// *****
	//
	// Since the first if statement is true and the nested if statement is true, 
	// the statement cout << "*****" << endl; will be executed.
	// The other cout statements will only be executed if the first if statement is 
	// false.

	if ( x < 10 )
	{
	if ( y > 10 )
	cout << "*****" << endl;
	}
	else
	{
	cout << "#####" << endl;
	cout << "$$$$$" << endl;	
	}

	cout << endl;

	// Case 2
	cout << "Case 2" << endl << endl;
	x = 11;
	y = 9;
	
	// Here the output will be:
	// #####
	// $$$$$
	//
	// Since the first if statement is false, the corresponding else statement is 
	// executed.
	
	if ( x < 10 )
	{
	if ( y > 10 )
	cout << "*****" << endl;
	}
	else
	{
	cout << "#####" << endl;
	cout << "$$$$$" << endl;	
	}

	cout << endl;
	
	// Once again the output is clearer if the indentation conventions are applied. 
	cout << "After applying the indentation conventions" << endl << endl;

	// Case 1
	cout << "Case 1" << endl << endl;
	x = 9;
	y = 11;

	if ( x < 10 )
	{
		if ( y > 10 )
			cout << "*****" << endl;
	}
	else
	{
		cout << "#####" << endl;
		cout << "$$$$$" << endl;	
	}

	cout << endl;

	// Case 2
	cout << "Case 2" << endl << endl;
	x = 11;
	y = 9;

	if ( x < 10 )
	{
		if ( y > 10 )
			cout << "*****" << endl;
	}
	else
	{
		cout << "#####" << endl;
		cout << "$$$$$" << endl;	
	}

	return 0;
}
