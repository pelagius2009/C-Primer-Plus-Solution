//5.2  caculate factorial
#include <iostream>
#include <array>

int main()
{
	using namespace std;
	int fac_num; 
	int ArSize;
	
	/*
	cout << "Enter the factorial number: ";
	cin >> fac_num;
	const int ArSize = fac_num + 1;
	*/

	array <long double, 101> factorials;
	factorials[0] = factorials[1] = 1; //long double
	for (int i = 2; i <  101; i++)
		factorials[i] = factorials[i-1] * i;
	
	cout << "100!=" << factorials[100] << endl;
	return 0;

}
