// support.cpp
#include <iostream>
#include "sales.h"
namespace sales
{
	void SetSales(Sales & s, const double ar[], int n)
	{
		double total = 0;
		double max = ar[0];
		double min = ar[0];
		for (int i = 0; i < n; ++i)
		{
			s.sales_arr[i] = ar[i];
			total += ar[i];
			if (ar[i] > max)
				max = ar[i];
			if (ar[i] < min)
				min = ar[i];
		}
		s.average = total / n;
		s.max = max;
		s.min = min;
	}

	void SetSales(Sales & s)
	{
		double ar[Quarters];
		std::cout << "Enter " << Quarters << " numbers: ";
		for (int i = 0; i < Quarters; ++i)
			std::cin >> ar[i];
		SetSales(s, ar, Quarters);
	}

	void ShowSales(const Sales & s)
	{
		using std::cout;
		using std::endl;
		cout << "Sales: ";
		for (int i = 0; i < Quarters; ++i)
			cout << s.sales_arr[i] << " ";
		cout << endl;
		cout << "Average: " << s.average << endl;
		cout << "Max: " << s.max << endl;
		cout << "Min: " << s.min << endl;
	}
}