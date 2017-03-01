// 3.6.cpp -- How much oil your car need
#include "iostream"
int main()
{
	using namespace std;
	float mileage;
	float oil_consumption;
	cout << "Please enter your mileage and oil consumption.\nFirst, enter your mileage, in mile: ";
	cin >> mileage;
	cout << "Then, enter your oil consumption, in gallon: ";
	cin >> oil_consumption;
	float mile_per_gallon;
	mile_per_gallon = mileage / oil_consumption;
	cout << "If you burning one gallon of oil, your car can race " << mile_per_gallon << " mile." << endl;
	return 0;
}