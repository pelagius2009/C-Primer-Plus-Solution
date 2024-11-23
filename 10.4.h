//10.4.h
#ifndef SALE_H
#define SALE_h

const int QUARTERS = 4;
namespace SALES
{
	class Sale
	{
		private:
			//static const int QUARTERS = 4;
			double sales[QUARTERS];
			double average;
			double max;
			double min;
		public:
			Sale();
			Sale(double [], int );
			//void setSales(Sales & s, const double ar[], int n);
			
			Sale & setSales();
			const void showSales() const;

	};

}


#endif
