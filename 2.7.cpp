#include <iostream>

void show_time(int, int);

using namespace std;



int main()
{
	int hour;
	int minute;
	cout << "Enter the number of hours:";
	cin >> hour;
	//cout << endl;
	cout << "Enter the number of minutes:";
	cin >> minute;
	//cout << endl;
	show_time(hour, minute);
	return 0;
}

void show_time(int hour, int minute)
{
	cout << "Time: "<< hour <<":" << minute << endl;
}


