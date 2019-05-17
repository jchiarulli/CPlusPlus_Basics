#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int size = 11;
int linearSearch(const int[], int, int);
int linearSearchSorted(const int[], int, int);

int main()
{
	int my_list[] = {10, 24, 3, 5, 6, 7, 100, 4, 32, 65, 8};
	int key;

	cout << "Enter the key value: ";
	cin >> key;

	cout << linearSearch(my_list, key, size) << endl;	
	
	int sorted_list[] = {1, 2, 5, 6, 10, 22, 34, 56, 77, 89, 100};
	int sort_key;

	cout << "Enter the key value: ";
	cin >> sort_key;

	cout << linearSearchSorted(sorted_list, sort_key, size) << endl;

	return 0;
}

int linearSearch(const int array[], int key, int sizeOfArray)
{
	for (int j = 0; j < sizeOfArray; j++)
	       if(array[j] == key)
	       		return j;
				
	return -1;
}

int linearSearchSorted(const int array[], int key, int sizeOfArray)
{
	int j = 0;
	while(j < sizeOfArray - 1 && key > array[j])
		j++;

	if(array[j] == key)  // if found,
		return j;	// return location of key   

	return -1;  // key not found 
}
