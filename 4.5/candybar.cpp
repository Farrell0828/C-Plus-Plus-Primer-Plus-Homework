// candybar.cpp -- using struction
#include <iostream>
struct CandyBar
{
	char name[20];
	float weight;
	int heat;
};
int main()
{
	using namespace std;
	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	
	cout << "The information of snack: " << endl;
	cout << "Name: " << snack.name << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Heat: " << snack.heat << endl;
	return 0;
}