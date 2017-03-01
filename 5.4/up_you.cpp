// up_you.cpp -- how many years i will up you
#include <iostream>
int main()
{
	using namespace std;
	double daphne = 100;
	double cleo = 100;
	int years = 0;

	while (cleo <= daphne)
	{
		daphne = daphne + 0.10 * 100;
		cleo = cleo + 0.05 * cleo;
		years++;
	}
	cout << years << " years past, Cleo's money up Daphne's.\n";
	cout << "Daphne: " << daphne << "; Cleo: " << cleo << endl;
	return 0;
}