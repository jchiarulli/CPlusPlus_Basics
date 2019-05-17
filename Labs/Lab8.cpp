// Programming Methodologies Lab (14:332:254)
//
// Laboratory 8 
//
// Jason Chiarulli
//
// RUID: 182001459
//
// Section: 03
//
// 3/26/18
//

#include <iostream>

using std::cout;
using std::endl;

#include <cstdlib>

using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
	const int salesperson = 100;
	srand(time(0));
	int gross_value[salesperson];
	int array_counter[9] = {0};

	for(int i = 0; i < salesperson; i++)
	{	
		gross_value[i] = (rand()%10000)*0.09 + 200;
	}

	int *gross_valuePtr = gross_value;
	int *array_counterPtr = array_counter;

	for(int offset1 = 0; offset1 < salesperson; offset1++)
	{
		if((*(gross_value + offset1)) >=200 && (*(gross_value + offset1) <= 299))
		{
			(*(array_counter + 0)) = (*(array_counter + 0)) + 1;
		}
		
		else if((*(gross_value + offset1)) >=300 && (*(gross_value + offset1) <= 399))
		{
			(*(array_counter + 1)) = (*(array_counter + 1)) + 1;
		}

		else if((*(gross_value + offset1)) >=400 && (*(gross_value + offset1) <= 499))
		{
			(*(array_counter + 2)) = (*(array_counter + 2)) + 1;
		}

		else if((*(gross_value + offset1)) >=500 && (*(gross_value + offset1) <= 599))
		{
			(*(array_counter + 3)) = (*(array_counter + 3)) + 1;
		}

		else if((*(gross_value + offset1)) >=600 && (*(gross_value + offset1) <= 699))
		{
			(*(array_counter + 4)) = (*(array_counter + 4)) + 1;
		}

		else if((*(gross_value + offset1)) >=700 && (*(gross_value + offset1) <= 799))
		{
			(*(array_counter + 5)) = (*(array_counter + 5)) + 1;
		}

		else if((*(gross_value + offset1)) >=800 && (*(gross_value + offset1) <= 899))
		{
			(*(array_counter + 6)) = (*(array_counter + 6)) + 1;
		}

		else if((*(gross_value + offset1)) >=900 && (*(gross_value + offset1) <= 999))
		{
			(*(array_counter + 7)) = (*(array_counter + 7)) + 1;
		}

		else if((*(gross_value + offset1)) >= 1000)
		{
			(*(array_counter + 8)) = (*(array_counter + 8)) + 1;
		}	
	}

	cout << "Number of salespeople in $200-299 range: " << *(array_counter + 0) << endl 
	     << "Number of salespeople in $300-399 range: " << *(array_counter + 1) << endl
	     << "Number of salespeople in $400-499 range: " << *(array_counter + 2)<< endl
	     << "Number of salespeople in $500-599 range: " << *(array_counter + 3)  << endl
	     << "Number of salespeople in $600-699 range: " << *(array_counter + 4) << endl
             << "Number of salespeople in $700-799 range: " << *(array_counter + 5) << endl
             << "Number of salespeople in $800-899 range: " << *(array_counter + 6) << endl
	     << "Number of salespeople in $900-999 range: " << *(array_counter + 7)  << endl
	     << "Number of salespeople in $1000 and over range: " 
	     << *(array_counter + 8) << endl;


 

	return 0;
}
