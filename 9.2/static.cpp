// static.cpp -- using a static local variable
#include <iostream>
#include <string>
// function prototype
void strcount(const std::string &);
int main()
{
	using namespace std;
	string input;
	cout << "Enter a line:\n";
	while ((getline(cin, input)) && input != "")
	{
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
	}
	cout << "Bye\n";
	return 0;
}

void strcount(const std::string & str)
{
	using namespace std;
	static int total = 0;		// static local variable

	cout << "\"" << str << "\" contains " << str.size() << endl;
	total += str.size();
	cout << total << " characters total\n";
}