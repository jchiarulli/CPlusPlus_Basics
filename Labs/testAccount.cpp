// Programming Methodologies Lab (14:332:254:03)
//
// Lab Instructor: Kazem Cheshmi
//
// Date Performed: 4/16/18 
//
// Date Submitted: 4/16/18
//
// Submitted by: Jason Chiarulli, RUID: 182001459
//

#include <iostream>

using std::cout;

#include "Account.h"

#include "SavingsAccount.h"

int main()
{
	// 1.
	Account A1(1.89);
	SavingsAccount SA1(7.67);

	// 2.
	A1.credit(10.55);
	SA1.credit(2.65);

	// 3.
	A1.credit(5.55);
	SA1.credit(3.85);

	// 4.
	A1.debit(5.35);
	SA1.debit(3.45);

	// 5.
	cout << "The interest for the savings account is " << SA1.calculateInterest() << "\n";

	// 6.
	cout << "The current balance for the account is " << A1.getBalance() << "\n";
	cout << "The current balance for the savings account is " << SA1.getBalance() << "\n";
	
	return 0;
}
