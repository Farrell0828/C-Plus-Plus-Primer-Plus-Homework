// ints_sum.cpp -- get all ints sum
#include <iostream>
int main()
{
	using namespace std;
	int low, high;

	cout << "Enter two integers, low first: ";
	cin >> low >> high;
	int sum = 0;
	int i = low;
	while (i >= low && i <= high)
	{
		sum = sum + i;
		i++;
	}
	cout << "Sum of all the integers between " 
		 << low << " and " << high << " is: " << sum << endl;
	return 0;
}