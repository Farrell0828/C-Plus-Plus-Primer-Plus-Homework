// candybar_array.cpp -- create a candybar array
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
	CandyBar candybar_arr[3] = 
	{
		{ "Apple", 2.3, 350 }, 
		{ "Microsoft", 3.5, 400 },
		{ "Google", 4.1, 480 }
	};

	cout << "The first: " << endl;
	cout << "Name: " << candybar_arr[0].name
		 << ", weight: " << candybar_arr[0].weight
		 << ", heat: " << candybar_arr[0].heat << endl;
	cout << "The secend: " << endl;
	cout << "Name: " << candybar_arr[1].name
		 << ", weight: " << candybar_arr[1].weight
		 << ", heat: " << candybar_arr[1].heat << endl;
	cout << "The third: " << endl;
	cout << "Name: " << candybar_arr[2].name
		 << ", weight: " << candybar_arr[2].weight
		 << ", heat: " << candybar_arr[2].heat << endl;
	return 0;
}