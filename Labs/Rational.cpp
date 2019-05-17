#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <cmath>

#include "Rational.h"

int gcd(int numerator, int denominator)
{
	int greatest = 1;

	for(int i = 2; i <= ((numerator < denominator) ? numerator : denominator); i++)
	{
		if(numerator % i == 0 && denominator % i == 0)
			greatest = i;
	}

	return greatest;
}

Rational::Rational(int num, int den)
{
	setNumerator(num);
	setDenominator(den);
}

void Rational::setNumerator(int a)
{
	numerator = a;
}

void Rational::setDenominator(int b)
{
	if(b != 0)
		denominator = b;
	else
	{
		while(b == 0)
		{
			cout << "Error: Divide by 0" << endl;
			cout << "Enter a nonzero integer: ";
			cin >> b;
			denominator = b; 
		}
	}
}

void Rational::add(Rational r1, Rational r2)
{
	Rational r3;

	if(r1.denominator == r2.denominator)
	{
		r3.numerator = r1.numerator + r2.numerator;
	        r3.denominator = r1.denominator;
	}
	else
	{
		r3.numerator = r1.numerator * r2.denominator + r2.numerator * r1.denominator;
	        r3.denominator = r1.denominator * r2.denominator;  	
	}
	
	int greatest_common_divisor = gcd(abs(r3.numerator), abs(r3.denominator));

	int numerator = r3.numerator/greatest_common_divisor;
	int denominator = r3.denominator/greatest_common_divisor;

	if(numerator != denominator)
		cout << "r1 + r2 = " << numerator << "/" << denominator << endl;
	else
		cout << "r1 + r2 = " << numerator << endl;
}

void Rational::subtract(Rational r1, Rational r2)
{
	Rational r3, r4;

	if(r1.denominator == r2.denominator)
	{
		r3.numerator = r1.numerator - r2.numerator; 
		r3.denominator = r1.denominator;

		r4.numerator = r2.numerator - r1.numerator;
		r4.denominator = r1.denominator;
	}
	else
	{	
		r3.numerator = r1.numerator * r2.denominator - r2.numerator * r1.denominator;
		r3.denominator = r1.denominator * r2.denominator;

		r4.numerator = r2.numerator * r1.denominator - r1.numerator * r2.denominator;
		r4.denominator = r1.denominator * r2.denominator;
	}

	int greatest_common_divisor = gcd(abs(r3.numerator), abs(r3.denominator));

	int numerator = r3.numerator/greatest_common_divisor;
	int denominator = r3.denominator/greatest_common_divisor;

	if(numerator != denominator)
		cout << "r1 - r2 = " << numerator << "/" << denominator << endl;
	
	else
		cout << "r1 - r2 = " << numerator << endl;

	numerator = r4.numerator/greatest_common_divisor;
	denominator = r4.denominator/greatest_common_divisor;

	if(numerator != denominator)
		cout << "r2 - r1 = " << numerator << "/" << denominator << endl;

	else
		cout << "r2 - r1 = " << numerator << endl;
}

void Rational::multiply(Rational r1, Rational r2)
{
	Rational r3;	

	r3.numerator = r1.numerator * r2.numerator;
	r3.denominator = r1.denominator * r2.denominator;

	int greatest_common_divisor = gcd(abs(r3.numerator), abs(r3.denominator));

	int numerator = r3.numerator/greatest_common_divisor;
	int denominator = r3.denominator/greatest_common_divisor;

	if(numerator != denominator)
		cout << "r1 * r2 = " << numerator << "/" << denominator << endl;
	
	else
		cout << "r1 * r2 = " << numerator << endl;
}

void Rational::print()
{
	cout << numerator << "/" << denominator << endl;
} 
