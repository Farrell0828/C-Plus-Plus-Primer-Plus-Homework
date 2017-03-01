// 3years_sales.cpp -- the sales of three years
#include <iostream>
int main()
{
	using namespace std;
	const int Years = 3;
	int total_all = 0;
	int sales[Years][12];
	const char * months[12] =
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	for (int year = 0; year < Years; year++)
	{
		int total = 0;
		cout << year + 1 << "st year:\n";
		for (int month = 0; month < 12; month++)
		{
			cout << months[month] << ": ";
			cin >> sales[year][month];
			total = total + sales[year][month];
		}
		total_all = total_all + total;
		cout << year + 1 << "st year's total sales is: " << total << endl << endl;
	}
	cout << Years << " years total sales is: " << total_all << endl;
	return 0;
}