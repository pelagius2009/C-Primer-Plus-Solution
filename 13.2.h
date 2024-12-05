//13.2.h
#ifndef CD_H_
#define CD_H_

#include <iostream>
static int Cd_count; // calling times of destructor
//base class
class Cd{
	private:
//char performers[50];
//char label[20];

char * performers;
char * label;
int selections;
double playtime;

public:
Cd(char * s1, char * s2, int n, double x);
Cd(const Cd & d);
Cd();
virtual ~Cd();
virtual void Report() const;
virtual Cd & operator = (const Cd & d);
static int getCount()
	{return Cd_count; }
void show_per(){std::cout << performers << std::endl;}
};

//
class Classic:public Cd
{
private:
//char ms_ps[50];
char * ms_ps;
public:
Classic(char *s1, char *s2, char * s3, int n, double x);
Classic(const Classic & c);
Classic();
~Classic();
virtual void Report() const;
virtual Classic & operator = (const Classic & c);
	 
};



#endif










