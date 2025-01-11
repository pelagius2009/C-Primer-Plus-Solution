//13.4.cpp

#include "13.4.h"
#include <cstring>
#include <iostream>
Port::Port(const char * br, const char * str, int b)
{
	brand = new char [std::strlen(br) + 1];
	std::strcpy(brand, br);
	std::strcpy(style, str);
	bottles = b;
}

Port::Port(const Port & p)
{
	brand = new char [std::strlen(p.brand) + 1];
	std::strcpy(brand, p.brand);
	for (int i = 0; i < 20; i++)
		style[i] =  p.style[i];
	bottles = p.bottles;

}

Port & Port:: operator = (const Port & p)
{
	if (this == & p)
		return *this;
	delete [] brand;
	brand = new char [std::strlen(p.brand) + 1];
	std::strcpy(brand, p.brand);
	for (int i = 0; i < 20; i++)
		style[i] =  p.style[i];
	bottles = p.bottles;
	return *this;
}

Port & Port:: operator += (int b)
{
	bottles += b;
	return *this;
}

Port & Port:: operator -= (int b)
{
	if (bottles - b >= 0)
		{
			bottles -= b;
			return *this;
		}
	else
		{
			std::cout<<"Not enough bottles!\n";
			return *this;		
		}
	return *this;
}

void Port::Show()const
{
	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Botles: " << bottles << endl;
}

ostream & operator << (ostream & os, const Port & p)
{
	os << p.brand <<", "<< p.style << ", "<< p.bottles  ;
	return os;
}

VintagePort::VintagePort()
{

}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y):Port(br,"none",b)
{

	nickname = new char [std::strlen(nn) + 1];
	std::strcpy(nickname, nn);
	year =  y;
}

VintagePort::VintagePort(const VintagePort & vp):Port(vp)
{
	nickname = new char [std::strlen(vp.nickname) + 1];
	std::strcpy(nickname, vp.nickname);
	year = vp.year;

}

VintagePort & VintagePort:: operator=(const VintagePort & vp)
{
	if (this == & vp)
		return *this;
	
	delete [] nickname;
	Port::operator = (vp);
	delete [] nickname;
	nickname = new char [std::strlen(vp.nickname) + 1];
	std::strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show()const
{
	Port::Show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}


ostream & operator << (ostream & os, const VintagePort & vp)
{
	
	os << (const Port &) vp;
	os << "Nickname:" << vp.nickname << ", " << "Year: " << vp.year << endl;
	return os;
}



