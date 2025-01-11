//17.7.cpp

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;
void ShowStr(const string &);

class Store
{
	private:
		ofstream & fout;//of ? if?
	public:
		Store(ofstream & fout_p)
			:fout(fout_p){}
		void operator()(const string & str)
		{
			std::size_t len = str.size();
			fout.write((char *)&len, sizeof(std::size_t));
			fout.write(str.data(), len);
		}
};


void GetStrs(ifstream & fin, vector<string> & vistr);



int main()
{
	vector <string> vostr;
	string temp;

	//acquire strings
	cout << "Enter strings  (empty line to quit):\n";
	while (getline(cin, temp) && temp[0]!='\0')
		vostr.push_back(temp);
	cout << "Here is our input.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);

	//store in a file
	ofstream fout("strings.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	//recover file contents
	vector <string> vistr;
	ifstream fin("strings.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Could not open file for input. \n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nHere are the strings read from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);
	return 0;
}


void ShowStr(const string & str)
{
	cout << str << endl;
}



void GetStrs(ifstream & fin, vector<string> & vistr)
{
	//string tmp_str;
	//char ch;
	std::size_t len;
	while(fin.good())
	{
	string tmp_str;
	char ch;

	//cout << "I'm line 80" << endl;
	fin.read((char *)&len, sizeof(std::size_t));
//	cout << "len =" << len << endl;
	for(int i = 1; i <= len; i++)
	{
//		cout << "I'm line 88\n";
		fin.read((char *)&ch, sizeof(char));
		tmp_str += ch;
	}
//	cout <<"tem_str is: " << tmp_str << endl;
	vistr.push_back(tmp_str);
	}
}
