//10.3c.cpp

#include "10.3.h"
#include <iostream>
#include <cstring>
#include <string>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	const int ArrSize = 3;
	Golf golfs[ArrSize];
	
	std::string name;
	int hc;
	int count;
	for (count = 0; count < ArrSize; count++)
	{
		cout << "Enter the name: ";
	//	cin >> name;	
		std::getline(cin, name);
		if(name[0] == '\0')
		{
			cin.clear();
			break;
		}
		cout << "Enter the handicap: ";
		cin >> hc;
		golfs[count].setgolf(name, hc);		
	}

	for (int i = 0; i < count; i ++)
	{
		golfs[i].Showgolf();
	}

	return 0;
}
