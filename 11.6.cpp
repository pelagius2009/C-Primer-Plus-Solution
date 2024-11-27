// 11.6.cpp

// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;


//#include "stonewt.h"
#include "11.6.h"


// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
stone = int (lbs) / Lbs_per_stn;
// integer division
pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
pounds = lbs;
//mode = ST;
}
// construct Stonewt object from stone, double values
/*
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
	mode = form;
if (form == ST|| form == IPD || form == FPD){
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn +lbs;
}
else
{
	cout << "Form value error" << std::endl;
	cout << "Initializing the class" << std::endl;
	stone = pds_left = pounds = 0;
}

}
*/
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn +lbs;
}


Stonewt::Stonewt()
// default constructor, wt = 0
{
stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt()
{
}
// destructor



// show weight in stones
void Stonewt::show_stn() const
{
cout << stone << " stone, " << pds_left << " pounds\n";
}
// show weight in pounds
void Stonewt::show_lbs() const
{
cout << pounds << " pounds\n";
}


/*
std::ostream & operator<<(std::ostream & os, const Stonewt & b)
{
	if (b.mode == Stonewt::ST)
		os << b.stone << " stone, " << b.pds_left << " pounds\n";
	else if (b.mode == Stonewt::IPD)
		os << (int)b.pounds << " pounds\n";
	else if (b.mode == Stonewt::FPD)
		os << b.pounds << " pounds\n";
	else 
		cout << "Mode error\n";

	return os;
}

*/

Stonewt Stonewt::operator+(const Stonewt & b) const
{
	return Stonewt(pounds + b.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & b) const
{
	return Stonewt(pounds - b.pounds);
}

Stonewt Stonewt::operator*(double n) const
{
	return Stonewt(pounds * n);
}

bool Stonewt::operator==(const Stonewt & s) const
{
	if (pounds == s.pounds)
		return true;
	else 
		return false;
}

bool Stonewt::operator>=(const Stonewt & s) const
{
	if (pounds >= s.pounds)
		return true;
	else 
		return false;
}

bool Stonewt::operator<=(const Stonewt & s) const
{
	if (pounds <= s.pounds)
		return true;
	else 
		return false;
}

bool Stonewt::operator!=(const Stonewt & s) const
{
	if (pounds != s.pounds)
		return true;
	else 
		return false;
}

bool Stonewt::operator>(const Stonewt & s) const
{
	if (pounds > s.pounds)
		return true;
	else 
		return false;
}

bool Stonewt::operator<(const Stonewt & s) const
{
	if (pounds < s.pounds)
		return true;
	else 
		return false;
}


