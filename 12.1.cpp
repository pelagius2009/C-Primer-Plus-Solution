//12.1.cpp

#include <iostream>
#include "12.1.h"
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

//constructor function
Cow::Cow(const char * nm, const char * ho, double wt)
{
	strcpy(name, nm);
	hobby = new char[std::strlen(ho) + 1];
	weight = wt;
}

Cow::Cow()
{
	name[0] = '\0';
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0;
}

Cow::Cow(const Cow & c)
{
	//name = c.name;   //not allowed
	memcpy(name, c.name, sizeof(c.name));
	hobby = new char [std::strlen(c.hobby) + 1];
	weight = c.weight;
}

Cow::~Cow() //deconstructor
{
	delete [] hobby; //name[] is static array, it will be automatically deleteted
}

Cow & Cow:: operator = (const Cow & c)
{
	if (this == & c)
		return *this;
	delete [] hobby;
	hobby = new char[std::strlen(c.hobby)+1];
	std::strcpy(hobby, c.hobby);
	memcpy(name, c.name, sizeof(c.name));
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	cout <<"Cow name: ";
	cout << name << endl;
	cout << "Hobby: ";
	cout << hobby << endl;
	cout << "Weight: ";
	cout << weight << endl;
}

