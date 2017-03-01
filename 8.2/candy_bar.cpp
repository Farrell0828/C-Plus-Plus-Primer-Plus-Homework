// candy_bar.cpp -- something about candy_bar
#include <iostream>
struct candybar
{
	char name[50];
	double weight;
	int heat;
};
void set(candybar &, const char * = "Millennium Munch", double = 2.85, int = 350);
void show(const candybar &);

int main()
{
	candybar c1, c2, c3;
	set(c1);
	set(c2, "LeBron James", 8.88, 6);
	char str[] = "Stephen Curry";
	set(c3, str);
	show(c1);
	show(c2);
	show(c3);
	return 0;
}

void set(candybar & cad, const char * s, double d_num, int i_num)
{
	strcpy(cad.name, s);
	cad.weight = d_num;
	cad.heat = i_num;
}

void show(const candybar & cad)
{
	using namespace std;
	cout << "Name: " << cad.name << endl;
	cout << "Weight: " << cad.weight << endl;
	cout << "Heat: " << cad.heat << endl;
}