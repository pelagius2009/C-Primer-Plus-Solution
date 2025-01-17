//18.4.cpp
//using lambda tu re-write code list 16.15,
//using lambda function with name to replace outint()
//using 2 lambda functions without name to replace functor

// functor.cpp -- using a functor

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

/*
template<class T> // functor class defines operator()()
class TooBig
{
private:
T cutoff;
public:
TooBig(const T & t) : cutoff(t) {}[](int n){cout << n << " ";}
bool operator()(const T & v) { return v > cutoff; }
};
*/
//void outint(int n) {std::cout << n << " ";}

int main()
{
using std::list;
using std::cout;
using std::endl;
//TooBig<int> f100(100); // limit = 100
auto outint = [](int n){std::cout << n << " ";};
int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
list<int> yadayada(vals, vals + 10); // range constructor
list<int> etcetera(vals, vals + 10);
// C++11 can use the following instead
// list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
// list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
cout << "Original lists:\n";
for_each(yadayada.begin(), yadayada.end(), outint);
cout << endl;
for_each(etcetera.begin(), etcetera.end(), outint);
cout << endl;
//yadayada.remove_if(f100);
yadayada.remove_if([](int n){return n > 100;});
// use a named function object
//etcetera.remove_if(TooBig<int>(200));
etcetera.remove_if([](int n){return n > 200;});
// construct a function object
cout <<"Trimmed lists:\n";
for_each(yadayada.begin(), yadayada.end(), outint);
cout << endl;
for_each(etcetera.begin(), etcetera.end(), outint);
cout << endl;
return 0;
}
