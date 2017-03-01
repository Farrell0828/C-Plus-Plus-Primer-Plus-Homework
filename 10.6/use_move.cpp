// use_move.cpp -- using class Move
#include <iostream>
#include "move.h"

int main()
{
	Move m1;
	m1.ShowMove();
	Move m2(4.0, 5.0);
	m2.ShowMove();
	Move m3 = m1.Add(m2);
	m3.ShowMove();
	m1.Reset(6.6, 8.8);
	Move m4 = m3.Add(m1);
	m4.ShowMove();
	return 0;
}