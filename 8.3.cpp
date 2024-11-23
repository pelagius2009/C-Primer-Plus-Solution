//8.3.cpp

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void up_string(string  & str);
void up_string(string  & str)
{
	for(int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

int main()
{
	using namespace std;
	string str;
	cout << "Enter a string (q to quit): ";
	//cin.getline(str, str.length());
	getline(cin, str);
	while(str != "q")
	{
		up_string(str);
		cout << str << endl;
		cout << "Next string (q to quit): ";
	//	cin.getline(str, str.length());
		getline(cin,str);
	}
	cout << "Bye. \n";

	return 0;
}
