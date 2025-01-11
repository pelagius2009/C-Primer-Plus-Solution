//10.1.h
#ifndef BANK_H
#define BANK_H
#include <string>


class Bank_account
{
private:
	std::string depositor_name;
	std::string account;
	double deposit;
public:
	Bank_account();
	Bank_account(const std::string & dn, const std::string & ac, double de = 0.0);
	~Bank_account();
	void show() const;
	void dep(double amount);
	void withdraw(double amount);
};

#endif

