// use_list.cpp -- using class list
#include <iostream>
#include "list.h"
void fun(Item &);

int main()
{
	List la;
	while (!(la.IsFull()))
	{
		std::cout << "Enter a data: ";
		Item temp;
		if (std::cin >> temp)
			la.Add(temp);
		else
			break;
	}
	void(*pf)(Item &) = fun;
	if (!(la.IsEmpty()))
		la.Visit(pf);
	else
		std::cout << "Can't visit anything. The list is empty.\n";
	return 0;
}

void fun(Item &data)
{
	std::cout << data + 1 << "  ";
}