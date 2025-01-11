//10.3.cpp

#include "10.3.h"
#include <iostream>
#include <cstring>

Golf::Golf(const std::string & name, int hc)
{
	//strncpy(fullname, name, Len-1);
	//fullname[Len-1]='\0';
	fullname = name;
	handicap = hc;
}

Golf & Golf::setgolf(const std::string & name, int hc)
{
	/*
	using std::cin;
	using std::cout;
	using std::endl;
	cout << "Input the fullname: ";
	cin.getline(fullname, Len);
	cout << "Input the handicap: ";
	cin << handicap;
	*/
	Golf temp = Golf(name, hc);
	*this = temp;
	return *this;
}

void Golf::Showgolf() const
{
	using std::cout;
	using std::endl;
	cout << "Full Name: " << fullname << endl;
	cout << "Handicap: " << handicap << endl;
}


