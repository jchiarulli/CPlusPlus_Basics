
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstddef>

using namespace std;

typedef double* DoubleArrayPtr;
//const int declared_size = 20;
ifstream in_stream;
ofstream out_stream;
char in_file_name[16], out_file_name[16];

void getData(double a[], int size);
//Pre-condition: 
//Post-condition: 

void sortData(double a[], int total); //OPTIONAL
//Pre-condition: 
//Post-condition: 

void swap_values(double& v1, double& v2);
//Interchanges the values of v1 and v2.

void index_of_smallest(double a[], int start_index, int number_used, int& index_of_min);
//Precondition: 0 <= start_index < number_used. Referenced array elements have 
//values.
//Postcondition: the index i such that a[i] is the smallest of the values
//a[start_index], a[start_index + 1], ..., a[number_used - 1].

void search(double a[], int number_used, double target, double& t);
//Precondition: number_used <= declared size of the array a.
//The array elements a[0] through a[number_used - 1] have values.
//Postcondition: the first index such that a[index] == target,
//provided there is such an index; otherwise, t = -1.

int main( )
{	int number_used, declared_size;
	double total = 0, average, max, min, target, t;
	char ans;
	cout << "This program sorts numbers from highest to lowest.\n";
	cout << "How many numbers will be sorted? ";
	cin >> declared_size;
	
	DoubleArrayPtr a;
	a = new double[declared_size];

	cout << "Enter an input file name." << endl;
	cin >> in_file_name;
	cout << "Enter an output file name." << endl;
	cin >> out_file_name;
	
	in_stream.open(in_file_name);
	if(in_stream.fail())
	{
		cout<< "Input file opening failed.\n";
		exit(1);
	}

	out_stream.open(out_file_name);
	if(out_stream.fail())
	{
		cout<< "Input file opening failed.\n";
		exit(1);
	}
    out_stream.setf(ios::fixed);
	out_stream.setf(ios::showpoint);
	out_stream.precision(2);

	fill_array(a, declared_size, number_used);
    sort(a, number_used);

    out_stream << "In sorted order the numbers are:\n";
    for (int index = 0; index < number_used; index++)
        out_stream << a[index] << " ";
    out_stream << endl;

	for(int index = 0; index < number_used; index++)
			{
				in_stream >> a[index];
				total += a[index];

			} average = total/number_used;

	out_stream << "The average of the numbers is " << average << endl;

	max = a[0];
	min = a[0];
	for(int index = 0; index < number_used; index++)
	{
		if(a[index] > max)
		{
			max = a[index];
		}
		if(a[index] < min)
		{
			min = a[index];
		}
	}

	out_stream << "The max number is " << max << endl;
	out_stream << "The min number is " << min << endl;

	do
	{
		cout << "Enter a number to search for: ";
		cin >> target;
		search(a, declared_size, target, t);
		if(t == -1)
			cout << target << " is not on the list.\n";
		else
			out_stream << target << " is stored in array position " << t << endl 
			<< "(Remember: The first position is 0.)\n";

		cout << "Search again?(y/n followed by Return): ";
		cin >> ans;
	}while((ans != 'n') && (ans != 'N'));

	in_stream.close();
	out_stream.close();

	system("pause");
	delete [] a;
    return 0;
}

void fill_array(double a[], int declared_size, int& number_used)
{
    //cout << "Enter up to " << declared_size << " nonnegative whole numbers.\n"
         //<< "Mark the end of the list with a negative number.\n";
    double next;
	int index = 0;
    in_stream >> next;
	while(( ! in_stream.eof()) && (index < declared_size))
	{ 
			a[index] = next;
			index++;
			in_stream >> next;
	}
		
    number_used = index;
}

void sort(double a[], int number_used)
{
    int index_of_min;


    for (int index = 0; index < number_used - 1; index++)
    {
        index_of_smallest(a, index, number_used, index_of_min);
        swap_values(a[index], a[index_of_min]);
    }
}


void swap_values(double& v1, double& v2)
{
    double temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}


void index_of_smallest(double a[], int start_index, int number_used, int& index_of_min)
{
    double min = a[start_index];
       index_of_min = start_index;
    for (int index = start_index + 1; index < number_used; index++)
        if (a[index] > min)
        {
            min = a[index];
            index_of_min = index;
        }

}

void search(double a[], int number_used, double target, double& t)
{
	int index = 0;
	bool found = false;
	while((!found) && (index < number_used))
		if(target == a[index])
			found = true;
		else
			index++;
	if(found)
		t = index;
	else
		t = -1;
}
