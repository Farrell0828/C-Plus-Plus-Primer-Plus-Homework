// usestack.cpp -- use class Stack
#include <iostream>
#include "stack.h"

int main()
{
	using std::cout;
	using std::endl;
	Item a = 100;
	Item b = 200;
	Item c = 300;
	Item d;
	Stack s1(5);
	s1.Push(a);
	s1.Push(b);
	s1.Pop(d);
	cout << d << endl;
	Stack s2(s1);
	s2.Push(c);
	s2.Pop(d);
	cout << d << endl;
	Stack s3;
	s3 = s2;
	s3.Pop(d);
	cout << d << endl;
	return 0;
}