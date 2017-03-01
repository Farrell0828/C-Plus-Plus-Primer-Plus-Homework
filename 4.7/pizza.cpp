// pizza.cpp -- get pizza's information
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
	pizza my_pizza;

	cout << "Enter the pizza's name: ";
	cin.getline(my_pizza.name, 20);
	cout << "Enter the pizza's diameter, in cm: ";
	cin >> my_pizza.diameter;
	cout << "Enter the pizza's weight, in kg: ";
	cin >> my_pizza.weight;
	cout << "The pizza's information you enter is: " << endl;
	cout << "Name: " << my_pizza.name << endl;
	cout << "Diameter: " << my_pizza.diameter << "cm" << endl;
	cout << "Weight: " << my_pizza.weight << "kg" << endl;
	return 0;
}