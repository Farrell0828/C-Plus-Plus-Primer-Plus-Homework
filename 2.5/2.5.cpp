// 2.5.cpp -- C¡ãto F¡ã.
#include "iostream"
double CelsiusToFahrenheit(double);

int main()
{
	using namespace std;

	double celsius;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	double fahrenheit = CelsiusToFahrenheit(celsius);
	cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
	cin.get();
	cin.get();
	return 0;
}

double CelsiusToFahrenheit(double celsius)
{
	double fahrenheit = 1.8 * celsius + 32.0;
	return fahrenheit;
}


