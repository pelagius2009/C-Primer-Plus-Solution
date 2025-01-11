#include<iostream>

int main()
{

	using namespace std;

	int input_num;
	int sum;
	cin >> input_num;
/*	
	if(!isdigit(input_num))
	{
		cout << "Please enter a number." << endl;
		cin >> input_num;
	}

*/
	sum = 0;

	while(input_num != 0)
	{
		sum = sum + input_num;
		cout << "The sum till now is: " << sum << endl;
		cin >> input_num;
		/*
		if(!isdigit(input_num))
		{
			cout << "Please enter a number." << endl;
			cin >> input_num;
		}
		*/

	}

	return 0;
}
