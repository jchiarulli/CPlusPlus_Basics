#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int *p, *q, *r, *s;

	p = new int;
	*p = 76;

	cout << *p << endl;

	r = new int[10];

	for(int i = 0; i < 10; i++)
		r[i] = 1;

	q = r;
	++q;
	s = q;
	++s;

	cout << *r << endl;
	cout << *q << endl;
	cout << *p << endl;
	cout << *s << endl;
	
	return 0;
}
