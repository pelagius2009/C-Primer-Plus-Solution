//13.3e.cpp
#include <iostream>
#include <string>
#include "13.3.h"
const int CLIENTS = 4;
int main()
{
using std::cin;
using std::cout;
using std::endl;
//Brass * p_clients[CLIENTS];
DMA * p_clients[CLIENTS];
//std::string temp_label;
char * temp_label;
long temp_rating;
char * temp_color;
char * temp_style;
//double tempbal;
char kind;
for (int i = 0; i < CLIENTS; i++)
{
//cout << "Enter client's name: ";
cout << "Enter DMA's label: ";
getline(cin, temp_label);
//cout << "Enter client's account number: ";
cout << "Enter the rating: ";
//cin >> tempnum;
cin >> temp_rating;
//cout << "Enter opening balance: $";
//cin >> tempbal;
cout << "Enter 1 for baseDMA or "
<< "2 for lackDMA or "
<< "3 for hasDMA ";
while (cin >> kind && (kind != '1' && kind != '2'&& kind != '3'))
cout <<"Enter either 1 or 2 or 3: ";

if (kind == '1')
//p_clients[i] = new Brass(temp, tempnum, tempbal);
p_clients[i] = new baseDMA(temp_label, temp_rating);
else if (kind == '2')
{
cout << "Enter the color: ";
getline(cin, temp_color);
p_clients[i] = new lacksDMA(temp_label, temp_color, temp_rating);
}
else if (kind == '3')
{
cout << "Enter the style: ";
getline(cin, temp_style);
p_clients[i] = new hasDMA(temp_style, temp_label, temp_rating);
}
/*
else
{
double tmax, trate;
cout << "Enter the overdraft limit: $";
cin >> tmax;
cout << "Enter the interest rate "
<< "as a decimal fraction: ";
cin >> trate;
p_clients[i] = new BrassPlus(temp, tempnum, tempbal,tmax, trate);
}
*/
while (cin.get() != '\n')
continue;
}
cout << endl;
for (int i = 0; i < CLIENTS; i++)
{
p_clients[i]->View();
cout << endl;
}
for (int i = 0; i < CLIENTS; i++)
{
delete p_clients[i]; // free memory
}
cout << "Done.\n";
return 0;
}

