// Exercise 5.17
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int i = 1, j = 2, k = 3, m = 2;

	// a)
	// Prints 1 since the equality operator evaluates to true
	cout << ( i == 1 ) << endl; 

	// b)
	// Prints 0 since the equality operator evaluates to false
 	cout << ( j == 3 ) << endl;

	// c)
	// Prints 1 since both relational operators evaluate to true, so the logical operator
	// && will evaluate to true 
	cout << ( i >= 1 && j < 4 ) << endl;

	// d)
	// Prints 0 since only one relational operator evaulates to true, so the logical
	// operator && will evaluate to false
	cout << ( m <= 99 && k < m ) << endl;

	// e)
	// Prints 1 since the relational operator evaluates to true, so the logical 
	// operator || will evaluate to true
	cout << ( j >= i || k == m ) << endl;

	// f)
	// Prints 0 since both relational operators evaluate to false, so the logical
	// operator || will evaluate to false
	cout << ( k + m < j || 3 - j >= k ) << endl;

	// g)
	// Prints 0 since the logical operator ! will return false if its operand is true
	cout << ( !m ) << endl;

	// h)
	// Prints 1 since the logical operator ! has an operand with a value of 0
	cout << ( !( j - m ) ) << endl;

	// i)
	// Prints 0 since the relational operator evaluates to true, so the logical operator
	// ! will return false because its operand is true
	cout << ( !( k > m ) ) << endl;

	return 0;
}
