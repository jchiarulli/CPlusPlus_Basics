#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int *p1 = new int;
	double *p2 = new double[1000];

	for(int i = 0; i < 1000; i++)
	{	
		p2[i] = 2*i;
		//cout << p2[i] << endl;
	}

	//p2 = p1;	// Now the array is lost
	
	delete p1;
	delete []p2;

	return 0;
}
