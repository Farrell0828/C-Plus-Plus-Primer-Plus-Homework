// 3.2.cpp -- We can give your BMI
#include "iostream"

int main()
{
	using namespace std;
	const int Inch_per_feet = 12;
	const float Meter_per_inch = 0.0254;
	const float Pound_per_kg = 2.2;
	
	int part_of_ft_tall;
	cout << "Please enter your tall(just the part of feet): ";
	cin >> part_of_ft_tall;
	int part_of_in_tall;
	cout << "Please enter your tall(just the part of inch): ";
	cin >> part_of_in_tall;
	float pound_weight;
	cout << "Please enter your weight in pound: ";
	cin >> pound_weight;

	int in_tall = Inch_per_feet * part_of_ft_tall + part_of_in_tall;
	float m_tall = Meter_per_inch * in_tall;
	float kg_weight = pound_weight / Pound_per_kg;
	float BMI = kg_weight / (m_tall * m_tall);
	cout << "Your BMI is " << BMI << endl;
	return 0;
}