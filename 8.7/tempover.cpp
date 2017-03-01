// tempover.cpp -- template overloading
#include <iostream>

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	using namespace std;
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};
	double * pd[3];

	// set pointers to the amount members of the structures in mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Listing Mr. E's sum count of thing: " << SumArray(things, 6) << endl;
	cout << "Listing Mr. E's sum debts: " << SumArray(pd, 3) << endl;
	return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
	using namespace std;
	cout << "(template A)";
	T sum = 0;
	for (int i = 0; i < n; i++)
		sum = sum + arr[i];
	return sum;
}

template <typename T>
T SumArray(T * arr[], int n)
{
	using namespace std;
	cout << "(template B)";
	T sum = 0;
	for (int i = 0; i < n; i++)
		sum = sum + *arr[i];
	return sum;
}