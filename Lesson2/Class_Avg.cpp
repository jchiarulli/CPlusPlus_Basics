#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int total = 0, counter = 1, grade, avg, number_of_grades;

	cout << "Enter the number of grades: ";
	cin >> number_of_grades;	

	while(counter <= number_of_grades)
	{	
		cout << "Enter grade: ";
		cin >> grade;
		total += grade;
		counter++;
	}	

	avg = total/number_of_grades;

	cout << "The class average is " << avg << endl;

	/*while(counter <= 10)
	{	
		cout << "Enter grade: ";
		cin >> grade;
		total += grade;
		counter++;
	}	

	avg = total/10;

	cout << "The class average is " << avg << endl;*/

	return 0;
}
