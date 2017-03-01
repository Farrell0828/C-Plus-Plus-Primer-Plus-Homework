// to_big.cpp -- change the small to big
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void change(string &);

int main()
{
	string str;
	cout << "Enter a string (q to quit): ";
	while ((getline(cin, str)) && (str != "q"))
	{
		change(str);
		cout << str << endl;
		cout << "Next string (q to quit): ";
	}
	cout << "Bye.\n";
	return 0;
}

void change(string & s)
{
	int n = s.size();
	for (int i = 0; i < n; i++)
		s[i] = toupper(s[i]);
}