//8.4.cpp

#include <iostream>
using namespace std;
#include <cstring>
struct stringy{
	char * str;
	int ct;
};

const int ArrSize = 30;
void set(stringy & b, const char * str);
void set(stringy & b, const char * str)
{
	int len = strlen(str);
	b.str =  new char[len];
	strcpy(b.str, str);
	b.ct =  len;
}

void show(stringy & b, int i = 1);
void show(stringy & b, int i)
{
	for (int j = 0; j < i; j++)
	{	
		cout << b.str << endl;
		cout << b.ct << endl;
	}
}


void show(const char * str, int i = 1 );
void show(const char * str, int i) 
{
	for (int j = 0; j < i; j++)
		cout << str << endl;
}

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");

	delete beany.str;
	return 0;
}



	
