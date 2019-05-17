#include <iostream>

using std::cout;
using std::endl;

int main()
{
	/*float i, x, *p, *q;

	p = &i;
	*p = 10.0;
	q = &x;
	*q = 8.6;

	cout << x << endl;
	cout << i << endl;

	*p = 9.5;
	p = q;
	q = &i;

	cout << *p << endl;
	cout << i << endl;
	cout << x << endl;
	cout << *q << endl;*/

	int *p, *q, *r, *s;
	int a, b, c, d[10];

	p = &a;
	q = &b;
	*q = 98;
	*p = 76;
	q = p;

	cout << *p << endl;
	cout << *q << endl;

	r = &d[0];

	for(int i = 0; i < 10; i++)
		r[i] = i;

	p = r;
	++p;
	s = p;
	++s;

	cout << *r << endl;
	cout << *q << endl;
	cout << *p << endl;
	cout << *s << endl;

	return 0;
}
