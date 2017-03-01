// string2.cpp -- class String methods
#include <cstring>
#include <cctype>
#include "string2.h"
using std::cout;
using std::cin;
int String::num_strings_ = 0;

int String::HowMany()
{
	return num_strings_;
}

String::String(const char *s)
{
	len_ = std::strlen(s);
	str_ = new char[len_ + 1];
	std::strcpy(str_, s);
	num_strings_++;
}

String::String()
{
	len_ = 4;
	str_ = new char[1];
	str_[0] = '\0';
	num_strings_++;
}

String::String(const String &st)
{
	num_strings_++;
	len_ = st.len_;
	str_ = new char[len_ + 1];
	std::strcpy(str_, st.str_);
}

String::~String()
{
	--num_strings_;
	delete[] str_;
}

String & String::operator=(const String &st)
{
	if (this == &st)
		return *this;
	delete[] str_;
	len_ = st.len_;
	str_ = new char[len_ + 1];
	std::strcpy(str_, st.str_);
	return *this;
}

String & String::operator=(const char *s)
{
	delete[] str_;
	len_ = std::strlen(s);
	str_ = new char[len_ + 1];
	std::strcpy(str_, s);
	return *this;
}

char & String::operator[](int i)
{
	return str_[i];
}

const char & String::operator[](int i) const
{
	return str_[i];
}

bool operator<(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str_, st2.str_) < 0);
}

bool operator>(const String &st1, const String &st2)
{
	return (st2 < st1);
}

bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str_, st2.str_) == 0);
}

ostream & operator<<(ostream &os, const String &st)
{
	os << st.str_;
	return os;
}

istream & operator>>(istream &is, String &st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}

// new add
String String::operator+(const String &st) const
{
	String temp;
	temp.len_ = len_ + st.len_;
	temp.str_ = new char[temp.len_ + 1];
	strcpy(temp.str_, this->str_);
	strcpy(temp.str_ + len_, st.str_);
	return temp;
}

String String::operator+(const char *s) const
{
	return (*this + String(s));
}

String operator+(const char *s, const String &st)
{
	return (String(s) + st);
}

void String::StringLow()
{
	for (int i = 0; i < len_; ++i)
		str_[i] = tolower(str_[i]);
}

void String::StringUp()
{
	for (int i = 0; i < len_; ++i)
		str_[i] = toupper(str_[i]);
}

int String::Has(const char &c) const
{
	int count = 0;
	for (int i = 0; i < len_; ++i)
		if (str_[i] == c)
			++count;
	return count;
}