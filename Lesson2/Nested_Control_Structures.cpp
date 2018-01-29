#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main()
{
	int giants = 0, patriots = 0, studentCounter = 1, result;

	while(studentCounter <= 10)
	{	
		cout << "Enter result (1 = Giants, 2 = Patriots): ";
		cin >> result;
		//result = cin.get();

		switch(result)
		{
			case 1:
				giants++;
			break;
			
			case 2:
				patriots++;
			break;

			/*case '\n':
			case '\t':
			case ' ':
				studentCounter--;
			break;*/

			default:
				cout << "Invalid input." 
				     <<	" Enter a 1 for Giants and a 2 for Patriots." << endl;
				//studentCounter--;
			//continue;
			break;
		}
		if(result == 'r')
			continue;

		studentCounter++;
	}

	cout << "Giants " << giants << endl;
	cout << "Patriots " << patriots << endl;

	if(giants > patriots)
		cout << "GO GIANTS" << endl;
	
	else if(patriots > giants)
		cout << "GO PATRIOTS" << endl;
	
	else
		cout << "It's a tie!" << endl;

	return 0;
}
