#include "Account.h"
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double balance, double interest)
{
	account_balance = balance;
	interestRate = interest;
}

double SavingsAccount::calculateInterest()
{
	double interest = account_balance*interestRate/100;

	return interest;
}
