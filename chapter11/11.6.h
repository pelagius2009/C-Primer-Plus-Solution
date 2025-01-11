//11.6.h
// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{

//public:
//	enum Mode{ST, IPD, FPD};

private:
enum {Lbs_per_stn = 14};
// pounds per stone
int stone;
// whole stones
double pds_left;
// fractional pounds
double pounds;
// entire weight in pounds

//Mode mode;
public:
Stonewt(double lbs);
// constructor for double pounds
//Stonewt(int stn, double lbs, Mode form = ST); // constructor for stone, lbs

Stonewt(int stn, double lbs); // constructor for stone, lbs

Stonewt();
// default constructor
~Stonewt();


void show_lbs() const;
// show weight in pounds format
void show_stn() const;
// show weight in stone format


/*
void set_ST(){
	mode = ST;
}

void set_IPD(){
	mode = IPD;
}

void set_FPD(){
	mode = FPD;
}
*/

//operator overloading
Stonewt operator+(const Stonewt & b) const;
Stonewt operator-(const Stonewt & b) const;
Stonewt operator*(double n) const;
bool operator==(const Stonewt & s) const;
bool operator>=(const Stonewt & s) const;
bool operator<=(const Stonewt & s) const;
bool operator!=(const Stonewt & s) const;
bool operator> (const Stonewt & s) const;
bool operator< (const Stonewt & s) const;

//friend std::ostream & operator << (std::ostream & os, const Stonewt & b);


};
#endif
