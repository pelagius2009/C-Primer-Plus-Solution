//13.2.cpp

#include "13.2.h"
#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;

Cd::Cd(char *s1, char *s2, int n, double x)
{
//	strcpy(performers, s1);
//	strcpy(label, s2);
	performers = new char[std::strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[std::strlen(s2) + 1];
   	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
/*
	for (int i = 0; i < 50; i++)
		performers[i] = d.performers[i];
	for (int i = 0; i < 20; i++)
		label[i] = d.label[i];
*/
	performers = new char[std::strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	performers = new char[std::strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;


}

Cd::Cd()
{

	performers = new char[6];
	strcpy(performers, "Nobody");
	label = new char[3];
	strcpy(label, "000");

//	performers = NULL;
//	label = NULL;
	selections = 0;
	playtime = 0;
}



void Cd::Report() const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Number of selections: "<< selections << endl;
	cout << "Playtime: "<< playtime <<endl;
}

Cd & Cd::operator = (const Cd & d)
{
	if (this == & d)
		return *this;
/*
	for (int i = 0; i < 50; i++)
		performers[i] = d.performers[i];
	for (int i = 0; i < 20; i++)
		label[i] = d.label[i];
*/

	delete [] performers;
	delete [] label;
	performers = new char[std::strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[std::strlen(d.label) + 1];
	strcpy(label, d.label);

	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Cd::~Cd()
{
	cout << "To be destrcted: \n";
	this->show_per();
	cout << "Destructor__Cd:begin\n";
	delete [] performers;
	delete [] label;
	Cd_count ++;
	cout << "Destructor__Cd:end"<< endl;
}


//definition of deprived class
Classic::Classic(char *s1, char *s2, char * s3, int n, double x):Cd(s1, s2, n, x )
{
	ms_ps = new char[std::strlen(s3) + 1];
	strcpy(ms_ps,  s3);
}

Classic::Classic(const Classic & c):Cd(c)
{
/*
	for (int i = 0; i < 50; i++)
		ms_ps[i] = d.ms_ps[i];
*/
	ms_ps = new char[std::strlen(c.ms_ps) + 1];
	strcpy(ms_ps, c.ms_ps);

}

Classic::Classic():Cd()
{

	ms_ps = new char[3];
	strcpy(ms_ps, "N/A");

//	ms_ps = NULL;
}


void Classic::Report() const
{
	cout << "Classic report: \n";
	Cd::Report();
	cout << "master piece: " << ms_ps << endl;
}

Classic & Classic::operator = (const Classic & c)
{
	if (this == & c)
		return *this;
	Cd::operator = (c);
	delete [] ms_ps;
/*
	for (int i = 0; i < 50; i++)
		ms_ps[i] = c.ms_ps[i];
*/

	ms_ps = new char[std::strlen(c.ms_ps) + 1];
	strcpy(ms_ps, c.ms_ps);

	return *this;
}
Classic::~Classic()
{
	cout << "Destructor__Classic:begin\n";
	//cout << "I am line 150!\n";
	delete [] ms_ps;
	cout << "Destructor__Classic:end\n";
}
