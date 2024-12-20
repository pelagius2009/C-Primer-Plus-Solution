//14.4e.cpp
#include <iostream>
#include <cstring>
#include "14.4.h"

const int SIZE = 5;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl
	using std::strchr;
	
	Person * thug[SIZE];

	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the thug category:\n"
		<< "g: gunslinger  p: pokeplayer  b: baddude q:quit\n";
		cin >> choice;
		while(strchr("gpbq", choice) == NULL)
		{
			cout << "Please enter a g, p, b, or q: ";
			cin >> choice;		
		}
		if (choice == 'q')
			break;
	
	switch(choice)
	{
		case 'g': thug[ct] = new Gunslinger;
				  break;
		case 'p': thug[ct] = new PokerPlayer;
				  break;
		case 'b': thug[ct] = new BadDude;
				  break;
	}
	cin.get();
	thug[ct]->Set();
	}

	cout << "\n Here are the villains: \n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		thug[i]->Show();
	}
	for (i = 0; i < ct; i++)
		delete thug[i];

	cout << "Bye. \n";
	return 0;

}
