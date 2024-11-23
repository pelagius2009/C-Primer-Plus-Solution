//wp.cpp
//To find what is char *, char * arr[]
#include <iostream>
using namespace std;

int main()
{
	const char * arr = "Hello world";
	cout << arr << endl;

	cout << "* arr = " << * arr << endl;

	cout <<"& arr = " << & arr << endl;

	return 0;
}
