#include <iostream>

int main()
{
	char ch;
	int num1;
	long int num2;
	unsigned int num3;
	float num4;
	double num5;
	long num6;

	std::cout << "\nBytes of storage used by a character:\t " << sizeof(ch)
		  << "\nBytes used by integer:\t\t\t " << sizeof(num1)
		  << "\nBytes used by long integer:\t\t " << sizeof(num2)
		  << "\nBytes used by unsigned integer:\t\t " << sizeof(num3)
		  << "\nBytes used by floating point number:\t " << sizeof(num4)
		  << "\nBytes used by double floating point:\t " << sizeof(num5)
		  << "\nBytes used by long floating point:\t " << sizeof(num6) << '\n';
	
	return 0;
}
