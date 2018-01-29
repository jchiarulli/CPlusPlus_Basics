#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int k = 7;
	int g = 2;
	
	cout << "k = " << k << endl << "g = 2" << endl;
	
	k = g;

	cout << "k = g = " << g << endl;

        g = g + 1;

	cout << "g = g + 1 = " << g << endl;
	
	k = ++g; 
	
	cout << "k = " << k << endl;

	k = g++;
	
	cout << "k = " << k << endl;
	
	int z = 10;
	int v = z--;
	int count = 10;
	int i = count++;

	cout << v << '\t' << z << endl;
	cout << i << '\t' << count << endl;
	
	z = 10;
	v = --z;
	count = 10;
	k = ++count;

	cout << v << "\t" << z << endl;
	cout << k << "\t" << count << endl << endl;

	int cnt = 10, guess = 11;

	cout << cnt++ << '\n';
	cout << cnt << endl;
	cout << (cnt++==guess) << '\n';
	cout << cnt << endl;
	cout << cnt++ << endl;
	cout << cnt << endl << endl;
	
	int j = 5;
	cout << j++ << endl;
	cout << ++j << endl;
	cout << (j +=1) << endl;
	cout << (j = j + 14) << endl;
	cout << (j+=14) << endl;
	cout << (j/=10) << endl;
	cout << (j*=10) << endl;
	cout << (j-=6) << endl;
	cout << (j=5)+j << endl;
	cout << (j==5)+j << endl;

	return 0;
}
