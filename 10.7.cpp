//10.7.cpp
#include "10.7.h"
#include <cstring>
#include <string>
#include <iostream>

Plorg::Plorg(const char * fn, int CI_P)
{
	int len = strlen(fn);
	strncpy(fname, fn, len);
	fname[len] = '\0';
	CI = CI_P;
}


void Plorg::setCI(int a)
{
	CI = a;
}

const void Plorg::show_plorg() const
{
	
	std::cout << "The name is: "<< fname << std::endl;
	std::cout << "The CI is: "<< CI << std::endl;
}
