//16.4.cpp

#include<iostream>
#include<algorithm>

int reduce(long ar[], int n);

int main()
{
	using std::cout;
	using std::endl;
	//const int NUM = 6;
	long arr[] = {323,51,987,51,232,1,6532,51,232,1,1,1};
	int NUM = sizeof(arr)/8;
	cout << "NUM = " << NUM << endl;
	cout << "The original array is: ";
	for(int i = 0; i < NUM; i++)
		cout << arr[i] << ",";

	cout << "\nThe array after sorting and squeezing is: ";
	int new_len = reduce(arr, NUM);
	for(int i = 0; i < new_len; i++)
		cout << arr[i] << ",";
	cout << endl;
	return 0;
}




int reduce(long ar[], int n)
{
	using std::sort;
	sort(ar, ar+n);
	auto last = std::unique(ar, ar+n);
	return last - ar;
}
