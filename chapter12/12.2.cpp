// string1.cpp -- String class methods
#include <cstring>
// string.h for some
#include "12.2.h"
// includes <iostream>
#include <cctype>

using std::cin;
using std::cout;
// initializing static class member
int String::num_strings = 0;
// static method
int String::HowMany()
{
return num_strings;
}
// class methods
String::String(const char * s)
{
len = std::strlen(s);
str = new char[len + 1];
std::strcpy(str, s);
num_strings++;
}
String::String()
{
len = 4;
str = new char[1];
str[0] = '\0';
num_strings++;
}
// construct String from C string
// set size
// allot storage
// initialize pointer
// set object count
// default constructor
// default string
String::String(const String & st)
{
num_strings++;
// handle static member update
len = st.len;
// same length
str = new char [len + 1]; // allot space
std::strcpy(str, st.str); // copy string to new location
}
String::~String()
{
--num_strings;
delete [] str;
}
// overloaded operator methods
// assign a String to a String


String & String::operator=(const String & st)
{
if (this == &st)
return *this;
delete [] str;
len = st.len;
str = new char[len + 1];
std::strcpy(str, st.str);
return *this;
}
// assign a C string to a String
String & String::operator=(const char * s)
{
delete [] str;
len = std::strlen(s);
str = new char[len + 1];
std::strcpy(str, s);
return *this;
}
// read-write char access for non-const String
char & String::operator[](int i)
{
return str[i];
}
// read-only char access for const String
const char & String::operator[](int i) const
{
return str[i];
}
// overloaded operator friends
bool operator<(const String &st1, const String &st2)
{
return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2)
{
return st2 < st1;
}
bool operator==(const String &st1, const String &st2)
{

	return (std::strcmp(st1.str, st2.str) == 0);
}
// simple String output
ostream & operator<<(ostream & os, const String & st)
{
os << st.str;
return os;
}
// quick and dirty String input
istream & operator>>(istream & is, String & st)
{
char temp[String::CINLIM];
is.get(temp, String::CINLIM);
if (is)
st = temp;
while (is && is.get() != '\n')
continue;
return is;
}

String operator+(const String &st1, const String &st2)
{
	char *str1 = st1.str;
	char *str2 = st2.str; 
	int len1 = std::strlen(str1);
	int len2 = std::strlen(str2);
	char *str3 = new char[len1 + len2 + 1];
	std::strcpy(str3, str1);
	std::strcpy(str3+len1, str2);
	return String(str3);
}

void String::stringlow()
{
	for (int i = 0; i < len; i++)
	{
		str[i] =tolower(str[i]);
		//cout << str[i];
	}

}
void String::stringup()
{
	for (int i = 0; i < len; i++)
	{
		str[i] =toupper(str[i]);
		//cout << str[i];
	}

}

int String::has(char c)
{
	int c_num = 0;
	for (int i = 0; i < len; i++)
	{
		if(str[i]==c)
			++c_num;
	}
	return c_num;
}




