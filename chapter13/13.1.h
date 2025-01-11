//13.1.h
#ifndef CD_H_
#define CD_H_

//base class
class Cd{
	private:
char performers[50];
char label[20];
int selections;
double playtime;

public:
Cd(char * s1, char * s2, int n, double x);
Cd(const Cd & d);
Cd();
~Cd();
virtual void Report() const;
virtual Cd & operator = (const Cd & d);
};

//
class Classic:public Cd
{
private:
char ms_ps[50];

public:
Classic(char *s1, char *s2, char * s3, int n, double x);
Classic(const Classic & c);
Classic();
~Classic();
virtual void Report() const;
virtual Classic & operator = (const Classic & c);
	 
};















#endif










