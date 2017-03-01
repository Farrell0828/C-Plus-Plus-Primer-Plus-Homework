// list.cpp -- class list's member methords
#include <iostream>
#include "list.h"

// default constructor
List::List()
{
	top_ = 0;
}

// If the list is empty, return true, else return false.
bool List::IsEmpty()
{
	if (top_ == 0)
		return true;
	else
		return false;
}

// If the list is full, return true, else return false.
bool List::IsFull()
{
	if (top_ == Max)
		return true;
	else
		return false;
}

// Add data to the list. If successful return true,
// else return false.
bool List::Add(const Item &data)
{
	if ((*this).IsFull())
	{
		std::cout << "Fail! The list is full.\n";
		return false;
	}
	else
	{
		ar_[top_] = data;
		top_++;
		std::cout << "Successful!\n";
		return true;
	}
}

void List::Visit(void(*pf)(Item &))
{
	for (int i = 0; i < top_; ++i)
		(*pf)(ar_[i]);
}