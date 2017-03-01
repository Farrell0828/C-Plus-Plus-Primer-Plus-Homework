// candybar_new.cpp -- doing 4.6 with new
#include <iostream>
struct CandyBar
{
	char name[20];
	double weight;
	int heat;
};

int main()
{
	using namespace std;
	CandyBar * p = new CandyBar[3];

	p[0] = { "Apple", 2.3, 350 };
	p[1] = { "Microsoft", 3.0, 400 };
	p[2] = { "Google", 3.5, 480 };

	cout << "The first: " << endl;
	cout << "Name: " << p->name
		 << ", weight: " << p[0].weight
		 << ", heat: " << p[0].heat << endl;
	cout << "The secend: " << endl;
	cout << "Name: " << p[1].name
		 << ", weight: " << (p + 1)->weight
		 << ", heat: " << p[1].heat << endl;
	cout << "The third: " << endl;
	cout << "Name: " << p[2].name
		 << ", weight: " << p[2].weight
		 << ", heat: " << p[2].heat << endl;
	delete[] p;
	return 0;
}