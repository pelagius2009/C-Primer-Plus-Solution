// 17.6e.cpp
// useemp1.cpp -- using the abstr_emp classes
#include <iostream>
#include<fstream>
#include<cstdlib>
#include "17.6.h"

const char * file = "17.6.txt";
const int MAX =10;

int main(void)
{
	using namespace std;
	
//	employee * pc[MAX];
	abstr_emp * pc[MAX];
	ifstream fin;
	fin.open(file);
	int classtype;
	int k = 0;
	char ch;
	if (fin.is_open())
	{
		while ((fin >> classtype).get(ch))
		{
			switch(classtype)
			{
				case Employee :
					pc[k] = new employee;
					pc[k++]->getall(fin);
					break;
				case Manager:
					pc[k] = new manager;
					pc[k++]->getall(fin);
					break;
				case Fink:
					pc[k] = new fink;
					pc[k++]->getall(fin);
					break;
				case Highfink:
					pc[k] = new highfink;
					pc[k++]->getall(fin);
					break;
			}
		}
		fin.close();
	}


	//add new data
	ofstream fout(file, 
			ios_base::out | ios_base::app | ios_base::binary);

	if (!fout.is_open())
	{
		cerr << "Can't open " << file << " file for output:\n";
		exit(EXIT_FAILURE);
	}

	int i;
	char level;
	for (i = k; i < MAX; i++)
	{
		cout << "Pleae enter your choice:\n"
		<< "e: Employee  m:Manager  f:Fink  h:highfink  q:quit\n";
		cin >> level;
		cin.ignore();
		switch(level)
		{
			case 'e':
			pc[i] = new employee;
			pc[i]->SetAll();
			pc[i]->writeall(fout);
			break;
			
			case 'm':
			pc[i] = new manager;
			pc[i]->SetAll();
			pc[i]->writeall(fout);
			break;

			case 'f':
			pc[i] = new fink;
			pc[i]->SetAll();
			pc[i]->writeall(fout);
			break;

			case 'h':	
			pc[i] = new highfink;
			pc[i]->SetAll();
			pc[i]->writeall(fout);
			break;
		}

		if (level == 'q')
			break;
		if (i == MAX)
			cout << "Reach the upper limit!\n";
	}


	cout << "line 106: i= "<< i << endl;

	for(int j = 0; j < i; j++)
	{
		pc[j]->ShowAll();
		delete pc[j]; // free memory
		cout << "pc["<<j<<"] deleted\n";
	}
	fout.close();

	return 0;
}
