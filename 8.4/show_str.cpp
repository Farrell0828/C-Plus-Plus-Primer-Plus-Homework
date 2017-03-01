// show_str.cpp -- set and show string
#include <iostream>
using namespace std;
#include <cstring>	// for strlen(), strcpy()
struct stringy
{
	char * str;		// points to a string
	int ct;			// length of string (not counting '\0')
};

// protypes for set(), show(), and show() go here
void set(stringy &, char *);
void show(const stringy &, int = 1);
void show(const char *, int = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);		// prints member string once
	show(beany, 2);		// prints member string twice
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);		// prints testing string once
	show(testing, 3);	// prints testing string thrice
	show("Done!");
	return 0;
}

void set(stringy & sy, char * s)
{
	int len = strlen(s);
	char * sp = new char[len];
	strcpy(sp, s);
	sy.str = sp;
	sy.ct = len;
}

void show(const stringy & sy, int times)
{
	for (int i = 0; i < times; i++)
		cout << sy.str << endl;
}

void show(const char * s, int times)
{
	for (int i = 0; i < times; i++)
		cout << s << endl;
}