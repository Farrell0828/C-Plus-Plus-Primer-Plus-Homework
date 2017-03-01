// mean.cpp -- display two number's mean
#include <iostream>
double mean(double, double);
int main()
{
	using namespace std;
	double x, y;
	while (true)
	{
		cout << "Please enter two numbers: ";
		while (!(cin >> x >> y))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Two numbers, not other: ";
		}
		if (x == 0 || y == 0)
			break;
		else
			cout << "The mean of the two number you enter is "
			<< mean(x, y) << endl;
	}
}

// this function return the mean of two arguments
double mean(double x, double y)
{
	return 2.0 * x * y / (x + y);
}