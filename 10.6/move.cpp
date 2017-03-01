// move.cpp -- class Move's member functions
#include <iostream>
#include "move.h"

Move::Move(double a, double b)		// constructor
{
	x_ = a;
	y_ = b;
}

// show current x, y values
void Move::ShowMove() const
{
	std::cout << "Current:" << std::endl;
	std::cout << "  x: " << x_ << std::endl;
	std::cout << "  y: " << y_ << std::endl;
}

// this function adds x of m to x of invoking object to get new x
// adds y of m to y of invoking object to get new y, create a new
// Move object initialized to new x, y values and returns it
Move Move::Add(const Move &m) const
{
	
	double new_x = x_ + m.x_;
	double new_y = y_ + m.y_;
	Move temp(new_x, new_y);
	return temp;
}

// resets x, y to a, b
void Move::Reset(double a, double b)
{
	x_ = a;
	y_ = b;
}