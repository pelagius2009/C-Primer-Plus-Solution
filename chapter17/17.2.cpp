//17.2.cpp

#include<iostream>
#include<fstream>
#include<cstdlib>

int main(int argc, char * argv[])
{
	using namespace std;

	if (argc == 1)
	{
		cerr << "Usage: "<< argv[0] << " filename[s]\n";
		exit(EXIT_FAILURE);
	}

	ofstream outfile(argv[1], ios::out | ios::app);
	//fin.open(argv[1]);
	if (!outfile.is_open())
	{
		cerr << "Could not open" << argv[1] << endl;
		//fin.clear;
		exit(EXIT_FAILURE);
	}
	cout << "Please write down the contents you want to save to the file.\n";
   
	char ch;
	while((ch = cin.get())!= '\n')
		outfile << ch;

	outfile.close();

	//show revised file
	ifstream fin;
	fin.clear();
	fin.open(argv[1]);
	if (fin.is_open())
	{
		cout << "Here are the new contents of the "
			<< argv[1] << " file:\n";
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}

	cout << "\nDone.\n";
	return 0;
}
