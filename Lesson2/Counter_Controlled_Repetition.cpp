#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int counter = 1, i, j;

	while(counter <= 10)
	{
		cout << counter << endl;
		++counter;
		//counter++;
	}
	
	cout << endl;

	for (int count = 1; count <= 10; count++)
		cout << count << endl;
	
	cout << endl;

	for(i = 0, j = 0; j + i <= 10; j++, i++)
		cout << j + i << endl << endl;
	
	cout << j + i << endl;
	
	cout << endl;
	
	int sum = 0;

	for(int number = 2; number <= 100; number+=2)
	{	//cout << number << endl;
		sum+=number;
	}

	cout << "Sum is " << sum << endl << endl;
	
	int k = 0, l = 0;

	while(k + l <= 10)
	{
		cout << k + l << endl;

		k++;
		l++;
	}

	cout << k << " " << l << " " << k + l << endl;
	
	return 0;
}
