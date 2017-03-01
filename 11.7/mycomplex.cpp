// mycomplex.cpp -- methods of class Complex
#include <iostream>
#include "mycomplex.h"
using std::cout;
using std::cin;

// default constructor
Complex::Complex()
{
	real_ = imaginary_ = 0.0;
}

// constructor with one double
Complex::Complex(double r)
{
	real_ = r;
	imaginary_ = 0.0;
}

// constructor with two double
Complex::Complex(double r, double i)
{
	real_ = r;
	imaginary_ = i;
}

// default destructor
Complex::~Complex() {}

// overload
Complex Complex::operator+(const Complex &cp) const
{
	return Complex(real_ + cp.real_, imaginary_ + cp.imaginary_);
}

Complex Complex::operator-(const Complex &cp) const
{
	return Complex(real_ - cp.real_, imaginary_ - cp.imaginary_);
}

Complex Complex::operator*(const Complex &cp) const
{
	return Complex(real_ * cp.real_ - imaginary_ * cp.imaginary_,
		real_ * cp.real_ + imaginary_ * cp.imaginary_);
}

Complex Complex::operator~() const
{
	return Complex(real_, -imaginary_);
}

Complex operator*(double n, const Complex &cp)
{
	return Complex(n * cp.real_, n * cp.imaginary_);
}

std::ostream & operator<<(std::ostream &os, const Complex &cp)
{
	os << "(" << cp.real_ << "," << cp.imaginary_ << "i)";
	return os;
}

std::istream & operator>>(std::istream &is, Complex &cp)
{
	cout << "real: ";
	is >> cp.real_;
	cout << "imaginary: ";
	is >> cp.imaginary_;
	return is;
}