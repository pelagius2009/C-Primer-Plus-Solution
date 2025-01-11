//15.2.cpp
//error4.cpp – using exception classes
#include "15.2.h"
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
//#include "exc_mean.h"
// function prototypes
using std::string;
double hmean(double a, double b);
double gmean(double a, double b);

h_err::h_err(const string & s):std::logic_error(s)
{
}

g_err::g_err(const string & s):std::logic_error(s)
{
}



int main()
{
using std::cout;
using std::cin;
using std::endl;
double x, y, z;
cout << "Enter two numbers: ";
while (cin >> x >> y)
{
	try {
	// start of try block
	z = hmean(x,y);
	cout << "Harmonic mean of " << x << " and " << y
	<< " is " << z << endl;
	}
	catch (h_err & he)
	{
		cout << he.what() << endl;
		cout << "Try again.\n";
		continue;
	}


	try{
	cout << "Geometric mean of " << x << " and " << y
	<< " is " << gmean(x,y) << endl;
	cout << "Enter next set of numbers <q to quit>: ";
	}// end of try block

	/*
	catch (bad_hmean & bg)
	// start of catch block
	{
	bg.mesg();
	cout << "Try again.\n";

	continue;
	}
	*/

	/*
	catch (bad_gmean & hg)
	{
	cout << hg.mesg();
	cout << "Values used: " << hg.v1 << ", "
	<< hg.v2 << endl;
	cout << "Sorry, you don't get to play any more.\n";
	break;
	} // end of catch block
	*/

	catch (g_err & ge)
	{
	cout << ge.what() << endl;
	cout << "Sorry, you don't get to play any more.\n";
	break;
	} // end of catch block

}
cout << "Bye!\n";
return 0;
}
double hmean(double a, double b)
{
if (a == -b)
 // throw bad_hmean(a,b);
	throw h_err();
	return 2.0 * a * b / (a + b);
}
double gmean(double a, double b)
{
if (a < 0 || b < 0)
//throw bad_gmean(a,b);
	throw g_err();
	return std::sqrt(a * b);
}


