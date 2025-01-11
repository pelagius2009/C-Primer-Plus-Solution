//14.1.cpp

#include "14.1.h"
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
Wine::Wine(const char * l, int y, const int yr[], const int bot[])
{
	w_name = l;
	w_year = y;
//	w_feat = PairArray(yr, bot);

	//int * ptr_y =&(w_feat.first());
	//int * ptr_b =&(w_feat.second());

	w_feat.first() = ArrayInt(y);
	w_feat.second() = ArrayInt(y);

	for (int i = 0; i < w_year; i++)
	{
		w_feat.first()[i] = yr[i];
		w_feat.second()[i] = bot[i];
	}	
}

Wine::Wine(const char *l, int y)
{
	w_name = l;
	w_year = y;
	w_feat.first() = ArrayInt(y);
	w_feat.second() = ArrayInt(y);
}

void Wine::GetBottles()
{
	int yr;
	int bot;
	cout << "Enter "<< w_name << " data for "<< w_year << " year(s):\n";
	for (int i = 0; i < w_year; i++)
	{
		cout << "Enter year: ";
        cin >> w_feat.first()[i];
		cin.get();
		cout << "Enter bottles for that year: ";
		cin >> w_feat.second()[i];
	}	
}


int Wine::sum()
{
	int tot_b = 0;
	for (int i = 0; i < w_year; i++)
	{
		tot_b = tot_b + w_feat.second()[i];
	}
	return tot_b;
}


void Wine::Show() const
{
	cout << "Wine: "<< w_name << endl;
	cout << "\tYear" << "\tBottles" << endl;
	for (int i = 0; i < w_year; i++)
	{
		cout << "\t"<< w_feat.first()[i];
		cout << "\t"<< w_feat.second()[i];
		cout << endl;
	}	
}


