// stone.cpp -- use Stonewt class
#include <iostream>
#include "stonewt.h"
const int Size = 6;

int main()
{
	using std::cout;
	using std::cin;
	Stonewt arr[Size] = { 21.1, 200, {3, 13.9} };
	double temp;
	cout << arr[0] << arr[1] << arr[2];
	for (int i = 3; i < Size; ++i)
	{
		cout << "Enter the weight, in pounds: ";
		cin >> temp;
		arr[i] = Stonewt(temp);
		cout << arr[i];
	}
	Stonewt base(11, 0);
	int num = 0;
	Stonewt min = arr[0], max = arr[0];
	for (int i = 0; i < Size; ++i)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] >= base)
			num++;
	}
	cout << "Max: " << max;
	cout << "Min: " << min;
	cout << "Number of cell >= 11 stones: " << num << "\n";
	return 0;
}