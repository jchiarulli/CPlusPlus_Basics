// Jason Chiarulli
//
// RUID: 182001459
//
// Project 1
//
// 3/28/18
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

void menu(int*);

struct Account 
{
	int accountNumber;
	string lastName;
	string firstName;
	double accountBalance;
	bool active;
};

void makeAccount(vector<Account>&);

void printAccount(vector<Account>&);

void transfer(vector<Account>&);

void printAllAccounts(vector<Account>&);

void depositAccount(vector<Account>&);

void ActiveDeactive(vector<Account>&);

void withdrawAccount(vector<Account>&);

void sortAccounts(vector<Account>&); // sort the accounts using the account numbers

void deleteAccount(vector<Account>&);

void validInput(int*, double*);
