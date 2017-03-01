// 2.2.cpp -- Long to yard
#include "iostream"

int main()
{
	using namespace std;

	double lg;
	cout << "Please enter the distance, in long: ";
	cin >> lg;
	double yd = lg * 220;
	cout << lg << " long = " << yd << " yard." << endl;
	cin.get();
	cin.get();
	return 0;
}