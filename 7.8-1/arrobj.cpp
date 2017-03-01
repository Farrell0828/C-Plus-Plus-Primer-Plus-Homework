// arrobj.cpp
#include <iostream>
const int Seasons = 4;
const int Max = 10;
char sname[Seasons][Max] = { "Spring", "Summer", "Fall", "Winter" };
void fill(double[], int);
void show(const double[], int);

int main()
{
	double expenses[Seasons];
	fill(expenses, Seasons);
	show(expenses, Seasons);
}

void fill(double expenses[], int Seasons)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << sname[i] << " expenses: ";
		cin >> expenses[i];
	}
}

void show(const double expenses[], int Seasons)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << sname[i] << ": $" << expenses[i] << endl;
		total += expenses[i];
	}
	cout << "Total Expenses: $" << total << endl;
}