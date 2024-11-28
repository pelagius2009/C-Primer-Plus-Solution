//11.7.cpp

#include <iostream>
using std::cout;
#include "11.7.h"

Complex::Complex(double real_p, double imag_p)
{
	real = real_p;
	imag = imag_p;
}

Complex::Complex()
{
	real = imag = 0.0;
}

Complex::~Complex()
{
}


Complex Complex::operator+(const Complex & c) const
{
	return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(const Complex & c) const
{
	return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator*(const Complex & c) const
{
	return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

Complex Complex::operator~() const
{
	return Complex(real, -imag);
}



Complex operator * (double n, const Complex & c)
{
	return Complex(n * c.real, n * c.imag);
}

std::ostream & operator << (std::ostream & os, const Complex & c)
{
	cout << "(" << c.real << ", " << c.imag << "i)" << std::endl;
	return os;
}

bool operator >> (std::istream & is, Complex & c)
{
	//cout << "Enter a complex number (q to quit): \n";
	cout << "real: ";
	if (is >> c.real)
	{	
		cout << "imaginary: ";
		is >> c.imag;
		return true;
	}
	else
		return false;
}









