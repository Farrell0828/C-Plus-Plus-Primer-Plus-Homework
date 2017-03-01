// 2.6.cpp -- Light year to astronomical units.
#include "iostream"
double LightYearToAstronmicalUnits(double);

int main()
{
	using namespace std;

	double lightYear;
	cout << "Enter the number of light years: ";
	cin >> lightYear;
	double astronmicalUnits = LightYearToAstronmicalUnits(lightYear);
	cout << lightYear << " light years = " << astronmicalUnits << " astronmical units." << endl;
	cin.get();
	cin.get();
	return 0;
}

double LightYearToAstronmicalUnits(double lightYear)
{
	double astronmical = 63240 * lightYear;
	return astronmical;
}