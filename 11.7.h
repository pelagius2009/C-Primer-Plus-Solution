//11.7.h

#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex
{	
	private:
		double real;
		double imag;

	public:
		Complex(double real_p, double imag_p);
		Complex();
		~Complex();
		// operator overloading
		Complex operator+(const Complex & c) const;
		Complex operator-(const Complex & c) const;
		Complex operator*(const Complex & c) const;
		Complex operator~() const;

		friend std::ostream & operator << (std::ostream & os, const Complex & c);
		friend Complex operator * (double n, const Complex & c);
		friend bool operator >> (std::istream & is, Complex & c);
};



#endif
