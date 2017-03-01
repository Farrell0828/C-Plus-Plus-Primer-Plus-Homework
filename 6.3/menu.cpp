// menu.cpp -- create a menu
#include <iostream>
using namespace std;
void show_menu();
int main()
{
	show_menu();
	char input;
	while (cin >> input)
	{
		switch (input)
		{
			case 'c': cout << "The tiger are carnivores.\n"; break;
			case 'p': cout << "I am going to be a painist.\n"; break;
			case 't': cout << "A maple is a tree.\n"; break;
			case 'g': cout << "Games are interesting\n"; break;
			default: cout << "Please enter a c, p, t, or g: ";
		}
	}
	return 0;
}

void show_menu()
{
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore		p) pianist\n";
	cout << "t) tree			g) game\n";
}