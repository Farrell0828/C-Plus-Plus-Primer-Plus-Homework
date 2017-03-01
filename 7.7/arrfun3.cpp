// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;
double * fill_array(double[], int);
void show_array(const double *, const double *);
void revalue(double r, double *, double *);

int main()
{
	using namespace std;
	double properties[Max];

	double * end = fill_array(properties, Max);
	show_array(properties, end);
	if (properties != end)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))	// bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input, Please enter a number: ";
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	}
	cout << "Done.\n";
	return 0;
}

double * fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)	// bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process teminated.\n";
			break;
		}
		else if (temp < 0)		// signal to terminate
			break;
		ar[i] = temp;
	}
	return (ar + i);
}

void show_array(const double * begin, const double * end)
{
	using namespace std;
	for (const double * pt = begin; pt != end; pt++)
	{
		cout << "Property #" << (pt - begin + 1) << ": $";
		cout << *pt << endl;
	}
}

void revalue(double r, double * begin, double * end)
{
	for (double * pt = begin; pt != end; pt++)
		*pt *= r;
}