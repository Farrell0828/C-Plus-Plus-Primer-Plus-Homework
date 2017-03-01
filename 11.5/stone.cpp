// stone.cpp -- use Stonewt class
#include <iostream>
#include "stonewt.h"

int main()
{
	using std::cout;
	using std::endl;
	Stonewt dog(20, 13.8);
	Stonewt cat(120.9);
	cout << dog << cat;
	dog.PoundDMode();
	cat.PoundFMode();
	cout << dog << cat;
	Stonewt sum;
	cout << sum;
	sum = dog + cat;
	cout << sum;
	Stonewt diff = dog - cat;
	Stonewt product = dog * 3;
	cout << product;
	Stonewt product2 = 3 * dog;
	cout << product2;
	return 0;
}