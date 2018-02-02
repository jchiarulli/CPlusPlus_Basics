// Jason Chiarulli
//
// RUID: 182001459
//
// Assignment 4
//
// 2/2/18

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int roll(int);

int main()
{
	int result;

	if(roll(result) == 1)
		cout << "The result was 1" << endl << "Player 1 Wins!" << endl;
	else if(roll(result) == 2)
		cout << "The result was 2" << endl << "Player 2 Wins!" << endl;
	else
		cout << "The result was 0" << endl << "It's a tie!" << endl;	
		
	return 0;
}

int roll(int x)
{
	srand(time(NULL));
	int player1 = rand() % 6 + 1;
	int player2 = rand() % 6 + 1;

	if(player1 > player2)
	{

		return 1;
	}
	else if(player2 > player1)
	{
		return 2;
	}
	else
		return 0;
}
