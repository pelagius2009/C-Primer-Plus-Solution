//13.3.h
// dma.h -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// ABC Class

class DMA
{
private:
char * label;
int rating;
public:
DMA(const char * l = "null", int r = 0);
DMA(const DMA & rs);
virtual ~DMA();
DMA & operator=(const DMA & rs);
friend std::ostream & operator<<(std::ostream & os, const DMA & rs);
virtual void View();
};



//derived class using DMA
class baseDMA: public DMA
{
//private:
//char * label;
//int rating;
public:
baseDMA(const char * l = "null", int r = 0);
baseDMA(const baseDMA & rs);
virtual ~baseDMA();
baseDMA & operator=(const baseDMA & rs);
friend std::ostream & operator<<(std::ostream & os,const baseDMA & rs);
};
// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA :public DMA
{
private:
enum { COL_LEN = 40};
char color[COL_LEN];
public:
lacksDMA(const char * c = "blank", const char * l = "null",
int r = 0);
lacksDMA(const char * c, const DMA & rs);
friend std::ostream & operator<<(std::ostream & os,const lacksDMA & rs);
void View();
};
// derived class with DMA
class hasDMA :public DMA
{
private:
char * style;
public:
hasDMA(const char * s = "none", const char * l = "null",
int r = 0);
hasDMA(const char * s, const DMA & rs);
hasDMA(const hasDMA & hs);
~hasDMA();
hasDMA & operator=(const hasDMA & rs);
friend std::ostream & operator<<(std::ostream & os,const hasDMA & rs);
void View();
};
#endif
