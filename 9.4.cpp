//9.4.cpp
#include "sales.h"
#include <iostream>
using namespace SALES;
int main()
{
	Sales Apple, Huawei;

	setSales(Apple);

	double sales_h[QUARTERS] = {1.9, 2.6, 3.3, 5.2};
	setSales(Huawei, sales_h, QUARTERS);
	
	std::cout << "Apple Sales \n";
	showSales(Apple);
	std::cout << "Huawei Sales \n";
	showSales(Huawei);

	return 0;
}
