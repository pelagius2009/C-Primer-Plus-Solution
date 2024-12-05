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
std::string str_label;
std::string str_color;
std::string str_style;

//double tempbal;
char kind;
for (int i = 0; i < CLIENTS; i++)
{
/*cout << "Enter DMA's label: ";
temp_label = new char [50];
cin.getline(temp_label, sizeof(temp_label));
cout << "Enter the rating: ";
cin >> temp_rating;
*/
cout << "Enter 1 for baseDMA or "
<< "2 for lackDMA or "
<< "3 for hasDMA " << endl ;
while (cin >> kind && (kind != '1' && kind != '2'&& kind != '3'))
	cout <<"Enter either 1 or 2 or 3: ";

if (kind == '1')
//p_clients[i] = new Brass(temp, tempnum, tempbal);
{
cin.get();
cout << "Enter DMA's label: ";
temp_label = new char [50];
cin.getline(temp_label, sizeof(temp_label));
cout << "Enter the rating: ";
cin >> temp_rating;
p_clients[i] = new baseDMA(temp_label, temp_rating);
delete [] temp_label;
}
else if (kind == '2')
{
cin.get();
cout << "Enter DMA's label: ";
temp_label = new char [50];
cin.getline(temp_label, sizeof(temp_label));
cout << "Enter the rating: ";
cin >> temp_rating;
cout << "Enter the color: ";
//getline(cin, str_color);
temp_color = new char [50];
cin.getline(temp_color, sizeof(temp_color));
//temp_color = str_color.c_str();
p_clients[i] = new lacksDMA(temp_label, temp_color, temp_rating);
delete [] temp_label;
delete [] temp_color;
}
else if (kind == '3')
{
cin.get();
cout << "Enter DMA's label: ";
temp_label = new char [50];
cin.getline(temp_label, sizeof(temp_label));
cout << "Enter the rating: ";
cin >> temp_rating;
cout << "Enter the style: ";
temp_style = new char [50];
cin.getline(temp_style, sizeof(temp_style));
//getline(cin, str_style);
//temp_style = str_style.c_str();
p_clients[i] = new hasDMA(temp_style, temp_label, temp_rating);
delete [] temp_label;
delete [] temp_style;
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

