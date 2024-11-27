// 11.6e.cpp

// stone.cpp -- user-defined conversions
// compile with 11.6.cpp
#include <iostream>
using std::cout;
#include "11.6.h"
//void display(const Stonewt & st, int n);
#include <cstdlib>
#include <ctime>
#define ARR 6
int main()
{
srand(time(0));
int ra_n; 
int le_number = 0;

Stonewt st_arr[ARR] = {Stonewt(275), Stonewt(285.7), Stonewt(21,8)};

for (int i = 3; i < 6; i ++)
{
	ra_n = 250 + rand() % 101; 
	st_arr[i] = Stonewt(ra_n);
}

int i_wt = 21;
Stonewt sd_wt = Stonewt(i_wt, 0); 

Stonewt st_min, st_max;
st_min = st_max = st_arr[0];


for (int i = 0; i < 6; i++)
{
	if (st_arr[i] > st_max)
		st_max = st_arr[i];
	//else
	//	st_min = st_arr[i];
	if (st_arr[i] < st_min)
		st_min = st_arr[i];
	if (st_arr[i] >= sd_wt)
		++le_number;
}

cout << "The max element is: ";
st_max.show_lbs();
cout << std::endl;
cout << "The min element is: ";
st_min.show_lbs();
cout << std::endl;

cout << "The number of element larger or equal than " << i_wt <<" is:  ";
cout << le_number << std::endl;

return 0;
}



/*
void display(const Stonewt & st, int n)
{
for (int i = 0; i < n; i++)
{
cout << "Wow! ";
st.show_stn();
}
}
*/



