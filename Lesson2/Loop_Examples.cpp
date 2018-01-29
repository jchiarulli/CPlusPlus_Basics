#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int sum = 0, cnt = 1, n = 10;

	do
	{
		sum += cnt;
		cnt++;
	}while(cnt <= n);

	cout << "cnt = " << cnt << endl << "sum = " << sum << endl << endl;

	sum = 0, cnt = 1, n = 10;

	while(cnt <= n)
	{
		sum += cnt;
		cnt++;
	}

	cout << "cnt = " << cnt << endl << "sum = " << sum << endl << endl;

	sum = 0;
	int count;

	for(count = 1; count <= n; count++)
		sum += count;

	cout << "count = " << count << endl << "sum = " << sum << endl << endl;
	
	int n1, n2;

	cout << "Enter two integers ";
	cin >> n1;
	cin >> n2;

	for(int I = 0; I < n1; I++)
		for(int j = 0; j < n2; j++)
			cout << "Hi" << endl;

	int k;

	cout << "Please type in a number ";
	cin >> k;

	do
	{
		cout << "Hi" << endl;
		k = k/2;
	} while(k > 1);
		
	return 0;
}
