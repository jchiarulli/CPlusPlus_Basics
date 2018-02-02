#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	for(int i = 0, j = 0; j + 1 <= 10; j++, i++)
	{
		cout << j + i << endl;
	}
	
	cout << endl;

	int i = 0, j = 0;

	while(j + 1 <= 10)
	{
		cout << j + i << endl;
		j++;
		i++;
	}

	cout << endl;

	int k = 0, l = 0;
	
	do
	{
		cout << k + l << endl;
		k++;
		l++;

	}while(k + 1 <= 10);

	return 0;
}
