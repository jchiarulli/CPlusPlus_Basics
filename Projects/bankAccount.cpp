#include "Account.h"
#include "bankAccount.h"
#include <fstream>
#include <ctime>
#include <iomanip>
#include <cmath>

bankAccount::bankAccount(double accountBalance)
{
	cashBalance = accountBalance;
}

void bankAccount::bankAccountMenu(int *num)
{
	int select;

	cout << "Please select an option" << endl;
	cout << "\t1. View account balance"
             << "\n\t2. Deposit money"
	     << "\n\t3. Withdraw money"
	     << "\n\t4. Display transactions history"
	     << "\n\t5. Return to main menu"
	     << "\n\tYour selection: ";
	
	cin >> select;
	*num = select;	
		
	cout << endl;
}

void bankAccount::printCurrentCashBalance(vector<Stock>& Stocks, bankAccount& bank_account)
{
	string stock_symbol, company, number, price, total;

	double Total, TotalPortfolioValue = 0;

	srand(time(NULL));
	int num = rand()%4 + 1;
	string name = "stock" + to_string(num) + ".txt";
	string name2 = "/home/jason/Repo/CPlusPlus_Basics/Projects/" + name;

	ifstream file(name2);
	string line;

	cout << endl;

	if(Stocks.size() > 0)
	{
		int k = Stocks.size() - 1;
		bank_account.setBalance(Stocks[k].update);
	}

	cout << "Cash Balance = $" << bank_account.getBalance() << endl << endl;

	cout << "Symbol" << '\t' << "Company" << setw(30) << "Number" << '\t' << "Price" << '\t' << "Total" << endl;


	for(int j = 0; j < Stocks.size(); j++)
	{
		ifstream file(name2);
		string line;	

		stock_symbol = Stocks[j].StockSymbols;
		company = Stocks[j].CompanyNames;
		number = Stocks[j].numberOfShares;
		
		while(getline(file, line))
		{
			string delim = "\t";
			vector<string> tokens;
			if(line.find(stock_symbol) != string::npos)
			{	
				for (int i = 0; i < 3; i++)
				{
					if (i == 2)
					{
						line = line.substr(line.rfind(delim)+1, string::npos);
						line.resize(line.length()-1);

						tokens.push_back(line);
					}

					tokens.push_back(line.substr(0, line.find(delim)));
					line = line.substr(line.find(delim)+1, string::npos);
				}

				price = tokens[2];

				Total = stoi(Stocks[j].numberOfShares)*stod(tokens[2]);
				total = to_string(Total);

				TotalPortfolioValue = TotalPortfolioValue + Total;

				cout << stock_symbol << '\t' << company << '\t'  << number << '\t' << price << '\t' << total << endl;
			}
		}
	}
			
	file.close();

	cout << endl << "Total Portfolio value: $" << TotalPortfolioValue + bank_account.getBalance() << endl << endl;
}

void bankAccount::Deposit(vector<Stock>& Stocks, bankAccount& bank_account)
{
	string stock_symbol, company, number, price, total, deposit, Action = "Deposit";

	double Total, TotalPortfolioValue = 0, newBalance;

	srand(time(NULL));
	int num = rand()%4 + 1;
	string name = "stock" + to_string(num) + ".txt";
	string name2 = "/home/jason/Repo/CPlusPlus_Basics/Projects/" + name;

	ifstream file(name2);
	string line;

	cout << endl;

	double d;

	cout << "Enter amount to be deposited: ";
	cin >> d;

	validInput(&d);
		
	deposit = to_string(d);

	cout << "Deposit $" << deposit << " to the bank account" << endl << endl;

	if(Stocks.size() > 0)
	{
		int k = Stocks.size() - 1;
		bank_account.setBalance(Stocks[k].update);
	}

	newBalance = stod(deposit) + bank_account.getBalance();
	
	bank_account.setBalance(newBalance);

	cout << "Cash Balance = $" << to_string(newBalance) << endl << endl;

	cout << "Symbol" << '\t' << "Company" << setw(30) << "Number" << '\t' << "Price" << '\t' << "Total" << endl;

	string newline = Action + '\t' + '\t' + deposit + '\t' + '\t' + to_string(newBalance) + '\n';

	ofstream bankHistoryFile;
	bankHistoryFile.open("bank_transaction_history.txt", ios::app);
	bankHistoryFile << newline;
	bankHistoryFile.close();

	for(int j = 0; j < Stocks.size(); j++)
	{
		ifstream file(name2);
		string line;	

		stock_symbol = Stocks[j].StockSymbols;
		company = Stocks[j].CompanyNames;
		number = Stocks[j].numberOfShares;
		
		while(getline(file, line))
		{
			string delim = "\t";
			vector<string> tokens;
			if(line.find(stock_symbol) != string::npos)
			{	
				for (int i = 0; i < 3; i++)
				{
					if (i == 2)
					{
						line = line.substr(line.rfind(delim)+1, string::npos);
						line.resize(line.length()-1);

						tokens.push_back(line);
					}

					tokens.push_back(line.substr(0, line.find(delim)));
					line = line.substr(line.find(delim)+1, string::npos);
				}

				price = tokens[2];

				Total = stoi(Stocks[j].numberOfShares)*stod(tokens[2]);
				total = to_string(Total);

				TotalPortfolioValue = TotalPortfolioValue + Total;

				cout << stock_symbol << '\t' << company << '\t'  << number << '\t' << price << '\t' << total << endl;
			}
		}
	}
			
	file.close();

	cout << endl << "Total Portfolio value: $" << TotalPortfolioValue + newBalance << endl << endl;

}

void bankAccount::Withdraw(vector<Stock>& Stocks, bankAccount& bank_account)
{
	string stock_symbol, company, number, price, total, withdraw, Action = "Withdraw";

	double Total, TotalPortfolioValue = 0, newBalance;

	srand(time(NULL));
	int num = rand()%4 + 1;
	string name = "stock" + to_string(num) + ".txt";
	string name2 = "/home/jason/Repo/CPlusPlus_Basics/Projects/" + name;

	ifstream file(name2);
	string line;

	cout << endl;

	double w;

	cout << "Enter amount to be withdrawn: ";
	cin >> w;
	cout << endl;

	validInput(&w);

	if(Stocks.size() > 0)
	{
		int k = Stocks.size() - 1;
		bank_account.setBalance(Stocks[k].update);
	}

	withdraw = to_string(w);

	if(stod(withdraw) > bank_account.getBalance())
	{
		cout << "Invalid input" << endl << endl;
	}
	else
	{
		cout << "Withdraw $" << withdraw << " from the bank account" << endl << endl;

		newBalance = bank_account.getBalance() - stod(withdraw);
		
		bank_account.setBalance(newBalance);

		cout << "Cash Balance = $" << to_string(newBalance) << endl << endl;

		cout << "Symbol" << '\t' << "Company" << setw(30) << "Number" << '\t' << "Price" << '\t' << "Total" << endl;
		
		string newline = Action + '\t' + withdraw + '\t' + '\t' + to_string(newBalance) + '\n';

		ofstream bankHistoryFile;
		bankHistoryFile.open("bank_transaction_history.txt", ios::app);
		bankHistoryFile << newline;
		bankHistoryFile.close();

		for(int j = 0; j < Stocks.size(); j++)
		{
			ifstream file(name2);
			string line;	

			stock_symbol = Stocks[j].StockSymbols;
			company = Stocks[j].CompanyNames;
			number = Stocks[j].numberOfShares;
		
			while(getline(file, line))
			{
				string delim = "\t";
				vector<string> tokens;
				if(line.find(stock_symbol) != string::npos)
				{	
					for (int i = 0; i < 3; i++)
					{
						if (i == 2)
						{
							line = line.substr(line.rfind(delim)+1, string::npos);
							line.resize(line.length()-1);

							tokens.push_back(line);
						}

						tokens.push_back(line.substr(0, line.find(delim)));
						line = line.substr(line.find(delim)+1, string::npos);
					}

					price = tokens[2];

					Total = stoi(Stocks[j].numberOfShares)*stod(tokens[2]);
					total = to_string(Total);

					TotalPortfolioValue = TotalPortfolioValue + Total;

					cout << stock_symbol << '\t' << company << '\t'  << number << '\t' << price << '\t' << total << endl;
				}
			}
		}

			
		file.close();

		cout << endl << "Total Portfolio value: $" << TotalPortfolioValue + newBalance << endl << endl;
	}
}

void bankAccount::displayBankTransactionsHistory(vector<Stock>& Stocks, bankAccount& bank_account)
{
	cout << endl;

	cout << "Action" << '\t' << '\t' << "Amount" << '\t' << '\t' << "Cash Balance" << endl;

	ifstream bankHistoryFile("bank_transaction_history.txt");
	
	string line;
	
	while (getline(bankHistoryFile, line))
		cout << line << endl;

	bankHistoryFile.close();

	cout << endl;

}

void bankAccount::validInput(double* input_amount)
{	
	while(true)
	{
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << endl << endl << "Invalid input." << endl;
			cout << "Enter new number: ";
			cin >> *input_amount;
		}

		else
		{
			cin.ignore(1000, '\n');
			if(*input_amount < 0)
			{
				cout << endl << "Enter a positive number: ";
				cin >> *input_amount;
			}

			else if((*input_amount - floor((100**input_amount))/100.0) != 0)
			{
				cout << endl << "Enter a number with at most two "
				     << "decimal places: ";
				cin >> *input_amount;
			}

			else
				break;
		}
	}
}
