#include <iostream>
#include "complexType.h"

using namespace std;

int main()
{
	complexType num1(23,34), num2, num3;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "Enter complex number in the form (a,b): ";
	cin >> num2;
	cout << endl;
	cout << "num2 = " << num2 << endl;
	num3 = num1 + num2;
	cout << "num3 = " << num3 << endl;
	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl; 
}
