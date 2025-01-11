//print the numbers between num_1 and num_2

#include <iostream>

int main()
{
	using namespace std;
	int num_1;
	int num_2;
	int temp;
	int sum;

	cout << "Enter the first number:" << endl;
	cin >> num_1;
	cout << "Enter the second number:" << endl;
	cin >> num_2;
	if (num_1 > num_2)//exchange num_1 and num_2
		{
			temp = num_1;
			num_1 = num_2;
			num_2 = temp;
		}
	
	sum = 0;
	for(int i = num_1; i <= num_2; i++)
		sum = sum + i;

	cout << "The sum of numbers between" << num_1 << " and " \
		<< num_2 << " is: "<< sum << endl;

	return 0;
}
