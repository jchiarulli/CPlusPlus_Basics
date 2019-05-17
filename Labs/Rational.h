#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
	public:
		Rational(int = 0, int = 1);
		void setNumerator(int);
		void setDenominator(int);
		void add(Rational, Rational);
		void subtract(Rational, Rational);
		void multiply(Rational, Rational);
		void print();
	
	private:
		int numerator;
		int denominator;
};

#endif
