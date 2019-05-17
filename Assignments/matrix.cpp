#include "matrix.h"

Matrix::Matrix(int rows, int columns)
{
	number_of_rows = rows;
	number_of_columns = columns;

	ptr = new int*[rows];

	for(int i = 0; i < rows; i++)
		ptr[i] = new int[columns];

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			ptr[i][j] = 0;
		}
	}
}

Matrix::Matrix(const Matrix &arrayToCopy)
{
	number_of_rows = arrayToCopy.number_of_rows;
	number_of_columns = arrayToCopy.number_of_columns;
	ptr = new int*[number_of_rows];

	for(int i = 0; i < number_of_rows; i++)
	{
		ptr[i] = new int[number_of_columns];
	}

	for(int i = 0; i < number_of_rows; i++)
	{
		for(int j = 0; j < number_of_columns; j++)
		{
			ptr[i][j] = arrayToCopy.ptr[i][j];
		}
	}
}

int Matrix::getRow() const
{
	return number_of_rows;
}

int Matrix::getColumn() const
{
	return number_of_columns;
}

const Matrix &Matrix::operator=(const Matrix &right)
{
	if(&right != this)
	{
		for(int i = 0; i < number_of_rows; i++)
		{
			for(int j = 0; j < number_of_columns; j++)
			{
				ptr[i][j] = right.ptr[i][j];
			}
		}
	}

	return *this;
}

ostream &operator<<(ostream &output, const Matrix &a)
{
	for(int i = 0; i < a.getRow(); i++)
	{
		for(int j = 0; j < a.getColumn(); j++)
		{
			output << a.ptr[i][j] << "\t";
		}

		output << "\n";
	}

	return output;
}
