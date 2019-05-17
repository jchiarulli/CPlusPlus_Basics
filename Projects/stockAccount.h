#ifndef STOCKACCOUNT_H
#define STOCKACCOUNT_H

#include "Account.h"

class stockAccount : public Account
{
	public:
		stockAccount(double = 10000.00);

		void stockAccountMenu(int*);

		void printCurrentStockPrice();
		void buyStock(vector<Stock>&, stockAccount&);
		void sellStock(vector<Stock>&, stockAccount&);
		void displayCurrentPortfolio(vector<Stock>&, stockAccount&);
		void displayTransactionsHistory();
};

#endif
