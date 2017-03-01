// use_sales.cpp -- using class Sales
#include "sales.h"

int main()
{
	using namespace sales;
	double ar[4] = { 100.0, 150.5, 123.4, 189.8 };
	Sales s1 = Sales(ar, 4);
	Sales s2;
	s2.SetSales();
	s1.ShowSales();
	s2.ShowSales();
	return 0;
}