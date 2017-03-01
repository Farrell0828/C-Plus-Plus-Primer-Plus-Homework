// tax.cpp -- Everybody should pay tax in Neutronia
#include <iostream>
int main()
{
	using namespace std;
	double income, tax;
	bool loop = true;
	cout << "Please enter your income, in tvarp: ";
	while (loop && (cin >> income))
	{
		if (income < 0)
			loop = false;
		else if (income >=0 && income <= 5000)
			tax = 0;
		else if (income > 5000 && income <= 15000)
			tax = (income - 5000) * 0.1;
		else if (income > 15000 && income <= 35000)
			tax = 10000 * 0.1 + (income - 15000) * 0.15;
		else
			tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
		cout << "The tax you shoule pay is " << tax << " tvarp.\n";
	}
	return 0;
}