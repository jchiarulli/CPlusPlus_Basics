#include <iostream>

using std::cout;
using std::cin;
using std::endl;
    
// contains prototypes for functions srand and rand
#include <cstdlib>
  
#include <cmath>
#include <ctime>

// main function begins program execution
int main()
{
	// RUID: 182001459
	float p = (1 + 4 + 5 + 9)/36.0 * 100.0, heads = 0, f;
	int n = 1;
	double randomNumber;
	
	cout << "p = " << p << endl << "round(p) = " << round(p) << endl;	

	srand(time(NULL));	
	for(int n = 1; n <= 100; n++)
	{
		randomNumber = 1 + rand() % 100;
		cout << randomNumber << endl;
		if(randomNumber <= /*static_cast<int>(round(p))*/p)
			heads++;
		
		cout << "Number of heads " << heads << endl;
		cout << "Number of tosses is " << n << endl;
		f = heads/n;
		cout << "f(n) = " << f << endl;
	} 

	//cout << heads << endl << tails << endl;

	return 0;	

} // end main
