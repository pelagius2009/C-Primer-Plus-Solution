//16.2.cpp

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cctype>
#define A_SIZE 6
int main()
{
	using std::string;
	using std::cin;
	using std::cout;
	using std::endl;

	string palin;
	string s_palin;
	string r_palin;
	int s_len;
	int c_len; 
	//char c2r; // char to remove
	char c2r_a[A_SIZE] = ",' .;";
	cout << "Please enter a string,  'quit' to quit \n";
	//cin >> palin;
	std::getline(cin, palin);
	while(palin != "quit")
	{
		cout << "The string to be tested is: " << palin << endl;
		
		//remove "," " '",""
		for (int i = 0; i < A_SIZE; i++ )
		{
			palin.erase(std::remove(palin.begin(), palin.end(), c2r_a[i]), palin.end());
		}

		// to upper
		for (int i = 0; i < palin.size(); i++)
			palin[i] = tolower(palin[i]);

		cout << "The string after squeezed is: " << palin << endl;
		s_len = palin.size();
		c_len = static_cast<int>(s_len/2);
		r_palin = palin;
		std::reverse(r_palin.begin(), r_palin.end());
		
		string palin_h(&palin[0], &palin[c_len]); 
		string r_palin_h(&r_palin[0], &r_palin[c_len]);
		if (palin_h == r_palin_h)
			cout << palin << " is a palindrome!\n";
		else
			cout << palin << " is not a palindrome!\n";

		cout << "Please enter a string,  'quit' to quit\n";
		//cin >> palin;
		std::getline(cin, palin);
	}

	return 0;
}
