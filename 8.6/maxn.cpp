// maxn.cpp -- get the max number of n numbers
#include <iostream>
#include <cstring>
template <typename T>
T maxn(T arr[], int n);
template <> char * maxn(char * arr[], int n);

int main()
{
	using namespace std;
	int int_arr[6] = { 3, 4, 6, 1, 2, 8 };
	double d_arr[4] = { 5.0, 2.4, 6.6, 8.8 };
	char * ch_arr[5] =
	{
		"Meng fanqi want go to England!",
		"Meng fanqi want go to American!",
		"Meng fanqi want go to Japan!",
		"Meng fanqi want go to Canada!",
		"Meng fanqi want go to China!"
	};
	cout << maxn(int_arr, 6) << endl;
	cout << maxn(d_arr, 6) << endl;
	cout << maxn(ch_arr, 5) << endl;
	return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

template <> char * maxn(char * arr[], int n)
{
	char * max = arr[0];
	for (int i = 1; i < n; i++)
		if (strlen(arr[i]) > strlen(max))
			max = arr[i];
	return max;
}