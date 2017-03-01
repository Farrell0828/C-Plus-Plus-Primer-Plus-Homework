// getname_string.cpp -- get name use string
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string first_name;
	string last_name;

	cout << "Enter your first name: ";
	getline(cin, first_name);
	cout << "Enter your last_name: ";
	getline(cin, last_name);
	cout << "Here's the information in a single string: "
		<< last_name << ", " << first_name << endl;
	return 0;
}