// funptr.cpp -- function pointer
#include <iostream>
#include <string>
const int Size = 4;
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);
double calculate(double, double, double(double, double));

int main()
{
	using namespace std;
	string fun_name[Size] = { "sum", "difference", "product", "quotient" };
	double value_arr[Size];
	double (*pf[Size])(double, double) = { add, subtract, multiply, divide };
	cout << "Please enter two numbers(q to quit): ";
	double x, y, sum, product, difference, quotient;
	while (cin >> x >> y)
	{
		sum = calculate(x, y, add);
		product = calculate(x, y, multiply);
		difference = calculate(x, y, subtract);
		quotient = calculate(x, y, divide);
		cout << "The sum of the two numbers is " << sum << endl;
		cout << "The difference of the two numbers is " << difference << endl;
		cout << "The product of the two numbers is " << product << endl;
		cout << "The quotient of two numbers is " << quotient << endl;
		cout << endl;
		for (int i = 0; i < Size; i++)
		{
			value_arr[i] = calculate(x, y, pf[i]);
			cout << "The " << fun_name[i] << " of two numbers is " << value_arr[i] << endl;
		}
		cout << endl;
		cout << "Other two again(q to quit): ";
	}
	return 0;
}

double add(double x, double y)
{
	return x + y;
}

double subtract(double x, double y)
{
	return x - y;
}

double multiply(double x, double y)
{
	return x * y;
}

double divide(double x, double y)
{
	return x / y;
}

double calculate(double x, double y, double fun(double, double))
{
	return fun(x, y);
}