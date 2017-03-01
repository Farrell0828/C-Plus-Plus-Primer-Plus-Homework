#ifndef SALES_H_
#define SALES_H_
namespace sales
{
	const int Quarters = 4;
	struct Sales
	{
		double sales_arr[Quarters];
		double average;
		double max;
		double min;
	};
	void SetSales(Sales & s, const double ar[], int n);
	void SetSales(Sales & s);
	void ShowSales(const Sales & s);
}
#endif