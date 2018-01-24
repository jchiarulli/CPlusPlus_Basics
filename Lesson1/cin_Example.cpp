#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int num1, num2, num3;
	double average;

	cout << "Enter three integer numbers: ";
	cin >> num1 >> num2 >> num3;
	average = (num1 + num2 + num3)/3.0;
	cout << "The average is " << average;
	cout << '\n';
}
