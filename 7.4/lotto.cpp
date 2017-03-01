// lotto.cpp -- probability of winning
#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	double total, choices, total2;
	cout << "Enter the total numbers of choices in the field numbers and\n";
	cout << "the number of picks allowed.\n ";
	cout << "Then, enter the total number of the second number: ";
	while ((cin >> total >> choices >> total2) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices) * total2;
		cout << " of winning.\n";
		cout << "Next three numbers (q to quit): ";
	}
	cout << "bye\n";
	return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;	// here come some local variables
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result *= n / p;
	return result;
}