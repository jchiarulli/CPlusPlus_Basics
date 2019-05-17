#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix
{
	friend ostream &operator<<(ostream &, const Matrix &);

	public:
		Matrix(int = 10, int = 10);	// default constructor
		Matrix(const Matrix &);		// copy constructor
		int getRow() const;
		int getColumn() const;
		const Matrix &operator=(const Matrix &);

	private:
		int number_of_rows;
		int number_of_columns;
		int **ptr;
};

#endif
