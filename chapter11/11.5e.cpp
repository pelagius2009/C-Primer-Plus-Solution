// 11.5e.cpp

// stone.cpp -- user-defined conversions
// compile with 11.5.cpp
#include <iostream>
using std::cout;
#include "11.5.h"
//void display(const Stonewt & st, int n);
int main()
{
Stonewt incognito = 275; // uses constructor to initialize

Stonewt wolfe(285.7);
// same as Stonewt wolfe = 285.7;
wolfe.set_FPD();
cout << "The detective weighted in float form\n";
cout << wolfe;
wolfe.set_IPD();
cout << "The detective weighed in integer form\n";
cout << wolfe;

Stonewt taft(21, 8);
cout << "The celebrity weighed ";
//incognito.show_stn();
cout << taft;


cout << "The sum weighed: ";
cout << (wolfe + taft);


cout << "The weight difference: ";
cout << wolfe - taft;

cout << "The wolfe weight multipled 3: ";
cout << wolfe * 3;

/*
cout << "The detective weighed ";
wolfe.show_stn();
cout << "The President weighed ";
taft.show_lbs();
incognito = 276.8;
// uses constructor for conversion
taft = 325;
// same as taft = Stonewt(325);
cout << "After dinner, the celebrity weighed ";
incognito.show_stn();
cout << "After dinner, the President weighed ";
taft.show_lbs();
display(taft, 2);
cout << "The wrestler weighed even more.\n";
display(422, 2);
cout << "No stone left unearned\n";
*/

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



