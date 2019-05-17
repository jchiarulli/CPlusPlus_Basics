#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int *p1 = new int[100];
	int *p2 = new int [200];

	for(unsigned int pos = 0; pos < 100; pos++)
		p2[pos] = p1[pos];

	delete []p1;
	p1 = p2;

	p2 = NULL;	// eliminate alias

	return 0;
}
