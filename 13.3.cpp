//13.3.cpp
// dma.cpp --dma class methods
#include "13.3.h"
#include <cstring>

//ABC DMA method
DMA::DMA(const char * l, int r)
{
label = new char[std::strlen(l) + 1];
std::strcpy(label, l);
rating = r;
}
DMA::DMA(const DMA & rs)
{
label = new char[std::strlen(rs.label) + 1];
std::strcpy(label, rs.label);
rating = rs.rating;
}
DMA::~DMA()
{
delete [] label;
}
/*
DMA & DMA::operator=(const DMA & rs)
{
if (this == &rs)
return *this;
delete [] label;
label = new char[std::strlen(rs.label) + 1];
std::strcpy(label, rs.label);
rating = rs.rating;
return *this;
}
*/

std::ostream & operator<<(std::ostream & os, const DMA & rs)
{
os << "Label: " << rs.label << std::endl;
os << "Rating: " << rs.rating << std::endl;
return os;
}

void DMA::View()
{
	std::cout << "Label: " << label << std::endl;
	std::cout << "Rating: "<< rating << std::endl;
}
// baseDMA methods
baseDMA::baseDMA(const char * l, int r):DMA(l, r)
{
//label = new char[std::strlen(l) + 1];
//std::strcpy(label, l);
//rating = r;
}
baseDMA::baseDMA(const baseDMA & rs):DMA(rs)
{
//label = new char[std::strlen(rs.label) + 1];
//std::strcpy(label, rs.label);
//rating = rs.rating;
}
baseDMA::~baseDMA()
{
//delete [] label;
}

/*
baseDMA & baseDMA::operator=(const baseDMA & rs)
{
if (this == &rs)
return *this;
//delete [] label;
label = new char[std::strlen(rs.label) + 1];
std::strcpy(label, rs.label);
rating = rs.rating;
return *this;
}
*/
/*
std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
os << "Label: " << rs.label << std::endl;
os << "Rating: " << rs.rating << std::endl;
return os;
}
*/
// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r)
: DMA(l, r)
{
std::strncpy(color, c, 39);
color[39] = '\0';
}
lacksDMA::lacksDMA(const char * c, const DMA & rs)
: DMA(rs)
{
std::strncpy(color, c, COL_LEN - 1);
color[COL_LEN - 1] = '\0';
}
std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
os << (const DMA &) ls;
os << "Color: " << ls.color << std::endl;
return os;
}
void lacksDMA::View()
{
	DMA::View();
	std::cout << "Color: " << color << std::endl;
}



// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r)
: DMA(l, r)
{
style = new char[std::strlen(s) + 1];
std::strcpy(style, s);
}


hasDMA::hasDMA(const char * s, const DMA & rs)
: DMA(rs)
{
style = new char[std::strlen(s) + 1];
std::strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA & hs)
: DMA(hs) // invoke base class copy constructor
{
style = new char[std::strlen(hs.style) + 1];
std::strcpy(style, hs.style);
}
hasDMA::~hasDMA()
{
delete [] style;
}
hasDMA & hasDMA::operator=(const hasDMA & hs)
{
if (this == &hs)
return *this;
baseDMA::operator=(hs); // copy base portion
delete [] style;
// prepare for new style
style = new char[std::strlen(hs.style) + 1];
std::strcpy(style, hs.style);
return *this;
}
std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
os << (const DMA &) hs;
os << "Style: " << hs.style << std::endl;
return os;
}
void hasDMA::View()
{
	DMA::View();
	std::cout << "Style: " << style << std::endl;
}
