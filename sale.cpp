//sale.cpp
#include "sales.h"
#include <iostream>

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		int i;
		double min, max, total, temp;
		min = max = ar[0];
		total = 0;
		for (i = 0; i < n; i++)
		{
			temp = ar[i];
			s.sales[i] = temp;
			total += temp;
			if (temp < min)
				min = temp;
			if (temp > max)
				max = temp;
		}
		s.max = max;
		s.min = min;
		s.average = total/ n;


		for (int j = i; j < QUARTERS; j++ )
			s.sales[j] = 0;
	}


	void setSales(Sales & s)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Enter the sales of quarter "  \
				<< i + 1 << " :";
			std::cin >> s.sales[i];		
		}

		double min, max, total, temp;
		min = max = s.sales[0];
		total = 0;
		for (int i = 0; i < QUARTERS; i++)
		{
			temp = s.sales[i];
			total += temp;
			if (temp < min)
				min = temp;
			if (temp > max)
				max = temp;
		}
		s.max = max;
		s.min = min;
		s.average = total/ QUARTERS;
	}

	void showSales(const Sales & s)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Sales of quarter " << i+1 << ": " \
				<< s.sales[i] << std::endl;
		}
		std::cout << "Average: " << s.average << std::endl;
		std::cout << "Max: " << s.max << std::endl;
		std::cout << "Min: " << s.min << std::endl;

	}


}
