//13.1.cpp

#include "13.1.h"
#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;

Cd::Cd(char *s1, char *s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	for (int i = 0; i < 50; i++)
		performers[i] = d.performers[i];
	for (int i = 0; i < 20; i++)
		label[i] = d.label[i];
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	strcpy(performers, "Nobody");
	strcpy(label, "000");
	selections = 0;
	playtime = 0;
}



void Cd::Report() const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Number of selections: "<< selections << endl;
	cout << "Playtime: "<< playtime;
}

Cd & Cd::operator = (const Cd & d)
{
	if (this == & d)
		return *this;
	for (int i = 0; i < 50; i++)
		performers[i] = d.performers[i];
	for (int i = 0; i < 20; i++)
		label[i] = d.label[i];
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Cd::~Cd()
{

}


//definition of deprived class
Classic::Classic(char *s1, char *s2, char *s3,int n, double x):Cd(s1, s2, n, x )
{
	strcpy(ms_ps,  s3);
}

Classic::Classic(const Classic & d):Cd(d)
{
	for (int i = 0; i < 50; i++)
		ms_ps[i] = d.ms_ps[i];
}

Classic::Classic():Cd()
{
	strcpy(ms_ps, "N/A");
}


void Classic::Report() const
{
	Report();
	cout << "master piece: " << ms_ps << endl;
}

Classic & Classic::operator = (const Classic & c)
{
	if (this == & c)
		return *this;
	Cd::operator = (c);
	for (int i = 0; i < 50; i++)
		ms_ps[i] = c.ms_ps[i];
	return *this;
}
Classic::~Classic()
{
}
