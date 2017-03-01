// getinput.cpp -- output your input
#include <iostream>
#include <cctype>
int main()
{
	using namespace std;
	char ch;

	cout << "Enter something, enter @ to end.\n";
	cin.get(ch);
	while (ch != '@')
	{
		if (islower(ch))
			cout << char(toupper(ch));
		else if (isupper(ch))
			cout << char(tolower(ch));
		else
			cout << char(ch);
		cin.get(ch);
	}
	return 0;
}