//15.3.h
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
	private:
<<<<<<< HEAD
		double a;
		double b;
	public:
		explicit h_err(double p_a, double p_b,
	const std::string & s = "hmean error, invalid arguments: a = -b\n");
=======
	double a;
	double b;
	public:
		explicit h_err(double p_a, double p_b,
	const std::string & s = "hmean error, invalid arguments: a = -b\n");
//	:a(p_a), b(p_b);
	
>>>>>>> origin/baosight
	virtual ~h_err() throw(){}
};

class g_err : public std::logic_error
{
	private:
<<<<<<< HEAD
		double a;
		double b;
	public:
		explicit g_err(double p_a, double p_b,
	const std::string & s = "gmean error, arguments should be >= 0 \n");
=======
	double a;
	double b;
	public:
		explicit g_err(double p_a, double p_b,
	const std::string & s = "gmean error, arguments should be >= 0 \n");
//	:a(p_a), b(p_b);
	
>>>>>>> origin/baosight
	virtual ~g_err() throw(){}
};

