// Student poll program.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

int printmax(int frequency[], int frequencysize)
{
	int max = 0, winner = 0;

	for(int i = 0; i < frequencysize; i++)
	{	if(frequency[i] > max)
		{
			max = frequency[i];
			winner = i;
		}
	}

	cout << "and the next apprentice is " << winner << endl;
}

int main()
{
	// define array sizes
	const int responseSize = 20;
	int votes[responseSize];	// size of array responses

	const int frequencySize = 11;	// size of array frequency

	// place survey responses in the array votes
	for(int i = 0; i < responseSize; i++)
	{
		cout << "Please enter the next vote" << endl;
		cin >> votes[i];
	}
	
	// initialize frequency counters to 0
	int frequency[frequencySize] = {0};

	// for each answer, select value of an element of array
	// responses and use that value as subscript in array
	// frequency to determine element to increment
	for(int answer = 0; answer < responseSize; answer++)
		++frequency[votes[answer]];

	// display results
	cout << "Rating" << setw(17) << "Frequency" << endl;

	// output frequencies in tabular format
	for (int rating = 1; rating < frequencySize; rating++)
		cout << setw(6) << rating
		     << setw(17) << frequency[rating] << endl;

	printmax(frequency, frequencySize);

	return 0;	// indicates successful termination		

} // end main
