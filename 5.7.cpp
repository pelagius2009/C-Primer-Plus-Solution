//5.7.cpp

#include<iostream>

int main()
{
	using namespace std;

	struct car{
		char maker[20];
		int year_made;
	};
	
	int car_num;

	cout << "How many cars do you wish to catalog? ";
	cin >> car_num;
	cin.get();

	car * car_cat = new car[car_num];

	for (int i = 0; i < car_num; i++)
	{
		cout << "Car #" << (i+1) <<":"<< endl;
		cout << "Please enter the make: ";
		cin.getline(car_cat[i].maker, 20);
	//	cin.get();
		cout << "Please enter the year made: ";
		cin >> car_cat[i].year_made;
		cin.get();
	}
	
	cout << "Here is your collection:"<< endl;

	
	for (int i = 0; i < car_num; i++)
	{
		cout << car_cat[i].year_made << "\t" << car_cat[i].maker << endl;
	}



	return 0;
}
