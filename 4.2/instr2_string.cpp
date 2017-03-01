// instr2_string.cpp -- using string at "4.4 instr2.cpp"
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert
		<< " for you, " << name << ".\n";
	return 0;
}