// Programming Methodoligies Lab (14:332:254)
//
// Laboratory 4
//
// Jason Chiarulli
//
// Section: 03
//
// 2/12/18
//

int gcd(int x, int y)
{
	int greatest = 1;

	for(int i = 2; i <= ((x < y) ? x : y); i++)
	{
		if(x % i == 0 && y % i == 0)
			greatest = i;
	}

	return greatest;
}
