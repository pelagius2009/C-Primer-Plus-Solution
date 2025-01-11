#include<iostream>

int main()
{
	using namespace std;

	float Daphne = 100;
	float Cleo = 100;

	int year;
	
	for(year = 1; Daphne >= Cleo; year++)
	{
		Daphne = Daphne + 100 *0.1;
		Cleo = Cleo * 1.05;
	}

	cout << year << " years later "<< endl;
	cout << "The earning of Daphne is: " << Daphne << endl;
	cout << "The earning of Cleo is: " << Cleo << endl;

	return 0;	
}
