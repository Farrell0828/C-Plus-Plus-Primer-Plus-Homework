// test.cpp -- test my idea
#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char *str = new char[11];
	char *s1 = "12345";
	char *s2 = "67890";
	strcpy(str, s1);
	strcpy(str + 5, s2);
	cout << str << endl;
	return 0;
}