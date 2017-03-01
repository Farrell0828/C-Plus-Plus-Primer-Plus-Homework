// getname.cpp -- get your name
#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	const int MaxSize = 20;
	char first_name[MaxSize];
	char last_name[MaxSize];

	cout << "Enter your first name: ";
	cin.getline(first_name, MaxSize);
	cout << "Enter your last name: ";
	cin.getline(last_name, MaxSize);
	cout << "Here's the information in a single string: "
		<< last_name << ", " << first_name << endl;
	return 0;

}