#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x,y,z;
	int mystery;
	
	cout << "Please enter three numbers\n";
	cin >> x >> y >> z;
	mystery = x + y +z;
	mystery/=3;
	cout << "Mystery is " << mystery << endl;

	return 0;
}
