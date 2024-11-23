#include<iostream>
#include<cctype>
using namespace std;


int main()
{
	char ch;
	cout << "Enter something, '@' to stop" << endl;
	cin.get(ch);
	while(ch != '@')
	{
		if (isupper(ch))
		{
			ch = tolower(ch);
			//cout << ch;
		}
		else if (islower(ch))
			ch = toupper(ch);
		cout << ch;
		cin.get(ch);
	}
	return 0;
}
