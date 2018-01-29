#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int grade;
	
	cout << "Enter your grade " << endl;
	cin >> grade;

	cout << (grade >= 60 ? "Passed\n" : "Failed\n");	

	return 0;
}
