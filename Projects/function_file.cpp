// Jason Chiarulli
//
// RUID: 182001459
//
// Project 1
//
// 3/28/18
//

#include "header_file.h"

void menu(int *num){
	int select = 0;
	cout << "Welcome! Select options below:" << endl;
	cout << "\t1. Make new account."
	     << "\n\t2. Deposit to an account." 
	     << "\n\t3. Withdraw from an account."
	     << "\n\t4. Transfer money." 
	     << "\n\t5. Print Account." 
	     << "\n\t6. Activate/Deactivate an account." 
	     << "\n\t7. Delete an account."
	     << "\n\t8. Display all accounts."
	     << "\n\t9. Quit."
	     << endl;
	cout << "Selection:\t";

	cin >> select;
	*num = select;

}

void makeAccount(vector<Account>& newAccount)
{
	srand(time(0));

	int account_number = rand()%10000;
	unsigned int i = 0;
	int max_number_of_accounts = 10000;

	while(i < newAccount.size() && newAccount.size() != max_number_of_accounts)
	{
		if(newAccount[i].accountNumber == account_number)
		{
			account_number = rand()%10000;
			i = 0;
		}

		else
			i++;
	}

	string first_name, last_name;
	double starting_balance;

	if(newAccount.size() != max_number_of_accounts)
	{
		cout << endl << "Creating bank account number " << setw(4) << setfill('0')
		     << account_number << endl;
	
		cout << "Enter first name: ";
		cin >> first_name;

		cout << "Enter last name: ";
		cin >> last_name;

		cout << "Enter starting balance: ";
        	cin >> starting_balance;
		cout << endl;

		validInput(&account_number, &starting_balance);

		newAccount.push_back({account_number, last_name, first_name, 
				      starting_balance, true});
	}
	
	else
		cout << endl << "All account numbers have been used." << endl;	
}

void printAllAccounts(vector<Account>& Accounts)
{
	if(Accounts.size() > 0)
	{
		for(unsigned int i = 0; i < Accounts.size(); i++)
		{
			if(Accounts[i].active == true)
			{
				cout << endl << "Account number: " << setw(4) << setfill('0')
				     << Accounts[i].accountNumber 
		     	             << "\tBalance: " << setprecision(2) << fixed 
			             << Accounts[i].accountBalance << endl;
				cout << "\tLast name: " << Accounts[i].lastName
	 	     	             << "\tFirst name: " << Accounts[i].firstName << endl;
			}
		}
	}

	else
	{
		cout << endl << "No accounts exist." << endl;
	}

	cout << endl;
}

void printAccount(vector<Account>& Account)
{
	unsigned int i;
	int account_number;

	cout << endl << "Enter account number to print: ";
	cin >> account_number;
	cout << endl;

	validInput(&account_number, NULL);

	if(Account.size() > 0)
	{
		for(i = 0; i < Account.size(); i++)
		{
			if(Account[i].accountNumber == account_number)
			{
				if(Account[i].active == true)
				{
					cout << "Account number: " << setw(4) << setfill('0')
					     <<	account_number 
			     	     	     << "\tBalance: " << setprecision(2) << fixed
				    	     << Account[i].accountBalance << endl;
					cout << "\tLast name: " << Account[i].lastName
			     	             << "\tFirst name: " << Account[i].firstName << endl;
			
					break;	
				}


				else
				{
					cout << endl << "Account is not active. Process cannot be done!" 
			     	     	     << " First, you need to" << endl 
			     	     	      << "activate this account." << endl << endl;

					break;
				}
			}
		}
	
		if(Account[i].accountNumber != account_number)
		{
			cout << "Account number not found." << endl;
		}	
	}

	else
		cout << endl << "No accounts exist." << endl;

	cout << endl;
}

void transfer(vector<Account>& Account)
{
	int sender_account, receiver_account;
	double transfer_amount;
	
	if(Account.size() > 1)
	{
		cout << endl << "Enter account number for the sender: ";
		cin >> sender_account;

		validInput(&sender_account, NULL);

		int middle_sender, mid1 = -1, mid2 = -1, high_sender = Account.size() - 1, 
	    	low_sender = 0, middle_receiver, high_receiver = Account.size() - 1, 
	    	low_receiver = 0;

		while(low_sender <= high_sender)
		{
			middle_sender = (low_sender + high_sender)/2;

			if(sender_account == Account[middle_sender].accountNumber)
			{
				mid1 = middle_sender;
				break;
			}

			else
				if(sender_account < Account[middle_sender].accountNumber)
					high_sender = middle_sender - 1;

				else
					low_sender = middle_sender + 1;	
		}

		if(mid1 != middle_sender)
			cout << "Account number not found." << endl;
  		else
		{
			if(Account[middle_sender].active == true)
			{
				cout << endl << "Enter account number for the receiver: ";
				cin >> receiver_account;

				validInput(&receiver_account, NULL);
				
				if(sender_account != receiver_account)
				{
					while(low_receiver <= high_receiver)
					{
						middle_receiver = (low_receiver	+ high_receiver)/2;

						if(receiver_account == Account[middle_receiver].accountNumber)
						{
							mid2 = middle_receiver;
							break;
						}

						else
						
							if(receiver_account < Account[middle_receiver].accountNumber)
								high_receiver = middle_receiver - 1;

							else
								low_receiver = middle_receiver + 1;
					}

					if(mid2 != middle_receiver)
						cout << "Account number not found." << endl;

					else
					{
						if(Account[middle_receiver].active == true)
						{
							cout << endl << "Enter amount to be transferred: ";
							cin >> transfer_amount;
							cout << endl;

							validInput(&receiver_account, &transfer_amount);

							if(Account[mid1].accountBalance >= transfer_amount)
							{
								Account[middle_sender].accountBalance = Account[middle_sender].accountBalance - transfer_amount;

								Account[middle_receiver].accountBalance = Account[middle_receiver].accountBalance + transfer_amount; 
							}

							else
								cout << endl << "Insufficient funds!" << endl << endl;

						}

						else
							cout << endl << "Account is not active. Process cannot be done! First, you need to" 
							     << endl << "activate this account." << endl << endl;
					}

				}

				else
					cout << endl << "Must enter two different account numbers." << endl << endl;
			}

			else
			{
				cout << endl << "Account is not active. Process cannot be done! First, you need to" 
				     << endl << "activate this account." << endl << endl;
			}
		}			      
	}

	else
	{
		cout << endl << "Error: Need at least two accounts to perform a transfer." << endl;
	}	
}

void sortAccounts(vector<Account>& Accounts)
{
	int middle, high = Accounts.size() - 1, low = 0, index, i;
		
	while(low <= high)
	{
		middle = (low + high)/2;

		if(Accounts.back().accountNumber < Accounts[middle].accountNumber)
		{	
			high = middle - 1;
			index = middle;
		}	

		else
		{
			low = middle + 1;
			index = low;
		}	
	}	

	for(i = Accounts.size() - 1; i > index; i--)
	{
		swap(Accounts[i], Accounts[i - 1]);
	}
}

void depositAccount(vector<Account>& Account)
{
	int deposit_account;
	double deposit_amount;
	
	cout << endl << "Enter account number for deposit: ";
	cin >> deposit_account;

	validInput(&deposit_account, NULL);

	int middle, mid1 = -1, high = Account.size() - 1, low = 0;	
	
	while(low <= high)
	{
		middle = (low + high)/2;

		if(deposit_account == Account[middle].accountNumber)
		{
			mid1 = middle;
			break;
		}

		else
			if(deposit_account < Account[middle].accountNumber)
				high = middle - 1;

			else
				low = middle + 1;	
	}
			
	if(mid1 != middle)
	{
		cout << "Account number not found." << endl;
	}

	else
	{
		cout << "Enter amount to be deposited: ";
		cin >> deposit_amount;
		cout << endl;

		validInput(&deposit_account, &deposit_amount);



		if(Account[middle].active == true)
		{
			Account[middle].accountBalance = Account[middle].accountBalance 
					       	       + deposit_amount;
		}

		else
		{
			cout << endl << "Account is not active. Process cannot be done!" 
			     << " First, you need to" << endl 
			     << "activate this account." << endl << endl;
		}
	}
}

void withdrawAccount(vector<Account>& Account)
{
	int withdraw_account;
	double withdraw_amount;

	cout << endl << "Enter account number for withdrawal: ";
	cin >> withdraw_account;

	validInput(&withdraw_account, NULL);

	int middle, mid1 = -1, high = Account.size() - 1, low = 0;	
	
	while(low <= high)
	{
		middle = (low + high)/2;

		if(withdraw_account == Account[middle].accountNumber)
		{
			mid1 = middle;
			break;
		}

		else
			if(withdraw_account < Account[middle].accountNumber)
				high = middle - 1;

			else
				low = middle + 1;	
	}
			
	if(mid1 != middle)
	{
		cout << "Account number not found." << endl;
	}

	else
	{
		cout << "Enter amount to be withdrawn: ";
		cin >> withdraw_amount;
		cout << endl;

		validInput(&withdraw_account, &withdraw_amount);

		if(Account[middle].accountBalance >= withdraw_amount 
			&& Account[middle].active == true)

			Account[middle].accountBalance = Account[middle].accountBalance 
						       - withdraw_amount;
		else if(Account[middle].active == false)
			cout << endl << "Account is not active. Process cannot be done!" 
			     << " First, you need to" << endl 
			     << "activate this account." << endl << endl;
		else
			cout << "Insufficient funds!" << endl;
	}
}

void ActiveDeactive(vector<Account>& Account)
{
	bool account_status;
	int account_number;

	cout << endl << "Enter account number for activation/deactivation: ";
	cin >> account_number;

	validInput(&account_number, NULL);

	int middle, mid1 = -1, high = Account.size() - 1, low = 0;	
	
	while(low <= high)
	{
		middle = (low + high)/2;

		if(account_number == Account[middle].accountNumber)
		{
			mid1 = middle;
			break;
		}

		else
			if(account_number < Account[middle].accountNumber)
				high = middle - 1;

			else
				low = middle + 1;	
	}
			
	if(mid1 != middle)
	{
		cout << "Account number not found." << endl;
	}

	else
	{
		cout << "Press 1 to activate, 0 to deactivate: ";
		cin >> account_status;
		cout << endl;

		if(account_status == 1)
		{
			Account[middle].active = true;
		}

		else if(account_status == 0)
		{
			Account[middle].active = false;
		}
	}	
}

void deleteAccount(vector<Account>& Account)
{
	int account_number;

	cout << endl << "Enter account number to be deleted: ";
	cin >> account_number;

	validInput(&account_number, NULL);

	int middle, mid1 = -1, high = Account.size() - 1, low = 0;	
	
	while(low <= high)
	{
		middle = (low + high)/2;

		if(account_number == Account[middle].accountNumber)
		{
			mid1 = middle;
			break;
		}

		else
			if(account_number < Account[middle].accountNumber)
				high = middle - 1;

			else
				low = middle + 1;	
	}

	if(mid1 != middle)
	{
		cout << "Account number not found." << endl;
	}
	
	else
	{
		if(Account[middle].active == true)
		{
			Account.erase(Account.begin() + middle);
		}

		else
			cout << endl << "Account is not active. Process cannot be done!" 
			     << " First, you need to" << endl 
			     << "activate this account." << endl << endl;
	}
}

void validInput(int* account_number, double* input_amount)
{
	if(input_amount == NULL)
	{
		while(true)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << endl << endl << "Invalid input." << endl;
				cout << "Enter new number: ";
				cin >> *account_number;

			}
			else
			{
				cin.ignore(1000, '\n');
				if(*account_number < 0 || *account_number > 9999)
				{
					cout << endl << endl << "Invalid input." << endl;
					cout << "Enter new number: ";
					cin >> *account_number;
				}

				else
					break;
			}
		}
	}
	
	else
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
				if(*input_amount <= 0)
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
}
