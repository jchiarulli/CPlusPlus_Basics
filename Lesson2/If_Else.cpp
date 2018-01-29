#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
	int grade;

	cout << "Enter your grade" << endl;
	cin >> grade;

	if (grade >= 60)
		cout << "Passed" << endl;
	
	else
		cout << "Failed" << endl;

	return 0;
}
