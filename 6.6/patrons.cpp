// patrons.cpp -- who are Grand Patrons
#include <iostream>
#include <string>
using namespace std;
struct patr
{
	string name;
	double fund;
};
int main()
{
	int donor_num;
	cout << "Please enter the number of donors: ";
	cin >> donor_num;
	patr * pp = new patr[donor_num];
	int *pg = new int[donor_num];
	int *png = new int[donor_num];
	int grand_num = 0;
	int no_grand_num = 0;
	cout << "Please enter these patrons' name and donor.\n";
	for (int i = 0; i < donor_num; i++)
	{
		cin.get();
		cout << i + 1 << "st's name: ";
		getline(cin, pp[i].name);
		cout << i + 1 << "st's donor: ";
		cin >> pp[i].fund;
		if (pp[i].fund > 10000)
		{
			pg[grand_num] = i;
			grand_num++;
		}
		else
		{
			png[no_grand_num] = i;
			no_grand_num++;
		}
	}

	cout << "Grand Patrons:\n";
	if (grand_num)
	{
		for (int i = 0; i < grand_num; i++)
			cout << pp[pg[i]].name << ": " << pp[pg[i]].fund << endl;
	}
	else
		cout << "None\n";
	cout << "Patrons:\n";
	if (no_grand_num)
	{
		for (int i = 0; i < no_grand_num; i++)
			cout << pp[png[i]].name << ": " << pp[png[i]].fund << endl;
	}
	else
		cout << "None\n";
	delete[] pp;
	delete[] pg;
	delete[] png;

	// play time
	

	return 0;
}