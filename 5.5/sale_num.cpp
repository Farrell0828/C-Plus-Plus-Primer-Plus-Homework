// sale_num.cpp -- complete the sale this year
#include <iostream>
int main()
{
	using namespace std;
	int total = 0;
	int sales[12];
	char * months[12] =
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

	for (int i = 0; i < 12; i++)
	{
		cout << months[i] << ": ";
		cin >> sales[i];
		total = total + sales[i];
	}
	cout << "The total sale of this year is: " << total << endl;
	return 0;
}