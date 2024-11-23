#include<iostream>
void showmenu(); 


using namespace std;

int main()
{
	showmenu();
	char choice;
	cin >> choice;
	while (choice != 'z')
	{
		switch(choice)
		{
			case 'c': cout << "A lion is a carnivore. \n";
					  break;
			case 'p': cout << "Chopin is a pianist. \n";
					  break;
			case 't': cout << "A maple is a tree. \n ";
					  break;
			case 'g': cout << "Go is a game. \n ";
					  break;

			default: cout << "Please enter a c, p, t, or g: \n";
		}
		showmenu();
		cin >> choice;
	}

	cout << "Bye! \n";


	return 0;

}


void showmenu()
{
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore  p) pianist\n";
	cout << "t) tree  g) game\n";
}

