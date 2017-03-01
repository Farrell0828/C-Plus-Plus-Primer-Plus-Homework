// 2.7.cpp -- Show me the time.
#include "iostream"
void Time(int, int);

int main()
{
	using namespace std;

	int hours;
	cout << "Enter the number of hours: ";
	cin >> hours;
	int minuters;
	cout << "Enter the number of minuters: ";
	cin >> minuters;
	Time(hours, minuters);
	cin.get();
	cin.get();
	return 0;
}

void Time(int hours, int minuters)
{
	using namespace std;

	cout << "Time: " << hours << " : " << minuters << endl;
}