// BOP.cpp -- Benevolent Order of Programmer
#include <iostream>
using namespace std;
const int StrSize = 20;
const int ArSize = 5;

// Benevolent Order of Programmer name structure
struct bop {
	char fullname[StrSize];	// real name
	char title[StrSize];	// job title
	char bopname[StrSize];	// secret BOP name
	int preference;			// 0 = fullname, 1 = title, 2 = bopname
};
bop bop_ar[ArSize] =
{
	{ "Wimp Macho", "WM", "B_WM", 0 },
	{ "Raki Rhodes", "RR", "B_RR", 1 },
	{ "Celia Laiter", "CL", "B_CL", 2 },
	{ "Hoppy Hipman", "HH", "B_CL", 0 },
	{ "Pat Hand", "PH", "B_PH", 1 }
};

void show_choices();

int main()
{
	show_choices();
	char choose;
	bool loop = true;
	while (loop && (cin >> choose))
	{
		switch (choose)
		{
		case 'a':
			for (int i = 0; i < ArSize; i++)
				cout << bop_ar[i].fullname << endl;
			cout << "Next choice: ";
			break;
		case 'b':
			for (int i = 0; i < ArSize; i++)
				cout << bop_ar[i].title << endl;
			cout << "Next choice: ";
			break;
		case 'c':
			for (int i = 0; i < ArSize; i++)
				cout << bop_ar[i].bopname << endl;
			cout << "Next choice: ";
			break;
		case 'd':
			for (int i = 0; i < ArSize; i++)
				switch (bop_ar[i].preference)
				{
				case 0: cout << bop_ar[i].fullname << endl; break;
				case 1: cout << bop_ar[i].title << endl; break;
				case 2: cout << bop_ar[i].bopname << endl; break;
				}
			cout << "Next choice: ";
			break;
		case 'q': loop = false; cout << "Bye!\n"; break;
		default: cout << "Please enter a, b, c, d, or q: ";
		}

	}
	return 0;
}

void show_choices()
{
	cout << "Benevolent Order of Programmer Report\n";
	cout << "a. display by name		b. display by title\n";
	cout << "c. display by bopname	d. display by preference\n";
	cout << "q. quit\n";
	cout << "Enter your choice: ";
}