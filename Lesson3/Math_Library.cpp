#include <iostream> 
#include <cmath>

// All functions in the math library return a double

using std::cout;
using std::endl;

int main()
{
	int x = 8;
	double y = 0.5;

	cout << sqrt(900.0) << endl;

	cout << sqrt(4) << endl;

	cout << sqrt(x) << endl;

	cout << sqrt(sqrt(x)) << endl;

	cout << sqrt(3 - 6 * x) << endl;

	cout << sqrt(3 - 6* y) << endl;

	cout << ceil(y) << endl;

	cout << cos(y) << endl;

	cout << exp(y) << endl;

	cout << fabs(y) << endl;

	cout << floor(y) << endl;

	cout << fmod(x, y) << endl;

	cout << log(x) << endl;

	cout << log10(x) << endl;

	cout << pow(x, y) << endl;

	cout << sin(x) << endl;

	cout << sqrt(x) << endl;

	cout << tan(x) << endl;

	return 0;
}
