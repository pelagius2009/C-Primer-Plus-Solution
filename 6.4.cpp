#include <iostream>

void show_menu();


using namespace std;
const int strsize = 30;

int main()
{
	// Benevolent Order of Programmers name structure
	struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference; // 0 = fullname, 1 = title, 2 =  bopname
	};

	bop a[5]=
    {
		{"Wimp Macho", "Director", "Lion", 0},
		{"Raki Rhodes", "Junior Programmer", "Elephant", 1},
		{"Celia Laiter", "Senior Programmer", "MIPS", 2},
		{"Hoppy Hipman", "Analyst Trainee", "Dog", 1},
		{"Pat Hand", "Senior Director", "LOOPY", 2}
	};

	show_menu();

	cout << "Enter your choice: ";
	
	char choice;
	cin >> choice;

	while(choice != 'q')
	{
		switch(choice)
		{
			case 'a':
				for (int i = 0; i <= 4; i++)
					cout << a[i].fullname << endl;
				break;
			case 'b':
				for (int i = 0; i <= 4; i++)
					cout << a[i].title << endl;
				break;
			case 'c':
				for (int i = 0; i <= 4; i++)
					cout << a[i].bopname << endl;
				break;
			case 'd':
				for (int i = 0; i <= 4; i++)
				{
					switch(a[i].preference)
					{
						case 0: cout << a[i].fullname << endl;
								break;
						case 1: cout << a[i].title << endl;
								break;
						case 2: cout << a[i].bopname << endl;
								break;
					}
				}
				break;
			
			default:
				cout << "That's not a  choice! \n";

		}
	cout << "Next choice: ";
	cin >> choice;


	}

	cout << "Bye!\n";

	return 0;
}


void show_menu()
{
	cout << "Benevolent Order of Programmers Report \n";
	cout << "a. display by name    b. display by title \n";
	cout << "c. dispaly by bopname d. display by preference \n";
	cout << "q. quit \n";
}
