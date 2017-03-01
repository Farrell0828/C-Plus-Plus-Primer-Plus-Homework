// 3.5.cpp -- Do you know the population of US
#include "iostream"
int main()
{
	using namespace std;
	long long p_of_world;
	cout << "Enter the world's population: ";
	cin >> p_of_world;
	long long p_of_us;
	cout << "Enter the population of US: ";
	cin >> p_of_us;
	double per;
	per = p_of_us / double(p_of_world) * 100;
	cout << "The population of US is " << per << "% of the world population." << endl;
	return 0;
}