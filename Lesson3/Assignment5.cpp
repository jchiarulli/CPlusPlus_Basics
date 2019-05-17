// Assignment5
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

void swap(int &, int &);

int main()
{	
	int n1, n2;

	cout << "Enter two integers ";
	cin >> n1 >> n2;
	
	swap(n1, n2);
	cout << n1 << " " << n2 << endl;
		
	
	return 0;
}

void swap(int &n1ref, int &n2ref)
{
	int temp;

	temp = n1ref;
	n1ref = n2ref;
	n2ref = temp;
}
