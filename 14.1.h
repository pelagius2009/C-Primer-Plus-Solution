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
Pulbic:
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
	typedef std::valarray<int> ArrayINT;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	std::string name; // contained object
	PairArray 


}




#endif
