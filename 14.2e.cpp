//14.2e.cpp
#include <iostream>
#include "14.2.h"
int main (void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	cout << "Enter name of wine: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of years: ";
	int yrs;
	cin >> yrs;
	Wine holding(lab, yrs); // store label, years, give arrays yrs elements
	holding.GetBottles();
	// solicit input for year, bottle count
	holding.Show();
	// display object contents
//	cout << "I am line 20\n";
	const int YRS = 3;
	int y[YRS] = {1993, 1995, 1998};
	int b[YRS] = { 48, 60, 72};
	// create new object, initialize using data in arrays y and b
	Wine more("Gushing Grape Red",YRS, y, b);
//	cout << "I am line 26\n";
	more.Show();
	cout << "Total bottles for " << more.Label() // use Label() method
	<< ": " << more.sum() << endl;
	// use sum() method
	cout << "Bye\n";
	return 0;
}
