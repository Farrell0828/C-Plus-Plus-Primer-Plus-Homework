// randwalk.cpp -- use the Vector class
#include <iostream>
#include <fstream>
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
	ofstream fout;
	fout.open("RandWalk.txt");

	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		cout << "Target Distance: " << target << ", "
			<< "Step Size: " << dstep << endl;
		fout << "Target Distance: " << target << ", "
			<< "Step Size: " << dstep << endl;
		cout << "0: (x,y) = (0, 0)\n";
		fout << "0: (x,y) = (0, 0)\n";
		while (result.mag_val() < target)
		{
			direction = rand() % 360;
			step.Reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			cout << steps << ": (x,y) = (" << result.x_val()
				<< ", " << result.y_val() << ")\n";
			fout << steps << ": (x,y) = (" << result.x_val()
				<< ", " << result.y_val() << ")\n";
		}
		cout << "After " << steps << " steps, the subject "
			<< "has the following location:\n";
		fout << "After " << steps << " steps, the subject "
			<< "has the following location:\n";
		cout << result << endl;
		fout << result << endl;
		result.PolarMode();
		cout << " or\n" << result << endl;
		fout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.mag_val() / steps << endl;
		fout << "Average outward distance per step = "
			<< result.mag_val() / steps << endl;
		steps = 0;
		result.Reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}