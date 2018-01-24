//Project 19

#include <iostream>
	using namespace std;
int main ( )
{
	
	int number_of_exercises, score_received, total_points_possible;
	
	
	cout << "How many exercises to input? ";
	cin >> number_of_exercises;
		
		while (number_of_exercises > 0)
		{
			cout << "Score received for exercise : ";
			cin >> score_received;
				
			cout << "Total points possible for exercise : ";
			cin >> total_points_possible;
			
			number_of_exercises = number_of_exercises - 1;
		}

		return 0;
}