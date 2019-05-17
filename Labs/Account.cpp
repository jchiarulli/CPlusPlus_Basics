#include <iostream>

using std::cout;

#include "Account.h"

Account::Account(double balance)
{
	account_balance = balance;
}

void Account::credit(double deposit)
{
	account_balance += deposit;
}

void Account::debit(double withdraw)
{
	if(withdraw <= account_balance)
	{
		account_balance -= withdraw;
	}

	else
		cout << "Insufficient funds!\n";  
}

double Account::getBalance()
{
	return account_balance;
}
