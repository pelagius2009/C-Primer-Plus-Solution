//6.6.cpp

#include <iostream>
using namespace std;


int main()
{
	struct donator{
		char name[20];
		double amount;
	};

	int num;
	cout << "Please enter the number of donator: \n";
	cin >> num;
	donator * dona_ptr = new donator [num];
	
	for(int i = 0; i < num; i++)
	{
		cout << "Please enter the information of the donator " << i+1 <<"\n" ;
		cout << "Donator name: ";
		cin.get();
		//(cin >> dona_ptr[i].name).get();
		cin >> dona_ptr[i].name;
		cin.get();
		cout << "Donation amount: ";
		cin >> dona_ptr[i].amount;
	}

	cout << "Grand Patrons \n";
	cout << "Donator Name \t Amount\n";
	
	int GP_num = 0; // The number of Grand Patrons
	for(int i = 0; i < num; i++ )
	{
		if (dona_ptr[i].amount > 10000)
		{
			cout << dona_ptr[i].name << "\t" << dona_ptr[i].amount << endl;
			++GP_num;
		}
	}
	if (GP_num == 0)
		cout <<"None\n";


	cout << "Patrons \n";
	cout << "Donator Name \t Amount\n";
	
	int P_num = 0; // The number of normal Patrons
	for(int i = 0; i < num; i++ )
	{
		if (dona_ptr[i].amount <= 10000)
		{
			cout << dona_ptr[i].name << "\t" << dona_ptr[i].amount << endl;
			++P_num;
		}
	}
	if (P_num == 0)
		cout <<"None\n";

	delete []  dona_ptr;

	return 0;
}
