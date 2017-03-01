// 2.4.cpp -- Enter your age, this program will output month.
#include "iostream"
int main()
{
	using namespace std;

	int age;
	cout << "Enter your age: ";
	cin >> age;
	int mouth = 12 * age;
	cout << "There are " << mouth << " mouth" << endl;
	cin.get();
	cin.get();
	return 0;
}