// sales.cpp -- class Sales
#include <iostream>
#include "sales.h"

namespace sales
{
	Sales::Sales()
	{
		for (int i = 0; i < Quarters; ++i)
			sales_[i] = 0.0;
		(*this).SetAMM();
	}

	Sales::Sales(const double ar[], int n)
	{
		if (n < Quarters)
		{
			for (int i = 0; i < n; ++i)
				sales_[i] = ar[i];
			for (int i = n; i < Quarters; ++i)
				sales_[i] = 0;
		}
		else
			for (int i = 0; i < Quarters; ++i)
				sales_[i] = ar[i];
		(*this).SetAMM();
	}

	Sales::~Sales() {}

	void Sales::SetAMM()
	{
		double total = 0.0;
		double max = sales_[0];
		double min = sales_[0];
		for (int i = 0; i < Quarters; ++i)
		{
			total += sales_[i];
			if (sales_[i] > max)
				max = sales_[i];
			if (sales_[i] < min)
				min = sales_[i];
		}
		average_ = total / Quarters;
		max_ = max;
		min_ = min;
	}

	void Sales::SetSales()
	{
		double ar[Quarters];
		std::cout << "Enter " << Quarters << " numbers: ";
		for (int i = 0; i < Quarters; ++i)
			std::cin >> ar[i];
		Sales temp(ar, Quarters);
		(*this) = temp;
	}

	void Sales::ShowSales() const
	{
		std::cout << "Sales: ";
		for (int i = 0; i < Quarters; ++i)
			std::cout << sales_[i] << " ";
		std::cout << std::endl;
		std::cout << "  Average: " << average_ << std::endl;
		std::cout << "  Max: " << max_ << std::endl;
		std::cout << "  Min: " << min_ << std::endl;
	}
}