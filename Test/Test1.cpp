#include <iostream>

using std::cout;
using std::endl;

void f(int x[])
{
	x[1] += 1;
}

void g(int x)
{
	x += 2;
}

int sum(int x=1, int y=2, int z=3)
{
	return x+y+z;
}

int main()
{
	int y = sum(4,5);
	cout << y << endl;

	/*int k = 1200;
	int n = 0, l = 0;

	do {
		k/=2;
		n+=2;
		l++;
	} while (k>1);

	cout << n << endl;
	cout << l << endl;*/

	int x[2] = {4, 5};
	f(x);
	g(x[1]);
	cout << x[1] << endl;

	int a[2][3] = {{1, 4, 6}, {2, 5, 7}};
	cout << a[1][1];

	/*int n = 6;
	for(int i = 0; i < n; i+=2)
		for(int j=n; j >i; j-=2)
			cout << "The" << endl;*/
	
	return 0;
}
