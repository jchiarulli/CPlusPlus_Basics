#include <iostream>

using std::cout;
using std::endl;
using std::string;

#include <iomanip>

using std::setw;

struct Salaried
{
	//char dept[5];
	string dept;
	int salary;
	int vac_days;
};

struct Payroll
{
	int id;
	char name[15];
	double payrate;
};

int main()
{
	// array of 20 elements, each of type Salaried
	Salaried emp[20];
	
	emp[0].dept = "Purc";
	emp[0].salary = 34560;
	emp[0].vac_days = 14;	
	
	emp[2].salary = 32100;
	emp[2].dept = "Ship";
	emp[2].vac_days = 10;

	emp[19].dept = "Acct";
	emp[19].salary = 22500;
	emp[19].vac_days = 12;

	// an array of 3 records of type Payroll
	// Payroll employee[3];

	// load array -- there are other ways to load the array
	Payroll employee[3] = { {11, "Mickey", 7.25}, {12, "Minny", 6.50}, 
				{13, "Donald", 9.00} };

	// display
	for(int ndx = 0; ndx < 3; ndx++)
		cout << '\n' << employee[ndx].id
		     << setw(20) << employee[ndx].name
		     << setw(20) << employee[ndx].payrate;

	cout << endl;

	return 0;
}
