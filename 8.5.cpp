//8.5.cpp

#include <iostream>
using namespace std;


template <typename T>
T max5(const T arr[]);

template <typename T>
T max5(const T arr[])
{
	T temp = arr[0];
	for (int i = 1; i < 5; i ++)
		if (arr[i] > temp)
			temp = arr[i];
	return temp;
}


int main()
{
	int a[5] = {3, 8, 9, 7, 4};
	double b[5] = {3.14, 1.44, 2.71, 0.618, 8.14};
	cout << "The max of a[] is: " << max5(a) << endl;
	cout << "The max of b[] is: " << max5(b) << endl;

	return 0;
}
