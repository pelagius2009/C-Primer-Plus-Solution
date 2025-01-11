//18.3.cpp
#include <iostream>

using namespace std;
long double sum_value(){}
template<typename T>
long double sum_value(T value)
{
	return value;
}

template <typename T, typename... Args>
long double sum_value(T value, Args... args)
{
//	cout << "called...\n";
	long double temp =  value + sum_value(args...);
//	cout << temp << endl;
	return temp;
}




int main()
{
	cout << sum_value(1, 2.0, 3.14159, 2.71828, 6.62606) << endl;
	return 0;
}



