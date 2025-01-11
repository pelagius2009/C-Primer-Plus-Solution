//16.1.cpp

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
int main()
{
	using std::string;
	using std::cin;
	using std::cout;
	using std::endl;

	string palin;
	string r_palin;
	int s_len;
	int c_len;
	cout << "Please enter a string,  'quit' to quit \n";
	cin >> palin;

	while(palin != "quit")
	{
		cout << "The string to be tested is: " << palin << endl;
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

		cout << "Please enter a string,  'quit' to quit ";
		cin >> palin;
	}

	return 0;
}
