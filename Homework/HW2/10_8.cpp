#include <iostream>
#include "Complex.h"

Complex::Complex(double realPart, double imaginaryPart)
      :real(realPart), imaginary(imaginaryPart)
{

}	

Complex Complex::operator+(const Complex &operand2 ) const
{
	return Complex( real + operand2.real, imaginary + operand2.imaginary );
}


