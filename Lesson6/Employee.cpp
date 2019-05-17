#include <iostream>
#include <iomanip>

using namespace std;

struct Employee
{
	int idNum;
	double payRate;
	double hours;
};

Employee getValues();   
int main()
{
	Employee emp;
	emp = getValues();
	cout << "\nThe employee id number is " << emp.idNum
	     << "\nThe employee pay rate is $" << emp.payRate
	     << "\nThe employee hours are " << emp.hours << endl;
	        
	return 0;
}

Employee getValues()
{
	Employee next;
	next.idNum = 6789;
	next.payRate = 16.25;
	next.hours = 38.0;
	
	return next;
}

