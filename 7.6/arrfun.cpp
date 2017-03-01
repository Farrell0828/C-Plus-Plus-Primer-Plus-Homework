// arrfun.cpp -- some function about array
#include <iostream>
const int Max = 10;
int fill_array(double[], const int);
void show_array(const double[], const int);
void reverse_array(double[], const int);

int main()
{
	using namespace std;
	double ar[Max];
	int num = fill_array(ar, Max);
	show_array(ar, num);
	reverse_array(ar, num);
	show_array(ar, num);
	reverse_array(ar, num);
	reverse_array(ar + 1, num - 2);
	show_array(ar, num);
	return 0;
}

int fill_array(double ar[], const int limit)
{
	using namespace std;
	cout << "Please enter " << limit << "numbers, q to end advance.\n";
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "#" << i + 1 << ": ";
		if (cin >> ar[i])
			continue;
		else
			break;
	}
	return i;
}

void show_array(const double ar[], const int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << ar[i] << " ";
	cout << endl;
}

void reverse_array(double ar[], const int n)
{
	double temp;
	for (int i = 0; i < n / 2; i++)
	{
		temp = ar[i];
		ar[i] = ar[n - 1 - i];
		ar[n - 1 - i] = temp;
	}
}