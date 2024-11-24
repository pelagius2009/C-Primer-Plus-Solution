1. 

Stonewt Stonewt*(double n); //prototype

Stonewt Stonewt::operator*(double n)
{
	pounds = pounds * n;
	stone = int (pounds)/Lbs_per_stn;
	pds_left = int (pounds) % Lbs_per_stn + pounds - int(pounds);
}

Stonewt Stonewt::operator*(double n)
{
	return Stonewt(pounds*n);// is return indispensable?
}


2.成员函数定义在类的内部，通过对象调用；友元函数定义在类的外部，不需要通过对象调用。

3.不是，可以通过调用成员函数访问类成公有成员，但只能通过友元函数访问私有成员。

4.
friend Stonewt operator* (double n, const Stonewt & a);	
Stonewt operator* (double n, const Stonewt & a)
{
	return Stonewt(a.pounds * n);
}
	

5.operators which can't be overloaded: p 316

6.These operators can only be overloaded by member functions

7.
operator double() const //prototype
Vector ::operator double() const
{
	return mag;
}




