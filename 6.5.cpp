//6.5.cpp

#include<iostream>

using namespace std;

int main()
{
	cout << "Please enter your income, the tax will be caculated.\n";

	int income;
	double tax;
	while((cin >> income) && income >=0)
	{
		if (income <= 5000)
			tax = 0;
			else if (income <= 15000)
				tax = (income - 5000) * 0.1;
			else if (income <= 35000)
				tax = (income - 15000) * 0.15 + 10000 * 0.1;
			else 
				tax = (income - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
		cout << "You have to pay " << tax << " tvarp in personal income tax.\n";
		cout << "Please enter your income: ";
	}

	cout << "Working hard to earn more!\n";
	return 0;

}


