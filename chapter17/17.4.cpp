//17.4.cpp

#include<iostream>
#include<fstream>
#include<cstdlib>

int main(int argc, char * argv[])
{
	using namespace std;

	if (argc != 4)
	{
		cerr << "Usage: "<< argv[0] << " source_1_filename[s]"
		<< " source_2_filename[s]"
		<<" destinaton_filename[s]\n";
		exit(EXIT_FAILURE);
	}

	ifstream s1_file;
	s1_file.open(argv[1]);
	if (!s1_file.is_open())
	{
		cerr << "Could not open" << argv[1] << endl;
		exit(EXIT_FAILURE);
	}

	ifstream s2_file;
	s2_file.open(argv[2]);
	if (!s2_file.is_open())
	{
		cerr << "Could not open" << argv[2] << endl;
		exit(EXIT_FAILURE);
	}

	ofstream d_file(argv[3], ios::out | ios::app);
	if (!d_file.is_open())
	{
		cerr << "Could not open" << argv[2] << endl;
		exit(EXIT_FAILURE);
	}

	string str1;
	string str2;

	while(1)
	{
		getline(s1_file,str1);
		getline(s2_file,str2);
		if((str1 == "") && (str2 == ""))
			break;
		//cout << str1 << "--- " << str2 << endl;
		d_file << str1 << " " <<str2 << endl;

	}

	s1_file.close();
	s2_file.close();
	d_file.close();
	//show revised file

	char ch;
	ifstream fin;
	fin.open(argv[3]);
	if (fin.is_open())
	{
		cout << "Here are the new contents of the "
			<< argv[3] << " file:\n";
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}

	cout << "\nDone.\n";
	return 0;
}
