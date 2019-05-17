#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void insertletter(char[], char, int&);
void DeleteElement(char[], int, int&);

int main()
{
	const int MAXCHARS = 30;
	const int STARTCHARS = 0;
	char alpharray[MAXCHARS]; /*= {'B', 'J', 'K', 'M', 'S', 'Z'};*/
	char newlet;
	int sizeofarray = STARTCHARS;
	int delItem;
	int answer;

	while(5)
	{
		cout << "Enter a letter to add: ";
		cin >> newlet;
		insertletter(alpharray, newlet, sizeofarray);
		
		cout << "Do you want to delete an item?" << endl;
		cin >> answer;

	        if(answer == 1)
		{
			cout << "Enter the position of an item to delete it ";
			cin >> delItem;
			DeleteElement(alpharray, delItem, sizeofarray);
		}
	}

	return 0;
}

void insertletter(char alpharray[], char addlet, int& sizeofarr)
{
	int i = 0, endpos, newpos;
	
	if(sizeofarr == 0)
	{
		alpharray[0] = addlet;
		sizeofarr++;
		cout << alpharray[0] << endl;
	}
	
	else
	{
		while(alpharray[i] < addlet && i < sizeofarr)
			i++;
	
		newpos = i;

		for(i = sizeofarr; i > newpos; i--)
			alpharray[i] = alpharray[i - 1];
	
		alpharray[newpos] = addlet;
		sizeofarr++;
	
		for(i = 0; i < sizeofarr; i++)
			cout << alpharray[i];
	
		cout << endl;
	}
}

void DeleteElement(char alpharray[], int delpos, int& sizeofarr)
{
	for(int i = delpos + 1; i < sizeofarr; i++)
		alpharray[i - 1] = alpharray[i];
	
	sizeofarr--;

	for(int i = 0; i < sizeofarr; i++)
		cout << alpharray[i];
	
	cout << endl;
}
