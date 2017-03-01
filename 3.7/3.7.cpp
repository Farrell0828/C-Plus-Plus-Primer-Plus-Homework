// 3.7.cpp -- Transform the oil consumption from Europe to US.
#include "iostream"
int main()
{
	using namespace std;
	float oil_consumption_Eur;
	cout << "Please enter the oil consumption in Europe: ";
	cin >> oil_consumption_Eur;
	const float km_per_l = (100 / 62.14 / 3.875);
	float oil_consumption_US;
	oil_consumption_US = 1 / (oil_consumption_Eur * km_per_l) * 100;
	cout << "The oil consumption in US is: " << oil_consumption_US << "l/100km" << endl;
	return 0;
}