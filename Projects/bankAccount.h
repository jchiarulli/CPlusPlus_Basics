#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include "Account.h"

class bankAccount : public Account
{
	public:
		bankAccount(double = 10000.00);

		void bankAccountMenu(int*);
		void validInput(double*);
		void printCurrentCashBalance(vector<Stock>&, bankAccount&);
		void Deposit(vector<Stock>&, bankAccount&);
		void Withdraw(vector<Stock>&, bankAccount&);
		void displayBankTransactionsHistory(vector<Stock>&, bankAccount&);
};

#endif
