#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include <iomanip>

using std::fixed;
using std::setw;
using std::setprecision;
using std::showpoint;

#include <cstdlib>

#include <ctime>

int main()
{
	char topics[] = {'a', 'b', 'c', 'd', 'e'};
	int ratings[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int row = 5;
	int column = 10;
	int response;
	double rowtotal

	int responses[row][column];

	srand(time(NULL));

	for(int k = 0; k < 11; k++)
	{
		cout << setw(7) << ratings[k];
	}
	
	cout << endl;	

	for(int i = 0; i < 5; i++)
	{ 
		cout << setw(7) << topics[i]; 		

		for(int j = 0; j < 10; j++)
		{
			responses[i][j] = rand()%100 + 1;
			cout << setw(7) << responses[i][j];
		}
		
		cout << endl;
	}
	
	return 0;
}
