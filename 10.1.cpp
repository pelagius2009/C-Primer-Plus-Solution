//10.1.cpp
#include "10.1.h"
#include <iostream>

Bank_account::Bank_account()
{
	depositor_name = "no name";
	account = "000000";
	deposit = 0.0;
}

Bank_account::Bank_account(const std::string & dn, const std::string & ac,\
		double de)
{
	depositor_name = dn;
	account = ac;
	deposit = de;
}


Bank_account::~Bank_account()
{
}



void Bank_account::show() const
{
	using std::cout;
	using std::endl;
	cout << "Depositor Name: "<< depositor_name << endl;
	cout << "Bank Account: " << account << endl;
	cout << "Deposit Amount: "<< deposit << endl;
}


void Bank_account::dep(double amount)
{
	deposit += amount;
}


void Bank_account::withdraw(double amount)
{
	deposit -= amount;
}


