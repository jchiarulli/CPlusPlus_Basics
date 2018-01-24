//File Name: Final
//Author: Jason Chiarulli
//Email: jasonchiarulli123456@gmail.com
//Fall 2014 CSC121 FINAL EXAM
//Description:  Final


#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cstddef>

using namespace std;

typedef double* DoubleArrayPtr;
ifstream in_stream;
ofstream out_stream;
char in_file_name[16];

void getData(double a[], int declared_size, int& number_used);
//Pre-condition: The size of array a is declared_size.
//Postcondition: number_used is the number of values stored in a.
//a[0] through a[number_used -1] have been filled with temperatures that are doubles and nonnegative
//and have been read in from a file.
void sort(double a[], int number_used); //OPTIONAL
//Pre-condition: number_used <= declared size of the array a.
//The array elements a[0] through a[number_used - 1] have values.
//Post-condition: The values of a[0] through a[number_used - 1] have
//been rearranged so that a[0] <= a[1] <= ... <= a[number_used - 1].
void swap_values(double& v1, double& v2);
//Interchanges the values of v1 and v2.
void index_of_smallest(double a[], int start_index, int number_used, int& index_of_min);
//Precondition: 0 <= start_index < number_used. Referenced array elements have
//values.
//Postcondition: the index i such that a[i] is the smallest of the values
//a[start_index], a[start_index + 1], ... , a[number_used - 1].
void dis(double a[], int number_used);
//Precondition: the array has been filled and sorted in ascending order.
//Postcondition: the index of each array element and the value stored in 
//the element have been outputted to the screen and to a file.

int main()
{
	int declared_size, number_used;

	cout << "This program accepts 10 temperatures from a file\n" << "- enters them into an array\n"
		<< "- (optional) sorts the array in ascending order and\n" << "- outputs the temps >= 98.6\n";

	cout << "How many temperatures will be sorted? ";
	cin >> declared_size;
	
	DoubleArrayPtr a;
	a = new double[declared_size];

	cout << "Enter an input file name." << endl;
	cin >> in_file_name;

	in_stream.open(in_file_name);
	if(in_stream.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}
	
	out_stream.open("output.txt");
	if(out_stream.fail())
	{
		cout << "Output file opening failed.\n";
		exit(1);
	}
	
	out_stream << "This program accepts 10 temperatures from a file\n" << "- enters them into an array\n"
		<< "- (optional) sorts the array in ascending order and\n" << "- outputs the temps >= 98.6\n";
	
	getData(a, declared_size, number_used);
	sort(a, number_used);
	dis(a, number_used);

	in_stream.close();
	out_stream.close();

	system("pause");
	delete [] a;
	return 0;
}

void getData(double a[], int declared_size, int& number_used)
{
	double next;
	int index = 0;
	in_stream >> next;
	while((! in_stream.eof()) && (index < declared_size))
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
	for(int index = start_index + 1; index < number_used; index++)
		if(a[index] < min)
		{
			min = a[index];
			index_of_min = index;
		}
}

void dis(double a[], int number_used)
{
	out_stream << "In sorted order the temperatures are: \n";
	cout << "In sorted order the temperatures are: \n";
	for(int index = 0; index < number_used; index++)
	{
		out_stream << "[" << index << "] " << a[index] << " ";
	    out_stream << endl;
	    cout << "[" << index << "] " << a[index] << " ";
	    cout << endl;
	}
	
	out_stream << "Temperatures >= 98.6: \n";
	cout << "Temperatures >= 98.6: \n";
	for(int index = 0; index < number_used; index++)
	{
		if(a[index] >= 98.6)
		{
			out_stream << "[" << index << "] " << a[index] << " ";
			out_stream << endl;
		    cout << "[" << index << "] "<< a[index] << " ";
	        cout << endl;
		}
	}

}