// Exercise 2.27
#include <iostream>

using std::cout;
using std:: cin;
using std::endl;

int main()
{
	char keyboard_character;

	cout << "Enter a character ";
	cin >> keyboard_character;

	cout << "The integer equivalent of the character " << keyboard_character << " is " 
	     << static_cast < int >(keyboard_character) << endl;	
	
	return 0;
}
