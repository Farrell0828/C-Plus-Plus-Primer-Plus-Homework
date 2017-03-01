// factorial.cpp -- complete the factorial of a number
#include <iostream>
long double factorial(unsigned int);
int main()
{
	using namespace std;
	int num;
	cout << "Please enter a positive integer: ";
	while (true)
	{
		while (!(cin >> num))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input, please enter a integer: ";
		}
		if (num > 0)
		{
			cout << "The factorial of " << num << " is " << factorial(num) << endl;
			cout << "Enter other two numbers (0 to quit): ";
		}
			
		else if (num < 0)
			cout << "Please enter a positive integer, not negative integer(0 to quit): ";
		else
			break;
	}
	
}

// the following function return a integer's factorial
long double factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}