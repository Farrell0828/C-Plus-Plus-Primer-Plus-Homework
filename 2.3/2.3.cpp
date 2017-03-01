// 2.3.cpp -- There function.
#include "iostream"
void MyFunct1();
void MyFunct2();

int main()
{
	using namespace std;
	MyFunct1();
	MyFunct1();
	MyFunct2();
	MyFunct2();
	cin.get();
	return 0;
}

void MyFunct1()
{
	using namespace std;

	cout << "Three blind mice" << endl;
}

void MyFunct2()
{
	using namespace std;

	cout << "See how they run" << endl;
}