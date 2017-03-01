// cars_info.cpp -- get cars' information
#include <iostream>
#include <string>
using namespace std;
struct car
{
	string make;
	int year;
};

int main()
{
	int num;

	cout << "How many cars do you wish wo catalog? ";
	cin >> num;
	cin.get();
	car * cars = new car[num];
	for (int i = 0; i < num; i++)
	{
		cout << "car #" << i + 1 << ": \n";
		cout << "Please enter the make: ";
		getline(cin, cars[i].make);
		cout << "Please enter the years made: ";
		cin >> cars[i].year;
		cin.get();
	}
	cout << "Here is your collection: \n";
	for (int i = 0; i < num; i++)
		cout << cars[i].year << " " << cars[i].make << endl;
	return 0;
}