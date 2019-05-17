#include "complexType.h"

ostream &operator<<(ostream &out, const complexType &complex)
{
	out << "(";
	out << complex.realPart;
	out << ", ";
	out << complex.imaginaryPart;
	out << ")";
	
	return out;
}

istream &operator>>(istream &in, complexType &complex)
{
	char ch;
	in >> ch;
	in >> complex.realPart;
	in >> ch;
	in >> complex.imaginaryPart;
	in >> ch;

	return in;
}

bool complexType::operator==(const complexType &other) const
{
	return (realPart == other.realPart && imaginaryPart == other.imaginaryPart);
}

complexType::complexType(double real, double imag)
{
	realPart = real;
	imaginaryPart = imag;
}

void complexType::setComplex(const double &real, const double &imag)
{
	realPart = real;
	imaginaryPart = imag;
}

void complexType::getComplex(double &real, double &imag) const
{
	real = realPart;
	imag = imaginaryPart;
}

complexType complexType::operator+(const complexType &other) const
{
	complexType temp;
	temp.realPart = realPart + other.realPart;
	temp.imaginaryPart = imaginaryPart + other.imaginaryPart;
	return temp;
}

complexType complexType::operator*(const complexType &other) const
{
	complexType temp;
	temp.realPart = (realPart * other.realPart) - (imaginaryPart * other.imaginaryPart);
	temp.imaginaryPart = (realPart * other.imaginaryPart) 
		+ (imaginaryPart + other.realPart);
	return temp;
}
