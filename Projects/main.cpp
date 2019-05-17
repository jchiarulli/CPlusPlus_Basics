// Jason Chiarulli
//
// RUID: 182001459
//
// Project 2
//
// 5/5/18
//

#include "Account.h"
#include "stockAccount.h"
#include "bankAccount.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "Welcome to the Account Management System." << endl;

	vector <Stock> Stocks;

	int input = 0, input1 = 0;

	Account account; 
	account.menu(&input);

	stockAccount stock_account;
	stockAccount stock_Account;

	bankAccount bank_account;
	bankAccount bank_Account;

	while(input != 3)
	{
		switch(input)
		{
			case 1:
			{
				stock_account.stockAccountMenu(&input1);
				while(input1 != 6)
				{
					switch(input1)
					{
						case 1:
						{
						stockAccount stock_account1;
						stock_account1.printCurrentStockPrice();
						}
						break;

						case 2:
						{
						stockAccount stock_account2;
						stock_account2.buyStock(Stocks, stock_Account);
						}
						break;
		
						case 3:
						{
						stockAccount stock_account3;
						stock_account3.sellStock(Stocks, stock_Account);
						}
						break;

						case 4:
						{
						stockAccount stock_account4;
						stock_account4.displayCurrentPortfolio(Stocks, stock_Account);
						}
						break;

						case 5:
						{
							stockAccount stock_account5;
							stock_account5.displayTransactionsHistory();
						}
						break;
					}

					stock_account.stockAccountMenu(&input1);
				}
			}
			break;
			
			case 2:
			{
				bank_account.bankAccountMenu(&input1);
				while(input1 != 5)
				{
					switch(input1)
					{
						case 1:
						{
						bankAccount bank_account1;
						bank_account1.printCurrentCashBalance(Stocks, bank_Account);
						}
						break;

						case 2:
						{
						bankAccount bank_account2;
						bank_account2.Deposit(Stocks, bank_Account);
						}
						break;
		
						case 3:
						{
						bankAccount bank_account3;
						bank_account3.Withdraw(Stocks, bank_Account);
						}
						break;

						case 4:
						{
						bankAccount bank_account4;
						bank_account4.displayBankTransactionsHistory(Stocks, bank_Account);
						}
						break;
					}

					bank_account.bankAccountMenu(&input1);
				}
			}
			break;
		}

		account.menu(&input);
	}
}
