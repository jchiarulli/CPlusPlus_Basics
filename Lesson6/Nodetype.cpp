#include <iostream>

using std::cout;
using std::endl;

struct nodetype
{
	int el;
	nodetype *next;
};

int main()
{
	nodetype *p, *q, x, y, z;
	
	p = &x;
	p->el = 4;
	q = &y;
	q->el = 7;
	q->next = NULL;
	p->next = q;

	cout << p->el << endl;
	cout << q->el << endl;
	p = p->next;
	cout << p->el << endl;
	
	return 0;
}
