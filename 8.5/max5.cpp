// max5.cpp -- get the max number of 5 numbers
#include <iostream>
const int Size = 5;
template <typename T>
T max5(T arr[]);

int main()
{
	using namespace std;
	int int_arr[Size] = { 1, 4, 2, 8, 5 };
	double d_arr[Size] = { 4.9, 4.1, 8.8, 6.6, 3.7 };
	cout << max5(int_arr) << endl;
	cout << max5(d_arr) << endl;
	return 0;
}

template <typename T>
T max5(T arr[])
{
	T max = arr[0];
	for (int i = 1; i < Size; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}