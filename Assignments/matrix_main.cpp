#include "matrix.h"

int main()
{
	Matrix m1(6, 6);
	Matrix m2(6,6);
	
	m1 = m2;

	cout << m1 << endl;

	return 0;
}
