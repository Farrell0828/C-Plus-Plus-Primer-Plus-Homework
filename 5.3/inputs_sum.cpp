// inputs_sum.cpp -- complete the sum of inputs
#include <iostream>
int main()
{
	using namespace std;
	double num;
	double sum = 0;

	while (cin >> num && num)
	{
		sum = sum + num;
		cout << sum << endl;
	}
	return 0;
}