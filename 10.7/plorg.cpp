// plorg.cpp -- member methord of class Plorg
#include <iostream>
#include <cstring>
#include "plorg.h"

// default constructor, sets name_ to "Plorga", ic_ to 50
Plorg::Plorg()
{
	strcpy(name_, "Plorga");
	ci_ = 50;
}

// constructor
Plorg::Plorg(char *name, int ci)
{
	strcpy(name_, name);
	ci_ = ci;
}

// destructor
Plorg::~Plorg() {}

// sets ci_ of invoking object to new_ci
void Plorg::SetCi(int new_ci)
{
	ci_ = new_ci;
}

// show the information of invoking object
void Plorg::ShowPlorg() const
{
	std::cout << "Name: " << name_ << std::endl;
	std::cout << "CI: " << ci_ << std::endl;
}