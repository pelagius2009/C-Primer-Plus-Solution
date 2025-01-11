//15.1e.cpp
//use_tv.cpp -- using the Tv and Remote classes
#include <iostream>
//#include "tv.h"
#include "15.1.h"

int main()
{
using std::cout;
Tv s42;
cout << "Initial settings for 42\" TV:\n";
s42.settings();
s42.onoff();
s42.chanup();
cout << "\nAdjusted settings for 42\" TV:\n";
s42.settings();
Remote grey;
grey.set_chan(s42, 10);
grey.volup(s42);
grey.volup(s42);
cout << "\n42\" settings after using remote:\n";
s42.settings();
Tv s58(Tv::On);
s58.set_mode();
//s58.set_pat(grey);
grey.set_chan(s58,28);
cout << "\n58\" settings:\n";
s58.settings();
grey.show_pat();
s58.set_pat(grey);
cout << "Pattern is changed.\n";
grey.show_pat();
return 0;
}
