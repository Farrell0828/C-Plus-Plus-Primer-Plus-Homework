// getnum.cpp -- get numbers to array
#include <iostream>
const int ArSize = 10;
int main()
{
	using namespace std;
	double donation[ArSize];
	int i = 0;
	double total = 0;
	double avg = 0;
	int count = 0;

	cout << "Enter number(s), not out ten.\n#1: ";
	while (i < ArSize && cin >> donation[i])
	{
		total += donation[i];
		i++;
		cout << "#" << i + 1 << ": ";
	}
	avg = total / i;
	cout << "Avengen of " << i << " number(s) is: " << avg << endl;

	for (int j = 0; j < i; j++)
	{
		if (donation[j] > avg)
			count++;
	}
	cout << count << " number(s) bigger than avenger.\n";
	return 0;
}