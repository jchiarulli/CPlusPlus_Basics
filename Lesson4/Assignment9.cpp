// Jason Chiarulli
//
// RUID: 182001459
//
// Assignment 9
//
// 2/23/18
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int arraySize = 7;
	char nameArray[arraySize] = {'M', 'i', 'c', 'h', 'a', 'e', 'l'};
	char input;

	cout << "Enter a character: ";
	cin >> input; 

	for(int i = 0; i < arraySize; i++)
	{	if(nameArray[i] == input)
		{
			//cout << nameArray[i] << endl;
			for(int j = nameArray[i + 1]; j < arrarySize; j++)
				nameArray[i - 1] = nameArray[i];
			arraySize--;
		}
	}

	return 0;
}
