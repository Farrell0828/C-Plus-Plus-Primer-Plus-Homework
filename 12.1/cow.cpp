// class Cow methods
#include <iostream>
#include <cstring>
#include "cow.h"
Cow::Cow()
{
	strcpy(name_, "No name");
	hobby_ = new char[1];
	strcpy(hobby_, "");
	weight_ = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
	strcpy(name_, nm);
	hobby_ = new char[strlen(ho) + 1];
	strcpy(hobby_, ho);
	weight_ = wt;
}

Cow::Cow(const Cow &c)
{
	strcpy(name_, c.name_);
	hobby_ = new char[strlen(c.hobby_) + 1];
	strcpy(hobby_, c.hobby_);
	weight_ = c.weight_;
}

Cow::~Cow()
{
	delete[] hobby_;
}

Cow & Cow::operator=(const Cow & c)
{
	if (this == &c)
		return *this;
	delete[] hobby_;
	strcpy(name_, c.name_);
	hobby_ = new char[strlen(c.hobby_) + 1];
	strcpy(hobby_, c.hobby_);
	weight_ = c.weight_;
	return *this;
}

void Cow::ShowCow() const
{
	std::cout << "  Name: " << name_ << std::endl;
	std::cout << "  Hobby: " << hobby_ << std::endl;
	std::cout << "  Weight: " << weight_ << std::endl;
}