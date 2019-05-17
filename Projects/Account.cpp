#include "Account.h"

Account::Account(double accountBalance)
{
	cashBalance = accountBalance;
}

void Account::setBalance(double accountBalance)
{
	cashBalance = accountBalance;
}

double Account::getBalance() const
{
	return cashBalance;
}

void Account::menu(int *num)
{
	int select = 0;
	cout << "Please select an account to access" << endl;
	cout << "\t1. Stock Portfolio Account"
             << "\n\t2. Bank Account"
	     << "\n\t3. Exit"
	     << "\n\tYour selection ";
	
	cin >> select;
	*num = select;	
	
	cout << endl; 
}
