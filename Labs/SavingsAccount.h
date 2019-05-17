#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account
{
	public:
		SavingsAccount(double = 0, double = 1.15);
		double calculateInterest();

	private:
		double interestRate;
};

#endif
