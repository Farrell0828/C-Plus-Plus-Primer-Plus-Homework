// mycomplex.h -- class definition for Complex
#ifndef MYCOMPLEX_H_
#define MYCOMPLEX_H_
#include <iostream>
class Complex
{
private:
	double real_;
	double imaginary_;
public:
	Complex();
	Complex(double r);
	Complex(double r, double i);
	~Complex();
	Complex operator+(const Complex &cp) const;
	Complex operator-(const Complex &cp) const;
	Complex operator*(const Complex &cp) const;
	Complex operator~() const;
	friend Complex operator*(double n, const Complex &cp);
	friend std::ostream & operator<<(std::ostream &os, const Complex &cp);
	friend std::istream & operator>>(std::istream &is, Complex &cp);
};
#endif