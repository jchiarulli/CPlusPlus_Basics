#ifndef COMPLEXTYPE_H
#define COMPLEXTYPE_H

#include <iostream>

using namespace std;

class complexType
{
	friend ostream &operator<<(ostream&, const complexType&);
	friend istream &operator>>(istream&, complexType&);

	public:
		void setComplex(const double&, const double&);
		void getComplex(double&, double&) const;
		complexType(double real = 0, double imag = 0);
		complexType operator+(const complexType&) const;
		complexType operator*(const complexType&) const;
		bool operator==(const complexType&) const;
	
	private:
		double realPart;
		double imaginaryPart;
};

#endif
