//10.6c.cpp
#include "10.6.h"
#include <iostream>

int main()
{
	Move ob_a = Move(2.71, 1.68);
	Move ob_b = Move(3.14, 1.44);
	Move ob_c = ob_a.add(ob_b);
	ob_c.showmove();
	ob_c.reset();
	ob_c.showmove();
	return 0;
}
