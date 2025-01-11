//12.1e.cpp

#include <iostream>
#include "12.1.h"

int main ()
{
	Cow A = Cow();
	Cow B = Cow("MouMou", "Defeat Hero", 1024);
	Cow C = B;
	Cow * cow_ptr = &B;
	//* cow_ptr = B;
	A.ShowCow();
	B.ShowCow();
	C.ShowCow();
	cow_ptr->ShowCow();
	return 0;
}
