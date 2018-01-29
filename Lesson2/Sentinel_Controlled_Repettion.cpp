// Class average program with sentinel-controlled repetition.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>	// parameterized stream manipulators

using std::setprecision;	// sets numeric output precision

int main()
{
	int total = 0, gradeCounter = 0, grade;
	double average;

	cout << "Enter grade, -1 to end: ";
	cin >> grade;

	while(grade != -1)
	{
		total = total + grade;
		gradeCounter = gradeCounter + 1;

		cout << "Enter grade, -1 to end: ";
		cin >> grade;
	}

	if(gradeCounter != 0)
	{
		average = static_cast<double>(total)/gradeCounter;
		cout << "Class average is " << setprecision(2) << fixed << average << endl;
	}

	else
		cout << "No grades were entered" << endl;

	return 0;
}
