#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>

using namespace std;

struct Stock
{
	string StockSymbols;
	string CompanyNames;
	string numberOfShares;
	string StockPrices;
	string Totals;
	double update;
};

class Account
{
	public:
		Account(double = 10000.00);
		
		void setBalance(double);
		double getBalance() const;

		void menu(int*);
	
	protected:
		double cashBalance;
};

#endif
