//14.2.cpp

#include "14.2.h"
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

/*
PairArray & PairArray::operator=(PairArray(ArrayInt(), ArrayInt()))
{
	*this.first() = PairArray.first();
	*this.second() = PairArray.second();
	return *this;
}
*/


Wine::Wine(const char * l, int y, const int yr[], const int bot[])
{
	//w_name = l;
	(string &) * this = l;
	w_year = y;

//	ArrayInt a1(y);
//	ArrayInt a2(y);
  //  (ArrayInt &)* this = PairArray(a1, a2);
	//w_feat.first() = ArrayInt(y);
	//w_feat.second() = ArrayInt(y);

	PairArray::first() = ArrayInt(y);
	PairArray::second() = ArrayInt(y);


    
	for (int i = 0; i < w_year; i++)
	{
	//	w_feat.first()[i] = yr[i];
	//	w_feat.second()[i] = bot[i];
		PairArray::first()[i] = yr[i];
		PairArray::second()[i] = bot[i];
	}	

}

Wine::Wine(const char *l, int y)
{
//	w_name = l;
	(string &) * this = l;
	w_year = y;
//	w_feat.first() = ArrayInt(y);
//	w_feat.second() = ArrayInt(y);
	PairArray::first() = ArrayInt(y);
	PairArray::second() = ArrayInt(y);

//    (ArrayInt &)* this = PairArray(ArrayInt(y), ArrayInt(y));

}

void Wine::GetBottles()
{
	int yr;
	int bot;
	cout << "Enter "<< (const string &)(*this) << " data for "<< w_year << " year(s):\n";
	for (int i = 0; i < w_year; i++)
	{
		cout << "Enter year: ";
        //cin >> w_feat.first()[i];
		cin >> PairArray::first()[i];
		cin.get();
		cout << "Enter bottles for that year: ";
		//cin >> w_feat.second()[i];
		cin >> PairArray::second()[i];
	}	
}


int Wine::sum()
{
	int tot_b = 0;
	for (int i = 0; i < w_year; i++)
	{
		//tot_b = tot_b + w_feat.second()[i];
		tot_b = tot_b + PairArray::second()[i];
	}
	return tot_b;
}


void Wine::Show() const
{
	//cout << "Wine: "<< w_name << endl;
	cout << "Wine: "<< (const string &)(*this) << endl;
	cout << "\tYear" << "\tBottles" << endl;
	for (int i = 0; i < w_year; i++)
	{
		cout << "\t"<< PairArray::first()[i];
		cout << "\t"<< PairArray::second()[i];
		cout << endl;
	}	
}

const std::string & Wine:: Label() const
{
	return (const string &) * this;
}



