#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int total = 0, counter = 1, grade, avg;
	
	while(counter <= 10)
	{	
		cout << "Enter grade: ";
		cin >> grade;
		total += grade;
		counter++;
	}	

	avg = total/10;

	cout << "The class average is " << avg << endl;

	return 0;
}
