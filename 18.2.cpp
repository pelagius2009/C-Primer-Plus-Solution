//18.2.cpp

#include <iostream>
#include <string>
using namespace std;

class Cpmv
{
public:
struct Info
{
std::string qcode;
std::string zcode;
};
private:
Info *pi;
public:
Cpmv();
Cpmv(std::string q, std::string z);
Cpmv(const Cpmv & cp);
Cpmv(Cpmv && mv);
~Cpmv();
Cpmv & operator=(const Cpmv & cp);
Cpmv & operator=(Cpmv && mv);
Cpmv operator+(const Cpmv & obj) const;
void Display() const;
};


Cpmv::Cpmv()
{
	cout << "default constructor called\n";
	pi = nullptr;
}

Cpmv::Cpmv(std::string q, std::string z)//:pi->qcode(q), pi->zcode(z)
{
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
	cout << "string constructor called\n";
	Display();
}


Cpmv::Cpmv(const Cpmv & cp)
{
	cout << "copy const called\n";
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	Display();
}

Cpmv::Cpmv(Cpmv && mv)
{
	cout << "move constructor called\n";
	pi = mv.pi;
	mv.pi = nullptr;
	Display();
}

Cpmv::~Cpmv()
{
	cout << "deleted object:\n";
	Display();
	delete pi;
}

Cpmv & Cpmv:: operator=(const Cpmv & cp)
{
	if (this == &cp)
		return * this;
	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;

	pi->zcode = cp.pi->zcode;
	return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv)
{
	if (this == &mv)
		return * this;
	delete pi;
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;
}


Cpmv Cpmv:: operator+(const Cpmv & obj) const
{
	string str1 = pi->qcode;
	string str2 = pi->zcode;
	string str3 = obj.pi->qcode;
	string str4 = obj.pi->zcode;
	string str5 = str1 + str3;
	string str6 = str2 + str4;
	Cpmv temp = Cpmv(str5, str6);
	//Cpmv temp = Cpmv((pi->qcode) + (obj.pi -> qcode), (pi->zcode) + (obj.pi->zcode) );
	return temp;
}

void Cpmv::Display() const
{
	cout <<"qcode:"<< pi-> qcode << endl;
	cout <<"zcode:"<< pi-> zcode << endl;
}



//移动构造函数，移动赋值运算符
int main()
{
	Cpmv c1("firstname","lastname");
	Cpmv c2 = c1;
	Cpmv c3("_Donald", "_Trump");
	Cpmv C4(c2 + c3);

	return 0;
}
