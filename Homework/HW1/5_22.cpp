// Exercise 5.22
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	// a)
	int x = 0, y = 1;
	
	cout << "a)" << endl;
	cout << "The original expression is ( !( x < 5 ) && !( y >= 7 ) )" << endl;
	cout << "The new expression is !( ( x < 5 ) || ( y >= 7 ) )" << endl;

	if( ( !( x < 5 ) && !( y >= 7 ) ) == !( ( x < 5 ) || ( y >= 7 ) ) )
		cout << "The expresions are equivalent." << endl;
	else
		cout << "The expressions are not equivalent." << endl;
	
	cout << endl;

	// b)
	int a = 0, b = 1, g = 2;

	cout << "b)" << endl;
	cout << "The original expression is ( !( a == b ) || !( g != 5 ) )" << endl;
	cout << "The new expression is !( ( a == b ) && ( g != 5 ) )" << endl;
	
	if( ( !( a == b ) || !( g != 5 ) ) == !( ( a == b ) && ( g != 5 ) ) )
		cout << "The expressions are equivalent." << endl;
	else 
		cout << "The expressions are not equivalent." << endl;

	cout << endl;

	// c)	
        cout << "c)" << endl;
	cout << "The original expression is !( ( x <= 8 ) && ( y > 4 ) )" << endl;
	cout << "The new expression is ( !( x <= 8 ) || !( y > 4 ) )" << endl;

	if( !( ( x <= 8 ) && ( y > 4 ) ) == ( !( x <= 8 ) || !( y > 4 ) ) )
	       cout << "The expressions are equivalent." << endl;
	else
		cout << "The expressions are not equivalent." << endl;

	cout << endl;

	// d)
	int i = 0, j = 1;

	cout << "d)" << endl;
	cout << "The original expression is !( ( i > 4 ) || ( j <= 6 ) )" << endl;
	cout << "The new expression is ( !( i > 4 ) && !( j <= 6 ) )" << endl;

	if( !( ( i > 4 ) || ( j <= 6 ) ) == ( !( i > 4 ) && !( j <= 6 ) ) )
	       cout << "The expressions are equivalent." << endl;
	else
		cout << "The expressions are not equivalent." << endl;
	
	cout << endl;

	return 0;
}
