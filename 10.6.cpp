//10.6.cpp
#include "10.6.h"
#include <iostream>
Move Move::add(const Move & m) const
{
	double new_x;
	double new_y;
	new_x = m.x + x;
	new_y = m.y + y;
	Move new_obj = Move(new_x, new_y);
	return new_obj;
}

void Move::showmove() const
{
	std::cout << "The new oject details: \n";
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
}

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
