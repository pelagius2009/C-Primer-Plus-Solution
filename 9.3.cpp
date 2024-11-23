//9.3.cpp
#include <iostream>
#include <new>
#include <cstring>

struct chaff
{
	char dross[20];
	int slag;
};


chaff arr[2];

int main()
{
	chaff * pd1, *pd2;
	pd1 =  new chaff[2]; //
	pd2 = new (arr) chaff[2];

	strcpy(pd1[0].dross, "Item_1");
	pd1[0].slag = 1;
	strcpy(pd1[1].dross, "Item_1");
	pd1[1].slag = 2;

	strcpy(pd2[0].dross, "Item_2");
	pd2[0].slag = 301;
	strcpy(pd2[1].dross, "Item_2");
	pd2[1].slag = 401;

	for (int i = 0; i < 2; i ++)
	{
		std::cout << "dross:" << pd1[i].dross << " slag: " << pd1[i].slag << std::endl;
		std::cout << "dross:" << pd2[i].dross << " slag: " << pd2[i].slag << std::endl;
	}


	delete []pd1;

	return 0;
}
