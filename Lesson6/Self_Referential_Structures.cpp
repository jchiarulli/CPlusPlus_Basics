#include <iostream>

using std::cout;
using std::endl;

struct Beer
{
	char beername[10];
	Beer *nextbeer;		// Pointer to another structure
};

int main()
{
	Beer t1 = {"bud"};
	Beer t2 = {"miller"};
	Beer t3 = {"coors"};
	Beer *first;

	first = &t1;
	t1.nextbeer = &t2;
	t2.nextbeer = &t3;
	t3.nextbeer = NULL;	// sets pointer to zero

	cout << first->beername << " " << t1.nextbeer->beername << " "
	     << t2.nextbeer->beername << endl << endl;

	cout << first->beername << endl;
	first = first->nextbeer;

	cout << first->beername << endl;
	first = first->nextbeer;

	cout << first->beername << endl;
	first = first->nextbeer;

	return 0;
}
