//14.1.h

#ifndef WINE_H_
#define WINE_H_
#include <iostream>
#include <string>
#include <valarray>

template <class T1, class T2>
class Pair
{
private:
	T1 a;
	T2 b;
public:
	T1 & first();
	T2 & second();
	T1 first() const { return a;}
	T2 second() const { return b;}
	Pair(const T1 & aval, const T2 & bval): a(aval), b(bval){}
	Pair(){}
};

template<class T1, class T2>
T1 & Pair<T1, T2>::first()
{
	return a;
}
template<class T1, class T2>
T2 & Pair<T1, T2>::second()
{
	return b;
}


class Wine
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	std::string w_name; // wine name
	PairArray w_feat; // wine feature
	int w_year;//number of years
public:
	Wine(const char * l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	void GetBottles();
    const std::string & Label() const{return w_name;}
	int sum();
	void Show() const;
};



#endif
