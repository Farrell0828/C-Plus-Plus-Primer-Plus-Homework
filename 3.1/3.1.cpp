// 3.1.cpp -- Inch to feet
#include "iostream"

int main()
{
	using namespace std;
	const int Inch_per_feet = 12;

	int n_tall;
	cout << "Please enter your tall, in inch: ";
	cin >> n_tall;
	int in_tall;
	int ft_tall;
	ft_tall = n_tall / Inch_per_feet;
	in_tall = n_tall % Inch_per_feet;
	cout << "Your tall is " << ft_tall << " feet " << in_tall << " inch.\n";
	return 0;
}