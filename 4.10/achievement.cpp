// achievement.cpp -- calculation the means of achievement
#include <iostream>
#include <array>
int main()
{
	using namespace std;
	array<float, 3> ach;
	
	cout << "Please enter your three achievement of 40 Meter Race: " << endl;
	cout << "First: ";
	cin >> ach[0];
	cout << "Secend: ";
	cin >> ach[1];
	cout << "Third: ";
	cin >> ach[2];
	
	float mean = (ach[0] + ach[1] + ach[2]) / 3;
	int times = 3;

	cout << "The times is " << times << endl;
	cout << "Your average performance is " << mean << endl;
	return 0;
}