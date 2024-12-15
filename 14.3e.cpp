//14.3e.cpp

#include "14.3.h"
#include <iostream>
#include <cstring>
const int SIZE = 5;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;

	Queue< Worker *> qu;

	while(true)
	{
		char choice;
		Worker * temp_worker;
		cout << "Enter the operation to the queue:\n"
			<< "a: add a item into the queue\n"
			<< "d: delete a item of the queue\n"
			<< "q: quit\n";
		cin >> choice;
		while (strchr("adq", choice) == NULL)
		{
			cout << "Please enter a a, d or q: ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		switch(choice)
		{
			case 'a':
			temp_worker = new Worker;
			temp_worker->Set();
			qu.enqueue(temp_worker);
			break;
			case 'd':

		 }
		


	}

	return 0;
}
