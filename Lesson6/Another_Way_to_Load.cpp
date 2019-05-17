#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include <iomanip>

using std::setw;

struct Payroll
{
	int id;
	char name[15];
	double payrate;
};

void loadarray(Payroll[]);
void showarray(Payroll[]);

int main()
{
	Payroll employee[3] = {11, "Mickey", 7.25};

	loadarray(employee);
	showarray(employee);	
	
	cout << endl << endl;

	return 0;
}

void loadarray(Payroll staff[3])
{
	for(int ndx = 1; ndx < 3; ndx++)
	{
		cout << "Enter the ID, name, and pay rate: ";
		cin >> staff[ndx].id >> staff[ndx].name >> staff[ndx].payrate;
		cout << endl;
	}
}

void showarray(Payroll staff[3])
{
	for(int ndx = 0; ndx < 3; ndx++)
		cout << '\n' << staff[ndx].id
		     << setw(20) << staff[ndx].name
		     << setw(20) << staff[ndx].payrate;
}
