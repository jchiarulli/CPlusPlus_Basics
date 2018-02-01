#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int Even_Integer, w = 0, Double_Factorial = 1, count = 0, n = 0;

	cout << "Enter an even integer ";
	cin >> Even_Integer;

	if(Even_Integer % 2 == 0)
	{
		for(int i = 0; i < Even_Integer/2; i++)
		{
			Double_Factorial = Double_Factorial * (Even_Integer - w);
			w = w + 2;	
			//cout << y << endl;	
		}

		cout << Double_Factorial << endl;

		cout << endl << "Now using a while loop" << endl;
		
		Double_Factorial = 1;

		while(count < Even_Integer/2)
		{
			Double_Factorial = Double_Factorial * (Even_Integer - n);
			n = n + 2;
			count++;
		}

		cout << Double_Factorial << endl;
	}
	
	else
		cout << endl << "Invalid Input" << endl;	

	return 0;
}
