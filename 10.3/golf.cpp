// golf.cpp -- class golf
#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf()
{
	full_name_[0] = '\0';
	handicap_ = 0;
}

Golf::Golf(const char *full_name, int handicap)
{
	strcpy(full_name_, full_name);
	handicap_ = handicap;
}

int Golf::SetGolf()
{
	Golf temp;
	std::cout << "Enter name: ";
	std::cin.getline(temp.full_name_, Len);
	if (strlen(temp.full_name_) == 0)
	{
		return 0;
	}
	else
	{
		std::cout << "Enter handicap: ";
		std::cin >> temp.handicap_;
		std::cin.get();
		*this = temp;
		return 1;
	}
}

void Golf::ShowGolf() const
{
	std::cout << "Name: " << full_name_ << std::endl;
	std::cout << "Handicap: " << handicap_ << std::endl;
}

void Golf::SetHandicap(int handicap)
{
	handicap_ = handicap;
}