#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int counter = 1;

	while(counter <= 10)
	{
		cout << counter << endl;
		++counter;
		//counter++;
	}
	
	cout << endl;

	for (int count =1; count <= 10; count++)
		cout << count << endl;
	
	cout << endl;

	for(int i = 0, j = 0; j + i <= 10; j++, i++)
		cout << j + i << endl;
	
	cout << endl;
	
	int sum = 0;

	for(int number = 2; number <= 100; number+=2)
		sum+=number;

	cout << "Sum is " << sum << endl;

	return 0;
}