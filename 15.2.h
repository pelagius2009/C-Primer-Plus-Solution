//15.2.h
// exc_mean.h -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>

/*
class bad_hmean
{
private:
double v1;
double v2;
public:
bad_hmean(double a = 0, double b = 0) : v1(a), v2(b){}
void mesg();
};
*/

/*
inline void bad_hmean::mesg()
{
std::cout << "hmean(" << v1 << ", " << v2 <<"): "
<< "invalid arguments: a = -b\n";
}
*/

/*
class bad_gmean
{
public:
double v1;
double v2;
bad_gmean(double a = 0, double b = 0) : v1(a), v2(b){}
const char * mesg();
};
*/

/*
inline const char * bad_gmean::mesg()
{
return "gmean() arguments should be >= 0\n";
}
*/

class h_err : public std::logic_error
{
	public:
		explicit h_err(const std::string & s = "hmean error, invalid arguments: a = -b\n");
	virtual ~h_err() throw(){}
};

class g_err : public std::logic_error
{
	public:
		explicit g_err(const std::string & s = "gmean error, arguments should be >= 0 \n");
	virtual ~g_err() throw(){}
};

