// output_string.cpp -- output string n times
#include <iostream>
int times = 0;
void disp(const char *, int = 0);
int main()
{
	using namespace std;
	char s1[] = "What!";
	char s2[] = "How!";
	disp(s1);
	disp(s2);
	disp(s1, 3);
	disp(s2, -5);
	disp(s1);
	return 0;
}

void disp(const char * s, int n)
{
	using namespace std;
	times++;
	if (!n)
		cout << s << endl;
	else
		for (int i = 0; i < times; i++)
			cout << s << endl;
	cout << endl;
}