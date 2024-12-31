//16.7.cpp

#include<iostream>
#include<algorithm>
#include<vector>
#include<chrono>
#include<random>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

vector<int> lotto(int a, int b);

int main()
{
	int max;
	int num;
	char choice;
	vector<int> goodluck;
	cout << "Would you like to get your lucky number? (y/n) ";
	cin >> choice;
	if (choice == 'n')
		return 0;
	while(choice != 'n')
	{
	cout << "Please enter the max lotto digital: ";
	cin >> max;
	cout << "Please enter the number of digitals: ";
	cin >> num;
	cout << "The lucky number is: ";
	goodluck = lotto(max, num);
	for (int i: goodluck)
		cout<< i << ",";
	cout << endl;
	cout << "Would you like to get your lucky number? (y/n) ";
	cin >> choice;
 
	}

	cout << "Bye!\n";
	return 0;
}


vector<int> lotto(int max, int num)
{
	
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine rng(seed);
	vector<int> full_vec;
	for (int i = 1; i <= max; i++)
		full_vec.push_back(i);
	std::shuffle(full_vec.begin(), full_vec.end(), rng);
	vector<int> new_vec (full_vec.begin(), full_vec.begin() + num);
	return new_vec;
}




