// sales.cpp
#include <iostream>
#include "sales.h"
int main()
{
	using namespace sales;
	Sales s1, s2;
	double ar[Quarters] = { 100.0, 150.5, 123.4, 189.8 };
	SetSales(s1, ar, Quarters);
	SetSales(s2);
	ShowSales(s1);
	ShowSales(s2);
	return 0;
}