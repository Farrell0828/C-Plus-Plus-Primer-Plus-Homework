// use_person.cpp -- using class Person
#include <iostream>
#include "person.h"

int main()
{
	Person one;					// use default constructor
	Person two("Smythecraft");	// use #2 one default argument
	Person three("Dimwiddy", "Sam");	// use #2, no defaults
	
	// show one
	one.Show();
	std::cout << std::endl;
	one.FormalShow();
	std::cout << std::endl << std::endl;

	// show two
	two.Show();
	std::cout << std::endl;
	two.FormalShow();
	std::cout << std::endl << std::endl;

	// show three
	three.Show();
	std::cout << std::endl;
	three.FormalShow();
	std::cout << std::endl << std::endl;
}