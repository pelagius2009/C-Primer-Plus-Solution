//8.7.cpp

#include <iostream>

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T * arr[], int n);

template <typename T>
T SumArray(T arr[], int n)
{
	T sum = arr[0];
	for (int i = 1; i < n; i++)
	{
		sum = sum + arr[i];
	}
	return sum;

}

template <typename T>
T SumArray(T * arr[], int n)
{
	T sum = * arr[0];
	for (int i = 1; i < n; i++)
	{
		sum = sum + * arr[i];
	}
	return sum;
}



struct debts
{
	char name[50];
	double amount;
};


int main()
{
	using namespace std;
	int things[6]={13, 31, 103, 301, 310, 130};
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[3];
	
	for (int i =0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "The sum of things is: " << SumArray(things, 6) << endl;
	cout  << "The sum of pd is: " << SumArray(pd, 3) << endl;
	
	return 0;

}
