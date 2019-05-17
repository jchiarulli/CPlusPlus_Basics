// Programming Methodologies Lab (14:332:254)
//
// Laboratory 5
//
// Jason Chiarulli
//
// Section: 03
//
// 2/19/18
//

#include <iostream>

using std::cout;
using std::ios;

#include <iomanip>

using std::setw;
using std::setprecision;
using std::fixed;
using std::showpoint;

#include <cstdlib>

using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
	const long ROLLS = 36000;
	const int SIZE = 13;

	double expected[SIZE] = {0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};

	int x;
	int y;
	int sum;

	int array_sum[SIZE];

	for(int k = 0; k < SIZE; k++)
		array_sum[k] = 0;

	srand(time(0));

	for(long int i = 1; i <= ROLLS; i++)
	{
		x = rand() % 6 + 1;
		y = rand() % 6 + 1;
		sum = x + y;
		array_sum[sum]++;
	}

	cout << setw(10) << "Sum" << setw(10) << "Total" << setw(10)
	     << "Expected" << setw(10) << "Actual\n" << fixed << showpoint;

	for(int j = 2; j < SIZE; j++)
	{
		cout << setw(10) << j << setw(10) << array_sum[j]
		     << setprecision(3) << setw(9)
		     << 100.0 * expected[j]/36 << "%" << setprecision(3)
		     << setw(9) << 100.0 * array_sum[j]/36000 << "%\n";
	}

	return 0;
}

// The resluts are reasonable since the probabilities of the expected results are close to the
// probabilities of the actual results.
