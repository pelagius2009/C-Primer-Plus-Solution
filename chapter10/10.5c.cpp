//10.5c.cpp
#include <iostream>
#include <cctype>
#include "10.5.h"

int main()
{
	using namespace std;
	Stack st;
	customer cm;
	char ch;
	double total = 0;
	cout << "Please enter A to add a customer file, \n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while(cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout  << '\a';
			continue;
		}
		switch(ch)
		{
			case 'A':
			case 'a':cout << "Enter the customer name: ";
					 cin.getline(cm.fullname, 34);
					 cout << "Enter the payment: ";
					 cin >> cm.payment;
					 if (st.isfull())
						 cout << "stack already full\n";
					 else
						 st.push(cm);
					 break;
			case 'P':
			case 'p':if (st.isempty())
						 cout << "Stack already empty\n";
					 else{
						st.pop(cm);
						total += cm.payment;	
					 }
					break;
		}
		cout << "Please enter A to add a customer file, \n"
		<< "P to process a PO, or Q to quit.\n";
				
	}
	cout << "Total value: " << total << endl;
	cout  << "Bye\n";
	return 0;
}
