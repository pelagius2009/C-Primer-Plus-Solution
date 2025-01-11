//8.6.cpp

#include <iostream>
#include <cstring>
using namespace std;


template <typename T> T maxn(T arr[], int n);
template <> const char* maxn(const char* arr[], int n);

template <typename T>
T maxn(T arr[], int n)
{
	T temp = arr[0];
	for (int i = 1; i < n; i ++)
		if (arr[i] > temp)
			temp = arr[i];
	return temp;
}


template <> const char* maxn(const char* arr[], int n)
{
	const char* temp = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (strlen(arr[i]) > strlen(temp))
			temp = arr[i];
	}
	return temp;
}

int main()
{
	int a[6] = {3, 8, 9, 7, 4, 5};
	double b[4] = {3.14, 1.44, 2.71, 0.618};
	cout << "The max of a[] is: " << maxn(a, 6) << endl;
	cout << "The max of b[] is: " << maxn(b, 4) << endl;

	const char* s[5] = {"Hello, world",\
		"Practic makes perfect",\
		"Doubt is the key to knowledge",\
		"Faith can move mountains",\
		"One is never too old to learn"
	};

	cout << "The longest string in c[] is: " << maxn(s, 5) << endl;
	return 0;
}
