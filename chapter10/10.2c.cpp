//10.2c.cpp
#include "10.2.h"
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy","Sam");
	one.Show();
	cout << endl;
	one.FormalShow();
	two.Show();
	cout << endl;
	two.FormalShow();
	three.Show();
	cout << endl;
	three.FormalShow();

	return 0;
}
