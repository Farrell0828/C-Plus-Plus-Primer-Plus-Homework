// person.cpp -- calss Person
#include <iostream>
#include <cstring>
#include "person.h"

Person::Person(const std::string &lname, const char *fname)
{
	lname_ = lname;
	strcpy(fname_, fname);
}

void Person::Show() const
{
	std::cout << fname_ << " " << lname_ << std::endl;
}

void Person::FormalShow() const
{
	std::cout << lname_ << " " << fname_ << std::endl;
}