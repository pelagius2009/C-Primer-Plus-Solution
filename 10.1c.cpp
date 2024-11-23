//10.1c.cpp

#include "10.1.h"
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	Bank_account acc_1 = Bank_account("Donald Trump", "USA_PRD_0047",250.00);
	acc_1.show();
	acc_1.dep(1000.00);
	cout << "After depositing \n";
	acc_1.show();
	acc_1.withdraw(1250.00);
	cout << "After withdrawing \n";
	acc_1.show();

	return 0;
}
