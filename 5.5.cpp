//5.5 C++ For Fools

#include <iostream>

int main()
{
	using namespace std;

	const char * months[12] = 
	{
		"January",	"February",	"March",
		"April","May","June",
		"July","August","September",
		"October","November","December"
	};

	int sales[12];
	int total_sales = 0;
	for(int i = 0; i < 12; i++ )
	{
		cout << "Enter the sales volum of "<< months[i]<<" :";
		cin >> sales[i];
		total_sales = total_sales + sales[i];
	}

	cout << "Month"<< "\t" << "Sales Volume" << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << months[i] << "      \t" << sales[i] << endl;
	}
	
	cout <<"The sales volume of this year is: " << total_sales <<endl;


	return 0;
}

