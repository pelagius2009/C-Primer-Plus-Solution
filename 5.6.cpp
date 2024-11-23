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

	int sales[3][12];
	int total_sales = 0;
	int t_s[3] = {0,0,0};

	for(int j = 0; j < 3; j++)
	{
		cout << "Enter the sale volume of  year "<< (j+1) << endl;
		for(int i = 0; i < 12; i++ )
			{
				cout << "Enter the sales volum of "<< months[i]<<" :";
				cin >> sales[j][i];
				//total_sales = total_sales + sales[j][i];
				t_s[j] = t_s[j] + sales[j][i];
			}
		cout << "The sales volume of year " << (j+1) << " is: "<< t_s[j] << endl ;
		total_sales = total_sales + t_s[j];
	}


	for(int j = 0; j < 3; j++)
	{
		cout << "Year\t"<<"Month\t" << "Sales Volume" << endl;
		for (int i = 0; i < 12; i++)
			{
				cout <<(j+1)<<"      \t"<< months[i] << "      \t" << sales[j][i] << endl;
			}
	}


	cout <<"The sales volume of three years is: " << total_sales <<endl;


	return 0;
}

