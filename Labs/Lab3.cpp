// Programming Methodoligies Lab (14:332:254)
//
// Laboratory 3
//
// Jason Chiarulli
//
// Section: 03
//
// 2/5/18
//

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int i = 1, x = 0; 	// Declare three integers and initialize i to 1 and x
				// to 0
	double n;

	cout << "Please enter number: " << endl; // Prompt the user
	cin >> n;	 
	
	if(n == floor(n))
	{
		// Execute the loop while the value of i is less than the value of n
		while(i < static_cast<int>(n))
		{
			if(static_cast<int>(n) % i == 0) // Checks if the remainder is 0 
			{	
				x = x + i; // Adds the value of i to x
			}
		
			i++; // increments the value of i
		}
	
		// if x is equivalent to the number input by the user and the number 
		// inputted is not equivalent to 0 then the number is perfect otherwise 
		// the number is not perfect
		if(x == static_cast<int>(n) && n != 0) 
			cout << "The number is perfect." << endl; 
		else
			cout << "The number is not perfect." << endl;
	}

	else
		cout << "The number is not perfect." << endl;

	return 0;
}
