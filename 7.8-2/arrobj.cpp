// arrobj.cpp
#include <iostream>
const int Seasons = 4;
const int Max = 10;
const char snames[Seasons][Max] = { "Spring", "Summer", "Fall", "Winter" };
using namespace std;
struct expe
{
	double expenses[Seasons];
};
void fill(expe *);
void show(expe);

int main()
{
	expe str_expenses;
	fill(&str_expenses);
	show(str_expenses);
	return 0;
}

void fill(expe * pa)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << snames[i] << " expenses: ";
		cin >> ((*pa).expenses)[i];
	}
}

void show(expe da)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << snames[i] << ": $" << da.expenses[i] << endl;
		total += da.expenses[i];
	}
	cout << "Total Expenses: $" << total << endl;
}