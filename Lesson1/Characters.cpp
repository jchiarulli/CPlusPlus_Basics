#include <iostream>

using std::cout;
using std::endl;

int main()
{
	char ch;	// this declares a character variable
	ch = 'a';	// store the letter a into ch
	cout << "The character stored in ch is " << ch << endl;
	ch = 'm';	// now store the letter m into ch
	cout << "The character now stored in ch is " << ch << endl;
	
	char c = 'a';	
	cout << c + 1 << endl;
	cout << c + 26 << endl;

	return 0;
}
