//10.4c.cpp
#include "10.4.h"
#include <iostream>
using namespace SALES;
int main()
{
	double arr[QUARTERS] = {1.9, 2.6, 3.3, 5.2};
	Sale Apple = Sale(arr, QUARTERS);
	std::cout << "Apple Sales \n";
	Apple.showSales();
	Sale Huawei;
	Huawei.setSales();
	std::cout << "Huawei Sales \n";
	Huawei.showSales();
	return 0;

}
