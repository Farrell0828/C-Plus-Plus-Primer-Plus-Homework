// 3.3.cpp -- The latitude in degress
#include "iostream"

int main()
{
	using namespace std;
	const int Sec_per_min = 60;
	const int Min_per_deg = 60;

	int deg_lat;
	cout << "Enter a latitude in degrees, minutes, seconds:\n";
	cout << "First, enter the degress: ";
	cin >> deg_lat;
	int min_lat;
	cout << "Next, enter the minuters of arc: ";
	cin >> min_lat;
	float sec_lat;
	cout << "Finally, enter the seconds of arc: ";
	cin >> sec_lat;

	float f_deg_lat = deg_lat + float(min_lat) / Min_per_deg + sec_lat / Sec_per_min / Min_per_deg;
	cout << deg_lat << " degrees, " << min_lat << " minutes, " << sec_lat << " seconds = " << f_deg_lat << " degrees\n";
	return 0;
}