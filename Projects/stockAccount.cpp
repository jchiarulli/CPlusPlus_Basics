#include "Account.h"
#include "stockAccount.h"
#include "bankAccount.h"
#include <fstream>
#include <ctime>
#include <iomanip>

stockAccount::stockAccount(double accountBalance)
{
		cashBalance = accountBalance;
}

void stockAccount::stockAccountMenu(int *num)
{
	int select;

	cout << "Please select an option" << endl;
	cout << "\t1. Display current price for a stock symbol"
             << "\n\t2. Buy stock"
	     << "\n\t3. Sell stock"
	     << "\n\t4. Display current portfolio"
	     << "\n\t5. Display transactions history"
	     << "\n\t6. Return to main menu"
	     << "\n\tYour selection: ";
	
	cin >> select;
	*num = select;	
		
	cout << endl;
}

void stockAccount::printCurrentStockPrice()
{
	string stock_symbol;

	cout << endl << "Enter the stock symbol for checking price: ";
	cin >> stock_symbol;
	
	srand(time(NULL));
	int num = rand()%4 + 1;
	string name = "stock" + to_string(num) + ".txt";
	string name2 = "/home/jason/Repo/CPlusPlus_Basics/Projects/" + name;

	ifstream file(name2);
	string line;
	string line1;
	
	bool check = false;
	
	while(getline(file, line))
	{
		line1 = line;
		string delim = "\t";
		vector <string> tokens;
			
		for (int i = 0; i < 3; i++)
		{
			if (i == 2)
			{
				line = line.substr(line.rfind(delim)+1, string::npos);
					line.resize(line.length()-1);

				tokens.push_back(line1);
			}

			tokens.push_back(line.substr(0, line.find(delim)));
			line = line.substr(line.find(delim)+1, string::npos);
		}
	
		if(stock_symbol == tokens[0])
		{
			cout << endl << line1 << endl << endl;		

			check = true; 
		}
	}

	if(check == false)
		cout << endl << stock_symbol << " is not available." << endl << endl;

	file.close();
}

void stockAccount::buyStock(vector<Stock>& Stocks, stockAccount& stock_account)
{
	string stock_symbol, number_of_shares, price, Action = "Buy";

	cout << endl << "Enter buy options: ";
	cin >> stock_symbol;
	cin >> number_of_shares;
	cin >> price;
	cout << endl;
	
	double Price = stod(price);

	int NumberOfShares = stoi(number_of_shares);

	double total = Price*NumberOfShares;

	double total1;

	srand(time(NULL));
	int num = rand()%4 + 1;
	string name = "stock" + to_string(num) + ".txt";
	string name2 = "/home/jason/Repo/CPlusPlus_Basics/Projects/" + name;

	ifstream file(name2);
	string line;
	string line1;
	
	bool check = false;
	
	while(getline(file, line))
	{
		line1 = line;
		string delim = "\t";
		vector <string> tokens;
			
		for (int i = 0; i < 3; i++)
		{
			if (i == 2)
			{
				line = line.substr(line.rfind(delim)+1,string::npos);
				line.resize(line.length()-1);

				tokens.push_back(line);
			}

			tokens.push_back(line.substr(0, line.find(delim)));
			line = line.substr(line.find(delim)+1, string::npos);
		}

		if(stock_symbol == tokens[0])
		{		
			check = true; 

			double tokenPrice = stod(tokens[2]);
			
			total1 = tokenPrice*NumberOfShares;	
			
			if(Price >= tokenPrice && stock_account.getBalance() >= total)
			{
				double updatedBalance = stock_account.getBalance() - total;

				stock_account.setBalance(updatedBalance);
					
				bool checkIfStockExists = false;

				for(int j = 0; j < Stocks.size(); j++)
				{
					if(Stocks[j].StockSymbols == stock_symbol)
					{
						checkIfStockExists = true; 
						
						int newShares = stoi(Stocks[j].numberOfShares) + NumberOfShares;
						
						double newTotal = newShares*stod(tokens[2]); 
						
						Stocks[j].numberOfShares = to_string(newShares);
						Stocks[j].StockPrices = tokens[2];
						Stocks[j].Totals = to_string(newTotal);
						Stocks[j].update = updatedBalance; 
					}
				}

				if(checkIfStockExists == false)
					Stocks.push_back({stock_symbol, tokens[1], number_of_shares, tokens[2], to_string(total1), updatedBalance});
				
				string newline = Action + '\t' + stock_symbol + '\t' + number_of_shares + '\t' + tokens[2] + '\n';
				
				ofstream stockHistoryFile;
				stockHistoryFile.open("stock_transaction_history.txt", ios::app);
				stockHistoryFile << newline;
				stockHistoryFile.close();
			}

			else if(Price < tokenPrice)
			{
				cout << "Cannot process transaction" << endl << endl;
			}

			else if(stock_account.getBalance() < total)
			{
				cout << "Insufficient funds" << endl << endl;
			}
		}	
	}
	
	if(check == false)
		cout << endl << stock_symbol << " is not available." << endl << endl;

	file.close();
}

void stockAccount::sellStock(vector<Stock>& Stocks, stockAccount& stock_account)
{
	string stock_symbol, number_of_shares, price, Action = "Sell";

	cout << endl << "Enter selling options: ";
	cin >> stock_symbol;
	cin >> number_of_shares;
	cin >> price;
	cout << endl;

	double Price = stod(price);

	int NumberOfShares = stoi(number_of_shares);

	double total = Price*NumberOfShares;	

	srand(time(NULL));
	int num = rand()%4 + 1;
	string name = "stock" + to_string(num) + ".txt";
	string name2 = "/home/jason/Repo/CPlusPlus_Basics/Projects/" + name;

	ifstream file(name2);
	string line;
	string line1;
	
	bool check = false;
	
	while(getline(file, line))
	{
		line1 = line;
		string delim = "\t";
		vector <string> tokens;
			
		for (int i = 0; i < 3; i++)
		{
			if (i == 2)
			{
				line = line.substr(line.rfind(delim)+1,string::npos);
				line.resize(line.length()-1);

				tokens.push_back(line);
			}

			tokens.push_back(line.substr(0, line.find(delim)));
			line = line.substr(line.find(delim)+1, string::npos);
		}

		if(stock_symbol == tokens[0])
		{
			check = true;

			for(int j = 0; j < Stocks.size(); j++)
			{
				if(Stocks[j].StockSymbols == tokens[0])
				{	
					check == false;		
					double tokenPrice = stod(tokens[2]);
					int newShares = stoi(Stocks[j].numberOfShares) - NumberOfShares;
					double total1 = tokenPrice*newShares; 

					if(Price <= tokenPrice && NumberOfShares <= stoi(Stocks[j].numberOfShares))
					{	
						Stocks[j].numberOfShares = to_string(newShares);
						Stocks[j].StockPrices = tokens[2];
						Stocks[j].Totals = to_string(total1);
							
						string newline = Action + '\t' + stock_symbol + '\t' + number_of_shares + '\t' + tokens[2] + '\n';
				
						ofstream stockHistoryFile;
						stockHistoryFile.open("stock_transaction_history.txt", ios::app);
						stockHistoryFile << newline;
						stockHistoryFile.close();

						double updatedBalance = stock_account.getBalance() + total;
						stock_account.setBalance(updatedBalance);
						Stocks[j].update = updatedBalance;
						
						break;
					}

					else if(NumberOfShares > stoi(Stocks[j].numberOfShares))
					{
						cout << "Insufficient shares" << endl << endl;
					}

					else if(Price > tokenPrice)
					{
						cout << "Cannot process transaction" << endl << endl;
					}
				}

				else if(check == true && j == Stocks.size() -1)
				{
					cout << stock_symbol << " was not found in your portfolio." << endl << endl;
				}
			}
		}	
	}
	
	if(check == false)
		cout << stock_symbol << " is not available." << endl << endl;

	file.close();
}

void stockAccount::displayCurrentPortfolio(vector<Stock>& Stocks, stockAccount& stock_account)
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

	cout << "Cash Balance = $" << stock_account.getBalance() << endl << endl;

	cout << "Symbol" << '\t' << "Company" << '\t' << '\t' << '\t' << '\t' << '\t' << '\t' << "Number" << '\t' << "Price" << '\t' << "Total" << endl;


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

				cout << stock_symbol << '\t' << company << '\t'  << '\t' << '\t' << '\t' << number << '\t' << price << '\t' << total << endl;
			}
		}
	}
			
	file.close();

	cout << endl << "Total Portfolio value: $" << TotalPortfolioValue + stock_account.getBalance() << endl << endl;
	
}

void stockAccount::displayTransactionsHistory()
{
	cout << endl;

	cout << "Action" << '\t' << "Symbol" << '\t' << "Shares" << '\t' << "Price" << endl;

	ifstream stockHistoryFile("stock_transaction_history.txt");
	
	string line;
	
	while (getline(stockHistoryFile, line))
		cout << line << endl;

	stockHistoryFile.close();

	cout << endl;
}
