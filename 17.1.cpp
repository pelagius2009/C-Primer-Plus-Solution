//17.1.cpp

#include <iostream>

int main()
{
	using namespace std;

	cout << "Please enter a sentence:\n";
	char ch;
	int num = 0;
	while(cin.get(ch))
	{
		if ((ch != '$') && (ch != ' ') && (ch != '\t'))
			num ++;
		else if(ch == '$')
		{
			cin.putback(ch);
			break;
		}
	}
	
	cout << "There are "<< num << " characters before '$'\n";

	cout << "The rest character is:\n";

	while((ch = cin.get())!= '\n')
		cout << ch;
	cout << "\nFinished!\n";
	return 0;
}
