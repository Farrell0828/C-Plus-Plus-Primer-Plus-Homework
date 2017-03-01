// use_stack.cpp -- using class stack
#include <iostream>
#include "stack.h"

int main()
{
	Item temp;
	Item c1 = { "Farrell Meng", 359.9 };
	Item c2 = { "Yin Wang", 499.9 };
	Item c3 = { "Qian Zhao", 999.9 };
	Stack c_stack;
	double total = 0.0;

	c_stack.Push(c1);
	c_stack.Push(c2);

	c_stack.Pop(temp);
	total += temp.payment;
	std::cout << temp.full_name << " out. The total = " << total << std::endl;

	c_stack.Push(c3);

	c_stack.Pop(temp);
	total += temp.payment;
	std::cout << temp.full_name << " out. The total = " << total << std::endl;

	c_stack.Pop(temp);
	total += temp.payment;
	std::cout << temp.full_name << " out. The total = " << total << std::endl;
}