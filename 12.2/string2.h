// string2.h -- class String2 definition
#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char *str_;
	int len_;
	static int num_strings_;
	static const int CINLIM = 80;
public:
	String(const char *s);
	String();
	String(const String &);
	~String();
	int length() const { return len_; }
	String & operator=(const String &);
	String & operator=(const char *);
	char & operator[](int i);
	const char & operator[](int i) const;
	friend bool operator<(const String &st1, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st1, const String &st2);
	friend ostream & operator<<(ostream &os, const String &st);
	friend istream & operator>>(istream &is, String &st);
	static int HowMany();

	// new add
	String operator+(const String &st) const;
	String operator+(const char *s) const;
	friend String operator+(const char *s, const String &st);
	void StringLow();
	void StringUp();
	int Has(const char &s) const;
};
#endif