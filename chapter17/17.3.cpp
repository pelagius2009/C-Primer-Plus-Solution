//17.3.cpp

#include<iostream>
#include<fstream>
#include<cstdlib>

int main(int argc, char * argv[])
{
	using namespace std;

	if (argc != 3)
	{
		cerr << "Usage: "<< argv[0] << " source_filename[s]"
		<<" destinaton_filename[s]\n";
		exit(EXIT_FAILURE);
	}

	ifstream s_file;
	s_file.open(argv[1]);
	if (!s_file.is_open())
	{
		cerr << "Could not open" << argv[1] << endl;
		exit(EXIT_FAILURE);
	}

	
	ofstream d_file(argv[2], ios::out | ios::app);
	if (!d_file.is_open())
	{
		cerr << "Could not open" << argv[2] << endl;
		//fin.clear;
		exit(EXIT_FAILURE);
	}

   
	char ch;
	while(s_file.get(ch))
		d_file << ch;

	s_file.close();
	d_file.close();
	//show revised file

	ifstream fin;
	fin.open(argv[2]);
	if (fin.is_open())
	{
		cout << "Here are the new contents of the "
			<< argv[2] << " file:\n";
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}

	cout << "\nDone.\n";
	return 0;
}
