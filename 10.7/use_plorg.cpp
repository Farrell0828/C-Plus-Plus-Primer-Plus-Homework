// use_plorg.cpp -- using class Plorg
#include "plorg.h"

int main()
{
	Plorg p1;
	p1.ShowPlorg();
	Plorg p2("Farrell Meng", 88);
	p2.ShowPlorg();
	p1.SetCi(66);
	p1.ShowPlorg();
	return 0;
}