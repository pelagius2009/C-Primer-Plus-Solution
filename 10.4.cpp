//10.4.cpp
#include "10.4.h"
#include <iostream>
namespace SALES
{

	Sale::Sale()
	{
		for (int i = 0; i < QUARTERS; i++)
			sales[i] = 0;
		average = 0;
		max = 0;
		min = 0;
	}

Sale::Sale(double arr[], int num)
{
	double total;
	double temp;
	max = min = arr[0];
	int i;
	for (i = 0; i < num; i++)
	{
		temp = arr[i];
		sales[i] = arr[i];
		total += temp;
		if (temp > max)
			max = temp;
		if (temp < min)
			min = temp;
	}
	average = total / (i + 1);
	for (int j = i; j < QUARTERS; j++)
		sales[j] = 0;
}


Sale & Sale::setSales()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double arr[QUARTERS];
	for (int i = 0; i < QUARTERS; i++)
	{
		cout << "Enter the sales of quarter "\
			<< i + 1 << " :";
		cin >> arr[i];
	}
	*this = Sale(arr, QUARTERS);
	return *this;
/*
	double total;
	double temp;
	min =  max = sales[0];
	for (int i = 0; i < QUARTERS; i++)
	{
		temp = sales[i];
		total += temp;
		if (temp > max)
			max = temp;
		if (temp < min)
			min = temp;
	}
	average = total / QUARTERS;
*/
}


const void Sale::showSales() const
{
	using std::cout;
	using std::cin;
	using std::endl;
	for (int i = 0; i < QUARTERS; i++)
	{
		cout << "Sales of quarter " << i+1 << ": "\
			<< sales[i] << endl;
	}
		cout << "Average: " << average << endl;
		cout << "Max: " << max << endl;
		cout << "Min: " << min << endl;

}


}
