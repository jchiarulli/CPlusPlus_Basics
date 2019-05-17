#include <iostream>

using std::cout;
using std::endl;

const int size = 5;
void sort(double[size]);
void swap(double[size], int, int);

int main()
{
	int index;
	double my_list[] = {21, 13, 9, 15, 17};

	sort(my_list);

	cout << "\nThe sorted array is: \n";
	
	for(index = 0; index < size; index++)
		cout << '\t' << my_list[index] << endl;
	
	return 0;
}

void sort(double testArray[])
{
	int n, k, sm_index, moves = 0;
	double smallest;

	for(k = 0; k < size; k++)
	{
		smallest = testArray[k];
		sm_index = k;

		for(n = k + 1; n < size; n++)
		{	if(testArray[n] < smallest)
			{
				smallest = testArray[n];
				sm_index = n;
			}
		}
	
	swap(testArray, sm_index, k);	

	}	
}

void swap(double testArray[], int smaller, int pass)
{
	double temp;

	temp = testArray[pass];
	testArray[pass] = testArray[smaller];
	testArray[smaller] = temp;
}
