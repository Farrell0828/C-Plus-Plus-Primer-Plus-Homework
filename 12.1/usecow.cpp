// use class Cow
#include <iostream>
#include "cow.h"
int main()
{
	using namespace std;
	Cow c1;
	cout << "c1:\n";
	c1.ShowCow();
	Cow c2("XiaoMing", "Eat", 200.0);
	cout << "c2:\n";
	c2.ShowCow();
	Cow c3;
	cout << "c3:\n";
	c3.ShowCow();
	c3 = c2;
	cout << "c3 again:\n";
	c3.ShowCow();
	return 0;
}