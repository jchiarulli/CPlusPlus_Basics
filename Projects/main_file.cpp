// Jason Chiarulli
//
// RUID: 182001459
//
// Project 1
//
// 3/28/18
//

#include "header_file.h"

int main()
{
	// declare list of account here. The size of the list is not fixed.
	vector <Account> bankAccounts;

	int input = 0;
	menu(&input);

	// run loop to continue program until terminated by user
	while(input != 9)
	{
		switch (input) 
		{
			//cases: call functions to perform tasks		
			case 1:
				makeAccount(bankAccounts);
				sortAccounts(bankAccounts);
				cout << endl;
				break;

			case 2:
				depositAccount(bankAccounts);
				cout << endl;
				break;

			case 3:
				withdrawAccount(bankAccounts);
				cout << endl;
				break;

			case 4:
				transfer(bankAccounts);
				cout << endl;
				break;	

			case 5:
				printAccount(bankAccounts);
				cout << endl;
				break;

			case 6:
				ActiveDeactive(bankAccounts);
				cout << endl;
				break;

			case 7:
				deleteAccount(bankAccounts);
				cout << endl;
				break;

			case 8:
				printAllAccounts(bankAccounts);
				cout << endl;
				break;

			default:
				cout << endl << "Error: Select a number from the menu." 
				     << endl << endl;
				break;	
		}

		menu(&input);
	}

	cout << endl << "Bank is closed!" << endl;

	return 0;
}
