// randwalk.cpp -- use the Vector class
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "vector.h"

int main()
{
	using namespace std;
	using vector::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int test_time;
	unsigned long total_steps = 0;
	unsigned long min_steps;
	unsigned long max_steps;

	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		cout << "Enter test times: ";
		if (!(cin >> test_time))
			break;
		cout << "  Target Distance: " << target << ", "
			<< "Step Size: " << dstep << endl;
		for (int i = 0; i < test_time; ++i)
		{
			while (result.mag_val() < target)
			{
				direction = rand() % 360;
				step.Reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			if (0 == i)
				min_steps = max_steps = steps;
			total_steps += steps;
			if (steps < min_steps)
				min_steps = steps;
			else if (steps > max_steps)
				max_steps = steps;
			steps = 0;
			result.Reset(0.0, 0.0);
		}
		cout << "  Max steps: " << max_steps << endl;
		cout << "  Min steps: " << min_steps << endl;
		cout << "  Avg steps: " << total_steps / test_time << endl;
		cout << "\nEnter target distance (q to quit): ";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}