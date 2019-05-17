#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
	public:
		Account(double = 0);
		void credit(double);
		void debit(double);
		double getBalance();
	
	protected:
		double account_balance;
};

#endif
