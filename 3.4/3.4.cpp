// 3.4.cpp -- We just need seconds
#include "iostream"
int main()
{
	using namespace std;
	const int min_per_hours = 60;
	const int sec_per_min = 60;
	const int hours_per_days = 24;
	long long ll_seconds;
	cout << "Enter the number of seconds: ";
	cin >> ll_seconds;
	int n_seconds = ll_seconds % sec_per_min;
	int n_min = ll_seconds / sec_per_min % min_per_hours;
	int n_hours = ll_seconds / sec_per_min / min_per_hours % hours_per_days;
	long long ll_days = ll_seconds / sec_per_min / min_per_hours / hours_per_days;
	cout << ll_seconds << " seconds = " << ll_days << " days, " << n_hours << " hours, "
		<< n_min << " minutes, " << n_seconds << " seconds" << endl;
	return 0;
}