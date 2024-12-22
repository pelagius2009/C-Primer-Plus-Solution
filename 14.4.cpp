//14.4.cpp

#include"14.4.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using std::cin;
using std::cout;
using std::endl;

Person::~Person(){};

void Person::Get()
{
	cout << "First Name: ";
	getline(cin, first_name);
	cout << "Last Name: ";
//getline(cin, last_name);
	cin >> last_name;
	while (cin.get() !='\n')
		continue;
}

void Person::Data() const
{
	cout << "First Name: "<< first_name << endl;
	cout << "Last Name: "<< last_name << endl;
}

void Person::Show()
{
	cout << "Person infomation:\n";
	Data();
}

void Gunslinger::Data()const
{
	cout << "Draw Time: " << draw_time << endl;
	cout << "Notch Number: " << notch_number << endl;
}

void Gunslinger::Get()
{
	cout << "Enter the draw time: ";
	cin >> draw_time;
	cout << "Enter the notch number: ";
	cin >> notch_number;
	while (cin.get() !='\n')
		continue;
}



void Gunslinger::Set()
{
	cout << "Set the Gunslinger:\n";
	Person::Get();
	Get();
}

void Gunslinger::Show()
{
	cout << "Category: Gunslinger\n";
	Person::Data();
	Data();
}

int PokerPlayer::Draw()
{
	srand(time(NULL));
	int card_val = rand() % 52 + 1;
	return card_val;  
}

void PokerPlayer::Set()
{
	cout << "Set the PokerPlayer:\n";
	Person::Get();
}

/*
void PokerPlayer::Show()
{
	Person::Show();
}
*/

void BadDude::Data()const
{
	Person::Data();
	Gunslinger::Data();
}

void BadDude::Get()
{
	Person::Get();
	Gunslinger::Get();
}

void BadDude::Set()
{
	cout << "Set the BadDude: \n";
	Get();
}

void BadDude::Show()
{
	cout << "Category: BadDude\n";
	Person::Data();
	Gunslinger::Data();
	cout << "The value of card is: " << CDraw() << endl;
}


