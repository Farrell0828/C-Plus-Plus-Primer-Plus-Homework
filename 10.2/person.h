// person.h -- class Person
#ifndef PERSON_H_
#define PERSON_H_
#include <string>

class Person
{
private:
	static const int Limit = 25;
	std::string lname_;		// Person's last name
	char fname_[Limit];		// Person's first name
public:
	Person() { lname_ = ""; fname_[0] = '\0'; }				// #1
	Person(const std::string &, const char * = "Heyyou");	// #2

	// the following methods display lname and fname
	void Show() const;			// firstname lastname format
	void FormalShow() const;	// lastname firstname format
};
#endif