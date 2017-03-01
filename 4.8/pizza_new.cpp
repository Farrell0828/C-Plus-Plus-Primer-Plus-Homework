// pizza_new.cpp -- get the pizza's information with new
#include <iostream>
struct pizza
{
	char name[20];
	float diameter;
	float weight;
};

int main()
{
	using namespace std;
	pizza * p = new pizza;

	// get the pizza's information
	cout << "Enter the pizza's diameter, in cm: ";
	cin >> p->diameter;
	cin.get();
	cout << "Enter the pizza's name: ";
	cin.get(p->name, 20);
	cin.get();
	cout << "Enter the pizza's weight, in kg: ";
	cin >> p->weight;

	// output the pizza's information
	cout << "The pizza's information you enter is: " << endl;
	cout << "Name: " << p->name << endl;
	cout << "Diameter: " << p->diameter << endl;
	cout << "Weight: " << p->weight << endl;

	delete p;
	return 0;
}