//10.2.cpp

#include "10.2.h"
#include <iostream>
#include <cstring>

void Person::Show() const
{
	using std::cout;
	using std::endl;
	cout << "firstname lastname format\n";
	cout << fname <<"  "<<lname << endl;
}


void Person::FormalShow() const
{
	using std::cout;
	using std::endl;
	cout << "lastname, firstname format\n";
	cout << lname << "," << fname << endl;
}

Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
    strncpy(fname, fn, LIMIT - 1);
	fname[LIMIT-1] = '\0';
}
