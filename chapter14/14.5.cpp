//14.5.cpp
#include "14.5.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

//default constructor
abstr_emp::abstr_emp()
{
	fname = "Nobody";
	lname = "Everyman";
	job = "Programmer";
}

abstr_emp::~abstr_emp(){}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln,
		const std::string & j)
{
	fname = fn;
	lname = ln;
	job = j;
}

void abstr_emp::ShowAll() const
{
	cout << "First Name: "<< fname << endl;
	cout << "Last Name: "<< lname << endl;
	cout << "Job: "<< job << endl;
}

void abstr_emp::SetAll()
{
	cout << "Enter the first name: ";
	cin >> fname;
	cout << "Enter the last name: ";
	cin >> lname;
	cout << "Enter the job: ";
	cin >> job;
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
	os << "First Name: "<< e.fname << endl
	<< "Last Name: "<< e.lname << endl
    << "Job: "<< e.job << endl;
	return os;
}

employee::employee():abstr_emp()// Is it indispensable?
{
//	abstr_emp();
}

employee::employee(const std::string & fn, const std::string & ln,
const std::string & j):abstr_emp(fn, ln, j)
{
//	abstr_emp(fn, ln, j);
}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

manager::manager():abstr_emp()
{
	//abstr_emp::abstr_emp();
	inchargeof = 0;
}

manager::manager(const manager & m)
{
	*this = m;
}

manager::manager(const std::string & fn, const std::string & ln,
		const std::string & j, int ico)
:abstr_emp(fn, ln, j)
{
	inchargeof = ico;
}



manager::manager(const abstr_emp & e, int ico):abstr_emp(e)
{
	inchargeof = ico;
}

void manager::ShowAll()const
{
	abstr_emp::ShowAll();
	cout << "Number of managed: "<< inchargeof << endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter the number of managed: ";
	cin >> inchargeof;
}

fink::fink():abstr_emp::abstr_emp()
{
//	abstr_emp::abstr_emp();
	reportsto = "Boss";
}

fink::fink(const std::string & fn, const std::string & ln,
		const std::string & j, const std::string & rpo)	
:abstr_emp(fn, ln, j)
{
	//abstr_emp::abstr_emp(fn, ln, j);
	reportsto = "rpo";
}

fink::fink(const abstr_emp & e, const std::string & rpo)
:abstr_emp(e)
{
	reportsto = "rpo";
}
 

fink::fink(const fink & e)
{
	*this = e;
}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "Reports To: "<< reportsto << endl;
} 

void fink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter the person report to: ";
	cin >> reportsto;
}


highfink::highfink():manager()
{
//	manager::manager();
//	fink::fink();
//	manager::InChargeof(0);
	fink::ReportsTo() = "Boss";
}

highfink::highfink(const std::string & fn, const std::string & ln,
		const std::string & j, const std::string & rpo, int ico)
:abstr_emp(fn, ln, j)
{
	//manager(fn, ln, j, ico);
	//fink(fn, ln, j, rpo);
	manager::InChargeOf() = ico;
	fink::ReportsTo() = rpo;
}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico)
:manager(e, ico)
{
//	manager::manager(e, ico);
	fink::ReportsTo() = rpo;
}

highfink::highfink(const fink & f, int ico)
:fink(f)
{
//	fink::fink(f);
	manager::InChargeOf() = ico;
}

highfink::highfink(const manager & m, const std::string & rpo)
:manager(m)
{
//	manager::manager(m);
	fink::ReportsTo() = rpo;
}


highfink::highfink(const highfink & h)
{
	*this = h;
}


void highfink::ShowAll() const
{
	manager::ShowAll();
	cout << "Reports To: "<< fink::ReportsTo() << endl;//which ReportsTo?
}


void highfink::SetAll()
{
	manager::SetAll();
	cout << "Enter the person report to: ";
	cin >> fink::ReportsTo();
}


