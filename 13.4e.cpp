//13.4e.cpp

#include "13.4.h"
#include <iostream>

int main()
{

	Port p1("Gallo", "tawny", 3);
	Port p2("Penfolds", "ruby", 2);
	Port p3 = Port(p2);
	Port p4 = p1;	
	p1.Show();
	p2.Show();
	p3.Show();
	p4.Show();
	cout << "More bottles\n";
	p1+=(4);
	p1.Show();
	cout << "Less bottles\n";
	p2-=(1);
	p2.Show();
	cout << "When no more\n";
	p2-=(5);
	p2.Show();
	cout << p1;

	VintagePort vp1("Torres", 5, "Tor", 2009);
	VintagePort vp2("Beringer", 9, "Ber", 2005);
	VintagePort vp3 = VintagePort(vp1);
	VintagePort vp4 = vp2;
	vp1.Show();
	vp2.Show();
	vp3.Show();
	vp4.Show();
	cout << vp4;

	return 0;
}
